%{
	#include<stdio.h>
	#include<stdlib.h>
	int yylex();
	int yyerror();
	extern FILE *yyin;
	extern FILE *outputFile;
%}

%locations 
%define api.pure

%token 
BREAK DEFAULT FUNC INTERFACE SELECT CASE DEFER GO 
MAP STRUCT CHAN ELSE GOTO PACKAGE SWITCH CONST 
FALLTHROUGH IF RANGE TYPE CONTINUE FOR IMPORT RETURN VAR 
SC COL COM DOTS DOT LRB RRB LSB RSB LCB RCB
EQ ASSIGN STAR PIPE AND
INC DEC LOG_AND LOG_OR
REL_OP PAR_ADD_OP PAR_MUL_OP PAR_UNARY_OP
INT_LIT FLOAT_LIT IMAGINARY_LIT RUNE_LIT STRING_LIT
IDENTIFIER

%%

/* Source File */

SourceFile: PackageClause SC ImportDecl SC TopLevelDecl SC
	;


/* Package & Import Statements */

PackageClause: PACKAGE PackageName
	| error
	;
	
PackageName: IDENTIFIER
	| STRING_LIT
	;

ImportDecl: ImportDecl IMPORT PackageName
	| error
	|
	;


/* Block Statements */

Block: LCB StatementList RCB
	| LCB error RCB
	;

StatementList: StatementList Statement SC
	|
	;


/* Types */

Type: TypeName 
	| TypeLit 
	| LRB Type RRB 
	;

TypeName: IDENTIFIER 
	;

TypeLit: ArrayType 
	| PointerType 
	| FunctionType
	;

ArrayType: LSB ArrayLength RSB ElementType
	;

ArrayLength: Expression 
	;

ElementType: Type 
	;

PointerType: STAR BaseType
	;

BaseType: Type
	;

FunctionType: FUNC Signature 
	;

Signature: Parameters Result
	| Parameters
	;

Result: Parameters 
	| Type 
	;

Parameters: LRB ParameterList RRB
	| LRB RRB
	;

ParameterList: ParameterList COM ParameterDecl
	| ParameterDecl
	;

ParameterDecl: IdentifierList DOTS Type
	| IdentifierList Type
	| DOTS Type
	| Type
	;


/* Variable Declarations */

VarDecl: VAR VarSpec
	| VAR LRB VarSpec SC RepeatVarSpec RRB
	;

RepeatVarSpec: RepeatVarSpec VarSpec SC
	|
	;

VarSpec: IdentifierList Type EQ ExpressionList
	| IdentifierList Type
	| IdentifierList EQ ExpressionList
	;


/* Constants */

ConstDecl: CONST ConstSpec
	| CONST LRB ConstSpec SC RepeatConstSpec RRB
	;

RepeatConstSpec: RepeatConstSpec ConstSpec SC
	|
	;

ConstSpec: IdentifierList Type EQ ExpressionList
	| IdentifierList EQ ExpressionList
	| IdentifierList
	;

IdentifierList: IdentifierList COM IDENTIFIER
	| IDENTIFIER
	;

ExpressionList: ExpressionList COM Expression
	| Expression
	;


/* Declarations and Scope */

Declaration: ConstDecl
	| VarDecl
	;

TopLevelDecl: TopLevelDecl Declaration
	| TopLevelDecl FuncDecl
	| error
	|
	;


/* Short Variable Declarations */

ShortVarDecl: IdentifierList ASSIGN ExpressionList
	;


/* Function Declarations */

FuncDecl: FUNC FunctionName Signature FunctionBody
	;

FunctionName: IDENTIFIER
	;

FunctionBody: Block
	|
	;


/* Operators */

Expression: UnaryExpr
	| Expression binary_op Expression
	;

UnaryExpr: PrimaryExpr 
	| unary_op UnaryExpr
	;

binary_op: LOG_OR 
	| LOG_AND 
	| REL_OP 
	| add_op 
	| mul_op
	;

add_op: PAR_ADD_OP
	| PIPE
	;

mul_op: PAR_MUL_OP
	| STAR
	| AND
	;

unary_op: PAR_UNARY_OP
	| PAR_ADD_OP
	| STAR
	| AND
	;

PrimaryExpr: Operand
	| Selector
	| PrimaryExpr Selector
	| PrimaryExpr Index
	| PrimaryExpr TypeAsertion
	| PrimaryExpr Arguments
	;

Selector: DOT IDENTIFIER
	;

Index: LSB Expression RSB
	;

TypeAsertion: DOT LRB Type RRB

Arguments: LRB ExpressionList DOTS COM RRB
	| LRB ExpressionList DOTS RRB
	| LRB ExpressionList COM RRB
	| LRB ExpressionList RRB
	| LRB Type OptionArguments DOTS COM RRB
	| LRB Type OptionArguments DOTS RRB
	| LRB Type OptionArguments COM RRB
	| LRB Type OptionArguments RRB
	| LRB RRB
	| LRB error RRB
	;

OptionArguments: COM Expression
	|
	;


/* Oprands */

Operand: Literal 
	| OperandName 
	| LRB Expression RRB
	| LRB error RRB
	;

Literal: BasicLit
	;

BasicLit: INT_LIT 
	| FLOAT_LIT
	| IMAGINARY_LIT 
	| RUNE_LIT 
	| STRING_LIT
	;

OperandName: IDENTIFIER
	;


/* Statements */

Statement: Declaration 
	| LabeledStmt
	| SimpleStmt
	| GoStmt
	| ReturnStmt
	| BreakStmt
	| ContinueStmt
	| GotoStmt
	| FallthroughStmt
	| Block
	| IfStmt
	| SwitchStmt
	| ForStmt
	| DeferStmt
	| error
	;

SimpleStmt: EmptyStmt 
	| ExpressionStmt 
	| IncDecStmt 
	| Assignment 
	| ShortVarDecl
	;

LabeledStmt: Label COL Statement
	;

Label: IDENTIFIER
	;

GoStmt: GO Expression
	;

ReturnStmt: RETURN ExpressionList
	| RETURN
	;

BreakStmt: BREAK Label
	| BREAK
	;

ContinueStmt: CONTINUE Label
	| CONTINUE
	;

GotoStmt: GOTO Label
	;

FallthroughStmt: FALLTHROUGH
	;

IfStmt: IF SimpleStmt SC Expression Block ELSE IfStmt
	| IF SimpleStmt SC Expression Block ELSE Block
	| IF SimpleStmt SC Expression Block
	| IF Expression Block ELSE IfStmt
	| IF Expression Block ELSE Block
	| IF Expression Block
	;

SwitchStmt: ExprSwitchStmt 
	| TypeSwitchStmt
	;

ExprSwitchStmt: SWITCH SimpleStmt SC Expression LCB ExprCaseClause RCB
	| SWITCH SimpleStmt SC LCB ExprCaseClause RCB
	| SWITCH Expression LCB ExprCaseClause RCB
	| SWITCH LCB ExprCaseClause RCB
	;

ExprCaseClause: ExprCaseClause ExprSwitchCase COL StatementList
	|
	;

ExprSwitchCase: CASE ExpressionList 
	| DEFAULT
	;

TypeSwitchStmt: SWITCH SimpleStmt SC TypeSwitchGuard LCB TypeCaseClause RCB
	| SWITCH TypeSwitchGuard LCB TypeCaseClause RCB
	;

TypeSwitchGuard: IDENTIFIER ASSIGN PrimaryExpr DOT LRB TYPE RRB
	| PrimaryExpr DOT LRB TYPE RRB
	;

TypeCaseClause: TypeCaseClause TypeSwitchCase COL StatementList
	|
	;

TypeSwitchCase: CASE TypeList 
	| DEFAULT

TypeList: TypeList COM Type
	| Type
	;

ForStmt: FOR Condition Block
	| FOR ForClause Block
	| FOR RangeClause Block
	| FOR Block
	;

Condition: Expression
	|
	;

ForClause: InitStmt SC Condition SC PostStmt

InitStmt: SimpleStmt
	|
	;

PostStmt: SimpleStmt
	|
	;

RangeClause: ExpressionList EQ RANGE Expression
	| IdentifierList ASSIGN RANGE Expression
	| RANGE Expression
	;

DeferStmt: DEFER Expression
	;

EmptyStmt:
	;

ExpressionStmt: Expression
	;

IncDecStmt: Expression INC
	| Expression DEC
	;

Assignment: ExpressionList assign_op ExpressionList
	;

assign_op: add_op EQ
	| mul_op EQ
	| EQ
	;

%%

void main (int argc, char const *argv[]) {

	outputFile = fopen("parsedProgram.output", "w");
	yyin = fopen(argv[1], "r");

	do {
		if(yyparse()) {
			printf("Failure/Too many errors\n");
			exit(0);
		}
	} while (!feof(yyin));
	printf("\nFile parsed successfully");
	printf("\nSymbol Table generated\n");
}

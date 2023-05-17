%{
	#include "goYacc.tab.h"
	#include "symbolTable.h"
	int yycolumn = 1;
	#define YY_USER_ACTION yycolumn += yyleng;
	FILE *outputFile;
%}

%option yylineno
decimal_digit [0-9]
exponent [eE][+-]?{decimal_digit}+

%%

"//"(.)*[\n] {

	/* ignores single line comments */
	yycolumn = 1;
}

"\n" {
	fprintf(outputFile, "%s", yytext);
	yycolumn = 1;
}

"\t" {
	fprintf(outputFile, "%s", yytext);
	yycolumn = 5;
}

"break" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return BREAK;
}

"default" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return DEFAULT;
}

"func" {
	fprintf(outputFile, "%s", yytext);
	is_func = 1;
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return FUNC;
}

"interface" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return INTERFACE;
}

"select" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return SELECT;
}

"case" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return CASE;
}

"defer" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return DEFER;
}

"go" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return GO;
}

"map" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return MAP;
}

"struct" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return STRUCT;
}

"chan" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return CHAN;
}

"else" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return ELSE;
}

"goto" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return GOTO;
}

"package" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return PACKAGE;
}

"switch" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return SWITCH;
}

"const" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return CONST;
}

"fallthrough" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return FALLTHROUGH;
}

"if" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return IF;
}

"range" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return RANGE;
}

"type" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return TYPE;
}

"continue" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return CONTINUE;
}

"for" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return FOR;
}

"import" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return IMPORT;
}

"return" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return RETURN;
}

"var" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Keyword", yylineno, yycolumn - yyleng);
	return VAR;
}

";" {
	fprintf(outputFile, "%s", yytext);
	return SC;
}

":" {
	fprintf(outputFile, "%s", yytext);
	return COL;
}

"," {
	fprintf(outputFile, "%s", yytext);
	return COM;
}

"..." {
	fprintf(outputFile, "%s", yytext);
	return DOTS;
}

"." {
	fprintf(outputFile, "%s", yytext);
	return DOT;
}

"(" {
	fprintf(outputFile, "%s", yytext);
	return LRB;
}

")" {
	fprintf(outputFile, "%s", yytext);
	return RRB;
}

"[" {
	fprintf(outputFile, "%s", yytext);
	return LSB;
}

"]" {
	fprintf(outputFile, "%s", yytext);
	return RSB;
}

"{" {
	fprintf(outputFile, "%s", yytext);
	return LCB;
}

"}" {
	fprintf(outputFile, "%s", yytext);
	return RCB;
}

"=" {
	fprintf(outputFile, "%s", yytext);
	return EQ;
}

":=" {
	fprintf(outputFile, "%s", yytext);
	return ASSIGN;
}


"++" {
	fprintf(outputFile, "%s", yytext);
	return INC;
}

"--" {
	fprintf(outputFile, "%s", yytext);	
	return DEC;
}

"&&" {
	fprintf(outputFile, "%s", yytext);
	return LOG_AND;
}

"||" {
	fprintf(outputFile, "%s", yytext);
	return LOG_OR;
}

"*" {
	fprintf(outputFile, "%s", yytext);
	return STAR;
}

"|" {
	fprintf(outputFile, "%s", yytext);
	return PIPE;
}

"&" {
	fprintf(outputFile, "%s", yytext);
	return AND;
}

"=="|"!="|"<"|"<="|">"|">=" {
	fprintf(outputFile, "%s", yytext);
	return REL_OP;
}

"+"|"-"|"^" {
	fprintf(outputFile, "%s", yytext);
	return PAR_ADD_OP;
}

"/"|"%"|"<<"|">>"|"&^" {
	fprintf(outputFile, "%s", yytext);
	return PAR_MUL_OP;
}

"!"|"<-" {
	fprintf(outputFile, "%s", yytext);
	return PAR_UNARY_OP;
}

[a-zA-Z_][a-zA-Z_0-9]* {
	fprintf(outputFile, "%s", yytext);
	if (is_func == 1) {
		is_func = 0;
		insert(yytext, "FUNC", yylineno, yycolumn - yyleng);
	} else {
		insert(yytext, "Variable", yylineno, yycolumn - yyleng);
	}
	return IDENTIFIER;
}

{decimal_digit}+ {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Integer Literal", yylineno, yycolumn - yyleng);
	return INT_LIT;
}

{decimal_digit}+"."{decimal_digit}*|{decimal_digit}+{exponent}|"."{decimal_digit}+{exponent}? {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Float Literal", yylineno, yycolumn - yyleng);
	return FLOAT_LIT;
}

({decimal_digit}+|({decimal_digit}+"."{decimal_digit}*|{decimal_digit}+{exponent}|"."{decimal_digit}+{exponent}?))"i" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "Imaginary Literal", yylineno, yycolumn - yyleng);
	return IMAGINARY_LIT;
}

"'"[a-zA-Z_0-9]"'" {
	fprintf(outputFile, "%s", yytext);
	return RUNE_LIT;
}

"\"".*"\"" {
	fprintf(outputFile, "%s", yytext);
	insert(yytext, "String Literal", yylineno, yycolumn - yyleng);
	return STRING_LIT;
}

. {
	fprintf(outputFile, "%s", yytext);
}


%%

int yyerror(char const *msg, YYLTYPE yylloc) {
	printf("\nError found(Line: %d|Column: %d): %s\n", yylineno, yycolumn - yyleng, msg);
	return 1;
}

int yywrap() {
	print_sym_tbl();
	return 1;
}

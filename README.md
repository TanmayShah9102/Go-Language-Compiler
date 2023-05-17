﻿# Go-Language-Compiler

Basic GO lang compiler using Lex and YACC
Lexical, Syntax and semantic analysis implemented

Run the following commands to execute code:
1. flex .\goLexer.l
2. bison -d .\goYacc.y
3. gcc -o goCompiler lex.yy.c goYacc.tab.c
4. ./goCompiler.exe '.\test programs\helloWorld.go'

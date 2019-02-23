%{
/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2018��12��13��
****************************************************************************/
#include<string>
#include"symtree.h"
#include"symtable.h"
#include "myparser.h"
#include<iostream>
using namespace std;

TreeNode treenode;
extern TableNode symTable[100];
int lineno = 1;
%}

/////////////////////////////////////////////////////////////////////////////
// declarations section

// lexical analyser name
%name mylexer

// class definition
{
	// place any extra class members here
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

// place any declarations here
digit [0-9]
double_num	{digit}+\.{digit}+
int_num ([1-9]+[0-9]*)|([1-9])|0
constchar '.'
letter [a-zA-Z_]
identity {letter}({letter}|{digit})*
newline \n
demin [ \t\n]
ws {demin}+

notel \/\/.*
notep \/(\*)([^(\*)^"]*|\".*\"|\*+[^\/])*(\*)*(\*)\/

%%

/////////////////////////////////////////////////////////////////////////////
// rules section

%{
	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;
%}

// place your Lex rules here
//rule section
"main" {return MAIN;}
"int" {return INT;}
"double" {return DOUBLE;}
"char" {return CHAR;}
"if" {return IF;}
"while" {return WHILE;}
"for" {return FOR;}
"else" {return ELSE;}
"write" {return WRITE;}
"read" {return READ;}
"=" {return ASSIGN;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return TIMES;}
"/" {return OVER;}
"(" {return LPAREN;}
")" {return RPAREN;}
"[" {return LSQBRA;}
"]" {return RSQBRA;}
"{" {return LBRACE;}
"}" {return RBRACE;}
";" {return SEMICOLON;}
"," {return COMMA;}
"==" {return EQ;}
"<" {return LT;}
">" {return MT;}
"!=" {return NE;}
"&&" {return AND;}
"||" {return OR;}
"!" {return NOT;}

{notel} {}
{notep} {}
{double_num}	{
				yylval=&treenode;
				yylval->attr.double_value=atof(yytext);
				//cout<<atof(yytext)<<endl;;
				return DOUBLE_NUM;
				}
				
{int_num}	{
			yylval=&treenode;
			yylval->attr.int_value=atoi(yytext);
			return INT_NUM;
			}
			
{constchar}	{
				yylval = &treenode;
				yylval->attr.char_value = yytext[0];
				return CONSTCHAR;
			}

{identity} {
			
	int offset;
	offset = getOffset(yytext);

	yylval = &treenode;
	yylval->attr.val = offset;
	yylval->attr.name = symTable[offset-1].id.data();
	yylval->type = symTable[offset-1].type;

	return ID;
}

{newline} { lineno++; }
{ws} {/*do nothing*/;}



%%

/////////////////////////////////////////////////////////////////////////////
// programs section


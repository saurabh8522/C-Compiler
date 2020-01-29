/* Declaration section */
%option noyywrap
%option yylineno

/* Declarations*/
%{
   #include "lib/header.h"
   #define MAX_NODES 1000
   symbol_node *symbolTable[100];
   symbol_node *constantTable[100];
   symbol_node *headerTable[100];
   void printToken(char *info, char *token, int line_number);
%}

/* Definitions */
letter              [a-zA-Z]
digit               [0-9]
escape_sequences    0|a|b|f|n|r|t|v|"\\"|"\""|"\'"
keyword             signed|while|for|continue|break|if|else|return|struct|int|char|void|main|float|double|short|long|unsigned
operator            "&"|"^"|\||\|\||"="|">"|"<"|">="|"<="|"=="|"!="|"+"|"-"|"++"|"--"|"!"|"~"|"*"|"/"|"%"|">>"|"<<"|
alphanum            {letter}|{digit}
function            ((_|{letter})({alphanum}|_)*)/[ ]*[(]

/* Rules */
%%
\n                                           {}
" "                                          {}
"["                                          { printToken("LEFT BRACKET", yytext, yylineno); }
"]"                                          { printToken("RIGHT BRACKET", yytext, yylineno); }
"{"                                          { printToken("LEFT BRACE", yytext, yylineno); }
"}"                                          { printToken("RIGHT BRACE", yytext, yylineno); }
","                                          { printToken("COMMA", yytext, yylineno); }
";"                                          { printToken("SEMICOLON", yytext, yylineno); }


"#include"[ ]*"<"{letter}({alphanum})*".h>"   { printToken("HEADER", yytext, yylineno);insert(headerTable, yytext, "Header" , yylineno);}

"#define"[ ]+(_|{letter})({alphanum})*[ ]*(.)+   { printToken("PREPROCESSOR DIRECTIVE", yytext, yylineno); }

"//".*                                       { printToken("SINGLE LINE COMMENT", yytext, yylineno); }

("/*")(([^*]*[*]+[^*/])*([^*]*[*]+[/]))      { printToken("MULTI LINE COMMENT", yytext, yylineno); }

("/*")(([^*]*([*]+[^/])*)*)*                 { printToken(COL_RED "ERROR: UNMATCHED COMMENT", yytext, yylineno); }

"("                                          { printToken("LEFT PARENTHESIS", yytext, yylineno); }

")"                                          { printToken("RIGHT PARENTHESIS", yytext, yylineno); }

("\"")[^\n\"]*("\"")                         { printToken("STRING", yytext, yylineno); insert(constantTable, yytext, "String", yylineno);}

("\"")[^\n\"]*                               { printToken(COL_RED "ERROR: UNCLOSED STRING", yytext, yylineno); }

("\'")(("\\"({escape_sequences}))|.)("\'")   { printToken("CHARACTER", yytext, yylineno); insert(constantTable, yytext, "Character", yylineno);}

("\'")(((("\\")[^0abfnrtv\\\"\'][^\n\']*))|[^\n\''][^\n\'']+)("\'") { printToken(COL_RED "ERROR: NOT A CHARACTER", yytext, yylineno); }

{keyword}/[ ]*[(]?                           { printToken("KEYWORD", yytext, yylineno);}

#include[/"<][ ]*{letter}{letter}*\.h[/">]   { printToken("HEADER", yytext, yylineno);}

{operator}                                   { printToken("OPERATOR", yytext, yylineno); }

{function}                                   { printToken("FUNCTION", yytext, yylineno); insert(symbolTable, yytext, "Function", yylineno);}

(_|{letter})({alphanum}|_)*                  { printToken("IDENTIFIER", yytext, yylineno);insert(symbolTable, yytext, "Identfier", yylineno);}

"-"?{digit}+                                 { printToken("INTEGER", yytext, yylineno);insert(constantTable, yytext, "Integer", yylineno);}

"-"?{digit}+\.({digit}+)?                    { printToken("FLOATING POINT", yytext, yylineno);insert(constantTable, yytext, "Floating point", yylineno);}

%%

void printToken(char *info, char *token, int line_number){ printf(COL_YEL "%-30s\t\t%-30s\t\t%-30d\n" RESET, info, token, line_number);}

int main()
{
   printf(COL_MAG "\n" DASHES RESET);
   printf(COL_CYN "\t\t\t\t\t\t\tLexical Analyser for C \n" RESET);
   printf(COL_MAG DASHES "\n" RESET);
   printf(COL_GRN "%-30s\t\t%-30s\t\t%-30s\n", "TOKEN TYPE", "TOKEN VALUE", "TOKEN LINE NUMBER" RESET);
   yylex();
   print(symbolTable, "Symbol Table");
   print(constantTable, "Constant Table");
   print(headerTable, "Header Table");
   return 0;
}

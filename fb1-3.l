%%
"+" {printf("PLUS\n");}
"-" {printf("MINUS\n");}
"*" {printf("TIME\n");}
"/" {printf("DIVIDE\n");}
"|" {printf("ABS\n");}
[0-9]+ {printf("NUMBER\n", yytext);}
\n {printf("NEWLINE\n");}
[   \t] {}
. {printf("Mystery character %s\n", yytext);}
%%


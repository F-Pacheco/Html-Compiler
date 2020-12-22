%{
#include <stdio.h>
#include <stdlib.h>				/*Para limpiar pantalla*/
#include <conio.h>				/*Para la funcion getc*/
extern FILE *yyin;
extern int linea,op;
int yylex();
char *yytext;
int yylineno;
int yyerror(char *s);
%}

%token DOCTYPE
%token aperturaHtml
%token NUMERO
%token	cierreHml
%token	aperturaHead
%token	cierreHead
%token	META
%token	META1
%token	aperturaTitle
%token	cierreTitle
%token	aperturaBody
%token	cierreBody
%token	aperturaP
%token	cierreP
%token	aperturaH1
%token	cierreH1
%token	aperturaH2
%token	cierreH2
%token	aperturaH3
%token	cierreH3
%token	aperturaH4
%token	cierreH4
%token	aperturaH5
%token	cierreH5
%token	aperturaH6
%token	cierreH6
%token	aperturaStrong
%token	cierreStrong
%token	aperturaEm
%token	cierreEm
%token	aperturaMark
%token	cierreMark
%token	BR
%token	HR
%token	aperturaDiv
%token	cierreDiv
%token	aperturaSection
%token	cierreSection
%token	aperturaA
%token	cierreA
%token	IMG
%token	aperturaUl
%token	cierreUl
%token	aperturaOl
%token	cierreOl
%token	aperturaLi
%token	cierreLi
%token	aperturaTable
%token	cierreTable
%token	aperturaCaption
%token	cierreCaption
%token	aperturaThead
%token	cierreThead
%token	aperturaTfoot
%token	cierreTfoot
%token	aperturaTbody
%token	cierreTbody
%token	aperturaTr
%token	cierreTr
%token	aperturaTh
%token	cierreTh
%token	aperturaTd
%token	cierreTd
%token	PARRAFO

%start program
%% 
program: DOCTYPE CONTENIDO
		|error DOCTYPE CONTENIDO;  		/* Para evitar que se cierre el programa interactivo*/

CONTENIDO:	aperturaHtml CABECERA CUERPO cierreHml;

CABECERA:	aperturaHead META1 cierreHead |aperturaHead META1 TITULO cierreHead;

Extra:	META Extra | META;

CABECERA:	aperturaHead META1 Extra cierreHead |aperturaHead META1 Extra TITULO cierreHead;

TITULO:		aperturaTitle PARRAFO cierreTitle;

CUERPO:		aperturaBody ELEMENTO cierreBody;

							/*MENU*/


ELEMENTO: P | Section | DIV | Lista | Tabla |Resaltos| A | IMAGEN | PARRAFO;

ELEMENTO:	error ELEMENTO;

CIERRE: 	PARRAFO ELEMENTO | ELEMENTO;


					/*ETIQUETA DE PARRAFO*/

P: 	aperturaP CIERRE cierreP | aperturaP CIERRE cierreP CIERRE
	|aperturaP cierreP CIERRE|aperturaP cierreP;

						/*DIV Y SECTION*/

Section: aperturaSection CIERRE cierreSection | aperturaSection CIERRE cierreSection CIERRE
		|aperturaSection cierreSection|aperturaSection cierreSection CIERRE;

DIV: 	aperturaDiv CIERRE cierreDiv | aperturaDiv CIERRE cierreDiv CIERRE
		|aperturaDiv cierreDiv|aperturaDiv cierreDiv CIERRE;

							/* LISTA */

Lista:	aperturaOl ITEM cierreOl | aperturaUl ITEM cierreUl
		|aperturaOl ITEM cierreOl CIERRE| aperturaUl ITEM cierreUl CIERRE
		|aperturaOl cierreOl CIERRE | aperturaUl cierreUl CIERRE
		|aperturaOl cierreOl | aperturaUl cierreUl;
 

 /*NO CAMBIO PORQUE CRASHEA*/
ITEM:	aperturaLi PARRAFO ELEMENTO cierreLi|aperturaLi ELEMENTO cierreLi 
		|aperturaLi PARRAFO ELEMENTO cierreLi ITEM|aperturaLi ELEMENTO cierreLi ITEM
		|aperturaLi PARRAFO ELEMENTO cierreLi CIERRE ITEM|aperturaLi ELEMENTO cierreLi CIERRE ITEM
		|aperturaLi cierreLi ITEM|aperturaLi cierreLi CIERRE ITEM|aperturaLi cierreLi CIERRE;

							/*TABLA*/

Tabla:	aperturaTable Table cierreTable | aperturaTable Table cierreTable CIERRE
		|aperturaTable FILAS cierreTable | aperturaTable FILAS cierreTable CIERRE
		|aperturaTable CIERRE Table cierreTable | aperturaTable CIERRE Table cierreTable CIERRE
		|aperturaTable cierreTable|aperturaTable  cierreTable CIERRE;

Table:	aperturaCaption CIERRE cierreCaption |aperturaCaption CIERRE cierreCaption Table
		|aperturaCaption cierreCaption |aperturaCaption cierreCaption Table;

Table:	aperturaThead FILAS cierreThead|aperturaThead FILAS cierreThead Table
		|aperturaThead cierreThead|aperturaThead cierreThead Table;

Table:	aperturaTfoot FILAS cierreTfoot|aperturaTfoot FILAS cierreTfoot Table
		|aperturaTfoot cierreTfoot|aperturaTfoot cierreTfoot Table;
		
Table:	aperturaTbody FILAS cierreTbody|aperturaTbody FILAS cierreTbody Table
		|aperturaTbody cierreTbody|aperturaTbody cierreTbody Table;

FILAS:	aperturaTr CELDA cierreTr |aperturaTr CELDA cierreTr FILAS
		|aperturaTr cierreTr |aperturaTr cierreTr FILAS;

CELDA:	aperturaTh CIERRE cierreTh| aperturaTh CIERRE cierreTh CELDA
		|aperturaTh cierreTh| aperturaTh cierreTh CELDA;

CELDA:	aperturaTd CIERRE cierreTd| aperturaTd CIERRE cierreTd CELDA
		|aperturaTd cierreTd| aperturaTd cierreTd CELDA;

						/*ETIQUETA A E IMG*/

A:	 aperturaA CIERRE cierreA | aperturaA CIERRE cierreA CIERRE
	|aperturaA cierreA | aperturaA cierreA CIERRE;

IMAGEN:	IMG CIERRE | IMG;

					/*ETIQUETA DE RESALTE Y SALTOS*/

Resaltos:	 aperturaH1 CIERRE cierreH1|aperturaH1 cierreH1
			|aperturaH2 CIERRE cierreH2|aperturaH2 cierreH2
			|aperturaH3 CIERRE cierreH3|aperturaH3 cierreH3
			|aperturaH4 CIERRE cierreH4|aperturaH4 cierreH4
			|aperturaH5 CIERRE cierreH5|aperturaH5 cierreH5
			|aperturaH6 CIERRE cierreH6|aperturaH6 cierreH6;

Resaltos:	 aperturaH1 CIERRE cierreH1 CIERRE|aperturaH1 cierreH1 CIERRE
			|aperturaH2 CIERRE cierreH2 CIERRE|aperturaH2 cierreH2 CIERRE
			|aperturaH3 CIERRE cierreH3 CIERRE|aperturaH3 cierreH3 CIERRE
			|aperturaH4 CIERRE cierreH4 CIERRE|aperturaH4 cierreH4 CIERRE
			|aperturaH5 CIERRE cierreH5 CIERRE|aperturaH5 cierreH5 CIERRE
			|aperturaH6 CIERRE cierreH6 CIERRE|aperturaH6 cierreH6 CIERRE;


Resaltos:	 aperturaStrong CIERRE cierreStrong CIERRE
			|aperturaStrong CIERRE cierreStrong
			|aperturaStrong cierreStrong |aperturaStrong cierreStrong CIERRE;

Resaltos:	aperturaEm CIERRE cierreEm CIERRE
			|aperturaEm CIERRE cierreEm
			|aperturaEm cierreEm |aperturaEm cierreEm CIERRE;

Resaltos:	aperturaMark CIERRE cierreMark CIERRE
			|aperturaMark CIERRE cierreMark
			|aperturaMark cierreMark |aperturaMark cierreMark CIERRE;


Resaltos:	HR  | HR CIERRE 
		 	|BR  | BR CIERRE;

%%


/*Cuando se ejecuta en modo interactivo, en caso de encontrar un error lo advierte, en caso de que sea correcto lo ingresado simplemente permite ingresar un nuevo string y al finalizar advierte si la compilación fue exitosa o no, dependiendo del ultimo string ingresado*/



int yyerror(char *s) {
	if(op!=1){
	s = "Error de sintaxis en la linea";
	printf("\n%s %d: la sentencia no pertence al lenguaje. \n",s,yylineno);
	}
}
int main(int argc, char *argv[]) {
	int control;
	linea=1;
	system("cls");
	printf("\n\n\n");
	printf("----------------------------COMIENZO-------------------------- \n");
	if (argc == 2){
		yyin = fopen (argv[1],"r");
		if (yyin == NULL){ 
			printf("\n -------------------ERROR AL ABRIR EL FICHERO------------------- \n");
			return 0;
		}else{
			control = yyparse();
		}
			if (control == 0 && op!=1){
				system ("COLOR 2");
				printf("\n-------------------------COMPILACION EXITOSA------------------------- \n");
				printf("\n Lineas: %d\n",linea);
				getch();
				system ("COLOR 7");
			} else {
				system ("COLOR 7C");
				printf("\n -------------------OCURRIO UN ERROR DE COMPILACION------------------ \n");
				getch();
				system ("COLOR 7");
			}
	}else{
		printf("-----------------Se inicio el modo interactivo----------------- \n");
		printf("-----------------Para finalizar precione Ctrl+Z---------------- \n");
		yyin = stdin;				/*Le asignamos los valores que se ingresan por consola*/
		yyparse();
		printf ("--------------------Adios vuelva prontos-----------------------");
	}
	return 0;
}

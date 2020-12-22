%option noyywrap
%option caseless

%{
#include <stdio.h>
int linea,op;
%}

		/*TOK GENERALES*/

Parrafo			[a-z A-Z|á|é|í|ó|ú|ñ|.|=|:|\/||\"|,|\-|_|?|¿|")"|"("|"#"|"*"|0-9]+ 		
Letra			[a-z A-Z]
Numero 			[0-9]+
espacios 		[ \t\n]+

		/*ATRIBUTOS globales*/
       
atGlobales  	(({espacios}id=\"{Parrafo}\")?({espacios}class=\"{Parrafo}\")?|({espacios}class=\"{Parrafo}\")?({espacios}id=\"{Parrafo}\")?)
				
		/*ATRIBUTOS html*/

atHtml			(({espacios}lang=\"{Letra}{2}\")?)

		/*ATRIBUTOS de meta*/

atmeta			(({espacios}charset=\"{Parrafo}\")|({espacios}charset=\"{Parrafo}\")({espacios}name=\"{Parrafo}\")?({espacios}content=\"{Parrafo}\")?|({espacios}charset=\"{Parrafo}\")({espacios}content=\"{Parrafo}\")?({espacios}name=\"{Parrafo}\")?|({espacios}name=\"{Parrafo}\")?({espacios}content=\"{Parrafo}\")?|({espacios}content=\"{Parrafo}\")?({espacios}name=\"{Parrafo}\")?)

		/*ATRIBUTOS a*/

target 			(_blank|_self|_top|_parent)
atA 			(({atGlobales})?(({espacios}href=\"{enlace}\")?({espacios}target=\"{target}\")?|({espacios}target=\"{target}\")?)({espacios}href=\"{enlace}\")?)

		/*ATRIBUTOS img*/

atExtra			(({espacios}alt=\"{Parrafo}\")?({espacios}width=\"{Numero}\")?({espacios}height=\"{Numero}\")?|({espacios}width=\"{Numero}\")?({espacios}height=\"{Numero}\")?({espacios}alt=\"{Parrafo}\")?|({espacios}width=\"{Numero}\")?({espacios}alt=\"{Parrafo}\")?({espacios}height=\"{Numero}\")?|({espacios}height=\"{Numero}\")?({espacios}alt=\"{Parrafo}\")?({espacios}width=\"{Numero}\")?|({espacios}height=\"{Numero}\")?({espacios}width=\"{Numero}\")?({espacios}alt=\"{Parrafo}\")?|({espacios}alt=\"{Parrafo}\")?({espacios}height=\"{Numero}\")?({espacios}width=\"{Numero}\")?)
atImg 			(({atGlobales})?({espacios}src=\"{enlace}\")({atExtra})?)


		/*ATRIBUTOS table*/

atTabla 		({atGlobales}?({espacios}border=\"{Numero}\")?)

		/*ATRIBUTOS lista*/

tipoDeItem		[1aAiI]
atOl 			({atGlobales}?({espacios}type=\"{tipoDeItem}\")?)
atLi 			({atGlobales}?({espacios}value=\"{Numero}\")?)
				
		/*ATRIBUTOS URL, revisar si va fragmento sin ruta*/

stringURL		[a-z A-Z|0-9|\-|_|.|\/]+
protocolo		(http|https|fttp|fttps)
enlace 			({protocolo}:"/""/"{stringURL}(:{Numero})?("/"{stringURL})?(\#{stringURL})?)


%%
								/*-------------------- ACCIONES -------------------------*/

(" ")+															{}
[\t]+															{}
\n																{linea++;}
<<EOF>>															return 0;
"<"{espacios}?\!DOCTYPE{espacios}"html"{espacios}?">"			{printf("Se leyo una etiqueta DOCTYPE: %s \n",yytext);}
						
													/*HTML*/

"<"{espacios}?html{atHtml}{espacios}?">" 						{printf("Se leyo apertura html: %s \n",yytext);}
"<"{espacios}?\/html{espacios}?">"								{printf("Se leyo cierre de html: %s \n",yytext);}
						
													/*CABECERA*/

"<"{espacios}?head({atGlobales})?{espacios}?">"					{printf("Se leyo apertura de head: %s \n",yytext);}
"<"{espacios}?\/head{espacios}?">"								{printf("Se leyo cierre de head: %s \n",yytext);}
"<"{espacios}?meta{atmeta}{espacios}?">" 						{printf("Se leyo etiqueta meta: %s \n",yytext);}
"<"{espacios}?title({atGlobales})?{espacios}?">" 				{printf("Se leyo apertura de title: %s \n",yytext);}
"<"{espacios}?\/title{espacios}?">"								{printf("Se leyo cierre de title: %s \n",yytext);}

													/*BODY*/

"<"{espacios}?body({atGlobales})?{espacios}?">"					{printf("Se leyo apertura de body: %s \n",yytext);}
"<"{espacios}?\/body{espacios}?">"								{printf("Se leyo cierre de body: %s \n",yytext);}

												/*ETIQUETA DE p*/

"<"{espacios}?p({atGlobales})?{espacios}?">"					{printf("Se leyo una apertura de parrafo: %s \n",yytext);}
"<"{espacios}?\/p{espacios}?">"									{printf("Se leyo cierre de parrafo: %s \n",yytext);}

												/*ETIQUETAS h*/

"<"{espacios}?h1({atGlobales})?{espacios}?">"					{printf("Se leyo apertura de h1: %s \n",yytext);}
"<"{espacios}?\/h1{espacios}?">"								{printf("Se leyo cierre de h1: %s \n",yytext);}
"<"{espacios}?h2({atGlobales})?{espacios}?">"					{printf("Se leyo apertura de h2: %s \n",yytext);}
"<"{espacios}?\/h2{espacios}?">"								{printf("Se leyo cierre de h2: %s \n",yytext);}
"<"{espacios}?h3({atGlobales})?{espacios}?">"					{printf("Se leyo apertura de h3: %s \n",yytext);}
"<"{espacios}?\/h3{espacios}?">"								{printf("Se leyo cierre de h3: %s \n",yytext);}
"<"{espacios}?h4({atGlobales})?{espacios}?">"					{printf("Se leyo apertura de h4: %s \n",yytext);}
"<"{espacios}?\/h4{espacios}?">"								{printf("Se leyo cierre de h4: %s \n",yytext);}
"<"{espacios}?h5({atGlobales})?{espacios}?">"					{printf("Se leyo apertura de h5: %s \n",yytext);}
"<"{espacios}?\/h5{espacios}?">"								{printf("Se leyo cierre de h5: %s \n",yytext);}
"<"{espacios}?h6({atGlobales})?{espacios}?">"					{printf("Se leyo apertura de h6: %s \n",yytext);}
"<"{espacios}?\/h6{espacios}?{espacios}?">"						{printf("Se leyo cierre de h6: %s \n",yytext);}	

										/*ETIQUETAS de resalte y salto*/

"<"{espacios}?strong({atGlobales})?{espacios}?">"				{printf("Se leyo apertura de strong: %s \n",yytext);}
"<"{espacios}?\/strong{espacios}?">"							{printf("Se leyo cierre de strong: %s \n",yytext);}
"<"{espacios}?em({atGlobales})?{espacios}?">"					{printf("Se leyo apertura de em: %s \n",yytext);}
"<"{espacios}?\/em{espacios}?">"								{printf("Se leyo cierre de em: %s \n",yytext);}
"<"{espacios}?mark({atGlobales})?{espacios}?">"					{printf("Se leyo apertura de mark: %s \n",yytext);}
"<"{espacios}?\/mark{espacios}?">"								{printf("Se leyo cierre de mark: %s \n",yytext);}
"<"{espacios}?br({atGlobales})?{espacios}?">"					{printf("Se leyo etiqueta br: %s \n",yytext);}
"<"{espacios}?hr({atGlobales})?{espacios}?">"					{printf("Se leyo etiqueta hr: %s \n",yytext);}			
						
										/*ETIQUETA de div y section*/

"<"{espacios}?div({atGlobales})?{espacios}?">"					{printf("Se leyo apertura de div: %s \n",yytext);}
"<"{espacios}?\/div{espacios}?">"								{printf("Se leyo cierre de div: %s \n",yytext);}
"<"{espacios}?section({atGlobales})?{espacios}?">"				{printf("Se leyo apertura de section: %s \n",yytext);}
"<"{espacios}?\/section{espacios}?">"							{printf("Se leyo cierre de section: %s \n",yytext);}

												/*ETIQUETA a*/

"<"{espacios}?a{atA}{espacios}?">"								{printf("Se leyo apertura de a: %s \n",yytext);}
"<"{espacios}?\/a{espacios}?">"									{printf("Se leyo cierre de a: %s \n",yytext);}
							
												/*ETIQUETA img*/

"<"{espacios}?img{atImg}{espacios}?">"							{printf("Se leyo etiqueta de imagen: %s \n",yytext);}					

											/* ETIQUETA de lista */
						
"<"{espacios}?ul({atGlobales})?{espacios}?">"					{printf("Se leyo apertura de ul: %s \n",yytext);}
"<"{espacios}?\/ul{espacios}?">"								{printf("Se leyo cierre de ul: %s \n",yytext);}

"<"{espacios}?ol{atOl}{espacios}?">"							{printf("Se leyo apertura ol: %s \n",yytext);}
"<"{espacios}?\/ol{espacios}?">"								{printf("Se leyo cierre de ol: %s \n",yytext);}		

"<"{espacios}?li({atLi})?{espacios}?">"							{printf("Se leyo apertura de li: %s \n",yytext);}
"<"{espacios}?\/li{espacios}?">"								{printf("Se leyo cierre de li: %s \n",yytext);}

													/*TABLE*/

"<"{espacios}?table{atTabla}{espacios}?">"						{printf("Se leyo apertura table: %s \n",yytext);}
"<"{espacios}?\/table{espacios}?">"								{printf("Se leyo cierre de table: %s \n",yytext);}

"<"{espacios}?caption({atGlobales})?{espacios}?">"				{printf("Se leyo apertura caption: %s \n",yytext);}
"<"{espacios}?\/caption{espacios}?">"							{printf("Se leyo cierre de caption: %s \n",yytext);}

"<"{espacios}?thead({atGlobales})?{espacios}?">"				{printf("Se leyo apertura thead: %s \n",yytext);}
"<"{espacios}?\/thead{espacios}?">"								{printf("Se leyo cierre de thead: %s \n",yytext);}

"<"{espacios}?tfoot({atGlobales})?{espacios}?">"				{printf("Se leyo apertura tfoot: %s \n",yytext);}
"<"{espacios}?\/tfoot{espacios}?">"								{printf("Se leyo cierre de tfoot: %s \n",yytext);}

"<"{espacios}?tbody({atGlobales})?{espacios}?">"				{printf("Se leyo apertura tbody: %s \n",yytext);}
"<"{espacios}?\/tbody{espacios}?">"								{printf("Se leyo cierre de tbody: %s \n",yytext);}

"<"{espacios}?tr({atGlobales})?{espacios}?">"					{printf("Se leyo apertura tr: %s \n",yytext);}
"<"{espacios}?\/tr{espacios}?">"								{printf("Se leyo cierre de tr: %s \n",yytext);}

"<"{espacios}?th({atGlobales})?{espacios}?">"					{printf("Se leyo apertura th: %s \n",yytext);}
"<"{espacios}?\/th{espacios}?">"								{printf("Se leyo cierre de th: %s \n",yytext);}

"<"{espacios}?td({atGlobales})?{espacios}?">"					{printf("Se leyo apertura td: %s \n",yytext);}
"<"{espacios}?\/td{espacios}?">"								{printf("Se leyo cierre de td: %s \n",yytext);}


													/*URL*/

{enlace}														{printf("Se leyo un enlace: %s \n",yytext);}
							
													/*TEXTO*/

{Parrafo}														{printf ("Se leyo parrafo: %s \n",yytext);}


							/*Distingue entre la ejecucion interactiva y la ejecucion con archivo*/
							/*Si se ejecuta con archivo indica el numero de linea en el que se encuentra el error*/

.																{ if (op==1)
																	{	
																		printf("Linea: %d. Error lexico, no se reconoce: %s \n",linea,yytext);
																	}else{
																		printf("Error lexico, no se reconoce: %s \n",yytext);	
																	}
																}

%% 

int main (int argc, char *argv[])
{
	/* argc es un contador que tiene la cantidad de argumentos que le pasas. Siempre vale 1 o mas por que cuenta el nombre del ejecutable*/
	/* por eso pregunto si es mayor a 1 que quiere decir que le pase un parametro (que seria el nombre del archivo de entrada)*/
	if (argc > 1)
	{
		/*si es mayor a 1 quiere decir que le pase el txt de entrada con el codigo html*/
		/* *argv[] es un vector que contiene lo que se recibio por parametro, en la posicion 0 va a tener el nombre del ejecutable y en la 1 el nombre del archvo de entrada a analizar*/
		/*fopen es para empezar a leer del archivo, recibe dos parametros, el primero es el nombre del archivo y el segundo es el modo que seria lectura (rt)*/
		linea=1;
		op=1;
		yyin = fopen(argv[1], "rt");
	
	}else{

		/*si argc es < 1 quiere decir que no le pasamos ningun parametro por lo tanto va a leer de lo que ingresemos por teclado*/
		
		yyin = stdin;
	}
	yylex();
	return 0;
}
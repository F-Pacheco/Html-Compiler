%option noyywrap 			/*Para que solo se analice un archivo, yywrap dice que tiene que hacer yylex cuando encuentra el eof del archivo que está analizando*/
%option caseless
%option yylineno
%{
#include "y.tab.h"
#include <stdio.h>
#include <string.h>
int linea,op;
%}

		/*TOK GENERALES*/

espacios 		[ \t|\n]+
Parrafo			[a-z A-Z|á|é|í|ó|ú|ñ|.|=|\'|:|@|!|¡|\/|\"|,|\-|_|?|¿|")"|"("|"#"|"*"|{espacios}|0-9]+
ValorAt 		[a-zA-Z| \t|\n|0-9|\-|,|=|.|&|%|$|\/]* 		
Letra			[a-z A-Z]
Numero 			[0-9]+
comilla			({espacios}?\"|{espacios}?\'|{espacios}?\”)

		/*ATRIBUTOS globales*/
       
atGlobales  	(({espacios}?id{espacios}?={comilla}{ValorAt}{comilla})?({espacios}?class{espacios}?={comilla}{ValorAt}{comilla})?|({espacios}?class{espacios}?={comilla}{ValorAt}{comilla})?({espacios}?id{espacios}?={comilla}{ValorAt}{comilla})?)
				
				/*ATRIBUTOS URL, revisar si va fragmento sin ruta*/

stringURL		[a-z A-Z|0-9|\-|_|.|~|=|;|?|&]+
protocolo		(http|https|fttp|fttps)

opcion1			(({protocolo}:"/""/")?{stringURL}(:{Numero})?("/"{stringURL})*(\/)?(\#{stringURL})?)

opcion2			(({protocolo}:"/""/"{stringURL})?(:{Numero})?["/"{stringURL}]*(\/)?(\#{stringURL})?)

opcion3 		(({protocolo}:"/""/"{stringURL})?(:{Numero})?["/"{stringURL}]*(\/)?\#{stringURL})

enlace 			({opcion1}|{opcion2}|{opcion3})


		/*ATRIBUTOS html*/

atHtml			(({espacios}?lang{espacios}?={comilla}{Letra}{2}{comilla})?)
		/*ATRIBUTOS de meta*/

atmeta2			((({espacios})?name{espacios}?={espacios}?{comilla}{ValorAt}{comilla})?(({espacios})?content{espacios}?={comilla}{ValorAt}{comilla})?|(({espacios})?content{espacios}?={comilla}{ValorAt}{comilla})?(({espacios})?name{espacios}?={comilla}{ValorAt}{comilla})?)
atmeta1 		({espacios}?charset{espacios}?={comilla}{ValorAt}{comilla})

apMeta 			"<"meta

metextra 		{apMeta}{atmeta2}{espacios}?">"

META 			{apMeta}{atmeta1}{espacios}?">"

		/*ATRIBUTOS a*/

target 			(_blank|_self|_top|_parent)

href 			({espacios}?href{espacios}?={comilla}{enlace}{comilla})

atribA 			("a"{atGlobales}?{href}?({espacios}?target{espacios}?={comilla}{target}{comilla})?|"a"({espacios}?target{espacios}?={comilla}{target}{comilla})?{href}?)

		/*ATRIBUTOS img*/

src 			({espacios}?src{espacios}?={comilla}{enlace}{comilla})


alt 			({espacios}?alt{espacios}?={comilla}{ValorAt}{comilla})


width 			({espacios}?width{espacios}?={comilla}{Numero}{comilla})


height 			({espacios}?height{espacios}?={comilla}{Numero}{comilla})


atImg 			({src}{alt}?{width}?{height}?|{src}{width}?{height}?{alt}?|{src}{width}?{alt}?{height}?|{src}{height}?{alt}?{width}?|{src}{height}?{width}?{alt}?|{src}{alt}?{height}?{width}?|{alt}?{width}?{height}?{src}|{width}?{height}?{alt}?{src}|{width}?{alt}?{height}?{src}|{height}?{alt}?{width}?{src}|{height}?{width}?{alt}?{src}|{alt}?{height}?{width}?{src}|{alt}?{src}{width}?{height}?|{alt}?{width}?{height}?{src}|{alt}?{width}?{src}{height}?|{alt}?{height}?{src}{width}?|{alt}?{height}?{width}?{src}|{alt}?{src}{height}?{width}?|{src}{width}?{height}?{alt}?|{width}?{height}?{src}{alt}?|{width}?{src}{height}?{alt}?|{height}?{src}{width}?{alt}?|{height}?{width}?{src}{alt}?|{src}{height}?{width}?{alt}?|{width}?{alt}?{src}{height}?|{width}?{src}{height}?{alt}?|{width}?{src}{alt}?{height}?|{width}?{height}?{alt}?{src}|{width}?{height}?{src}{alt}?|{width}?{alt}?{height}?{src}|{alt}?{src}{height}?{width}?|{src}{height}?{alt}?{width}?|{src}{alt}?{height}?{width}?|{height}?{alt}?{src}{width}?|{height}?{src}{alt}?{width}?|{alt}?{height}?{src}{width}?|{height}?{alt}?{width}?{src}|{height}?{width}?{src}{alt}?|{height}?{width}?{alt}?{src}|{height}?{src}{alt}?{width}?|{height}?{src}{width}?{alt}?|{height}?{alt}?{src}{width}?|{alt}?{width}?{src}{height}?|{width}?{src}{alt}?{height}?|{width}?{alt}?{src}{height}?|{src}{alt}?{width}?{height}?|{src}{width}?{alt}?{height}?|{alt}?{src}{width}?{height}?)
			

		/*ATRIBUTOS table*/

atTabla 		({atGlobales}?({espacios}?border{espacios}?={comilla}{Numero}{comilla})?)

		/*ATRIBUTOS lista*/

tipoDeItem		[1aAiI]
atOl 			({atGlobales}?({espacios}?type{espacios}?={comilla}{tipoDeItem}{comilla})?)
atLi 			({atGlobales}?({espacios}?value{espacios}?={comilla}{Numero}{comilla})?)
				

%%
				/*-------------------- ACCIONES -------------------------*/

<<EOF>>															return(0);

"<"{espacios}?\!DOCTYPE{espacios}?"html"{espacios}?">"			{return(DOCTYPE);}
						
										/*HTML, primero los globales*/
"<"{espacios}?html{atHtml}{espacios}?">" 						{return(aperturaHtml);}
"<"{espacios}?\/html{espacios}?">"								{return(cierreHml);}
						
												/*CABECERA*/
"<"{espacios}?head({atGlobales})?{espacios}?">"					{return(aperturaHead);}
"<"{espacios}?\/head{espacios}?">"								{return(cierreHead);}
{META} 															{return(META1);}

{metextra} 														{return(META);}


"<"{espacios}?title({atGlobales})?{espacios}?">" 				{return(aperturaTitle);}
"<"{espacios}?\/title{espacios}?">"								{return(cierreTitle);}

													/*BODY*/

"<"{espacios}?body({atGlobales})?{espacios}?">"					{return(aperturaBody);}
"<"{espacios}?\/body{espacios}?">"								{return(cierreBody);}
												/*ETIQUETA DE p*/

"<"{espacios}?p({atGlobales})?{espacios}?">"					{return(aperturaP);}
"<"{espacios}?\/p{espacios}?">"									{return(cierreP);}

												/*ETIQUETAS h*/

"<"{espacios}?h1({atGlobales})?{espacios}?">"					{return(aperturaH1);}
"<"{espacios}?\/h1{espacios}?">"								{return(cierreH1);}

"<"{espacios}?h2({atGlobales})?{espacios}?">"					{return(aperturaH2);}
"<"{espacios}?\/h2{espacios}?">"								{return(cierreH2);}

"<"{espacios}?h3({atGlobales})?{espacios}?">"					{return(aperturaH3);}
"<"{espacios}?\/h3{espacios}?">"								{return(cierreH3);}

"<"{espacios}?h4({atGlobales})?{espacios}?">"					{return(aperturaH4);}
"<"{espacios}?\/h4{espacios}?">"								{return(cierreH4);}

"<"{espacios}?h5({atGlobales})?{espacios}?">"					{return(aperturaH5);}
"<"{espacios}?\/h5{espacios}?">"								{return(cierreH5);}

"<"{espacios}?h6({atGlobales})?{espacios}?">"					{return(aperturaH6);}
"<"{espacios}?\/h6{espacios}?{espacios}?">"						{return(cierreH6);}

										/*ETIQUETAS de resalte y salto*/

"<"{espacios}?strong({atGlobales})?{espacios}?">"				{return(aperturaStrong);}
"<"{espacios}?\/strong{espacios}?">"							{return(cierreStrong);}

"<"{espacios}?em({atGlobales})?{espacios}?">"					{return(aperturaEm);}
"<"{espacios}?\/em{espacios}?">"								{return(cierreEm);}

"<"{espacios}?mark({atGlobales})?{espacios}?">"					{return(aperturaMark);}
"<"{espacios}?\/mark{espacios}?">"								{return(cierreMark);}

"<"{espacios}?br({atGlobales})?{espacios}?">"					{return(BR);}

"<"{espacios}?hr({atGlobales})?{espacios}?">"					{return(HR);}	
						
										/*ETIQUETA de div y section*/

"<"{espacios}?div({atGlobales})?{espacios}?">"					{return(aperturaDiv);}
"<"{espacios}?\/div{espacios}?">"								{return(cierreDiv);}

"<"{espacios}?section({atGlobales})?{espacios}?">"				{return(aperturaSection);}
"<"{espacios}?\/section{espacios}?">"							{return(cierreSection);}

												/*ETIQUETA a*/

"<"{atribA}">"													{return(aperturaA);}
"<"{espacios}?\/a{espacios}?">"									{return(cierreA);}
							
												/*ETIQUETA img*/

"<"{espacios}?img{atGlobales}?{atImg}{espacios}?">"							{return(IMG);}					

											/* ETIQUETA de lista */
						
"<"{espacios}?ul({atGlobales})?{espacios}?">"					{return(aperturaUl);}
"<"{espacios}?\/ul{espacios}?">"								{return(cierreUl);}

"<"{espacios}?ol{atOl}{espacios}?">"							{return(aperturaOl);}
"<"{espacios}?\/ol{espacios}?">"								{return(cierreOl);}	

"<"{espacios}?li({atLi})?{espacios}?">"							{return(aperturaLi);}
"<"{espacios}?\/li{espacios}?">"								{return(cierreLi);}

													/*TABLE*/

"<"{espacios}?table{atTabla}{espacios}?">"						{return(aperturaTable);}
"<"{espacios}?\/table{espacios}?">"								{return(cierreTable);}

"<"{espacios}?caption({atGlobales})?{espacios}?">"				{return(aperturaCaption);}
"<"{espacios}?\/caption{espacios}?">"							{return(cierreCaption);}

"<"{espacios}?thead({atGlobales})?{espacios}?">"				{return(aperturaThead);}
"<"{espacios}?\/thead{espacios}?">"								{return(cierreThead);}

"<"{espacios}?tfoot({atGlobales})?{espacios}?">"				{return(aperturaTfoot);}
"<"{espacios}?\/tfoot{espacios}?">"								{return(cierreTfoot);}

"<"{espacios}?tbody({atGlobales})?{espacios}?">"				{return(aperturaTbody);}
"<"{espacios}?\/tbody{espacios}?">"								{return(cierreTbody);}

"<"{espacios}?tr({atGlobales})?{espacios}?">"					{return(aperturaTr);}
"<"{espacios}?\/tr{espacios}?">"								{return(cierreTr);}

"<"{espacios}?th({atGlobales})?{espacios}?">"					{return(aperturaTh);}
"<"{espacios}?\/th{espacios}?">"								{return(cierreTh);}

"<"{espacios}?td({atGlobales})?{espacios}?">"					{return(aperturaTd);}
"<"{espacios}?\/td{espacios}?">"								{return(cierreTd);}


													/*TEXTO*/

{Parrafo}														{return(PARRAFO);}

(" ")+															{}
[\t]+															{}
\n																{linea++;}
. 			 	{printf("\nError de sintaxis en linea %d: no se reconocio el token. \n",linea);
				op=1;}
%% 
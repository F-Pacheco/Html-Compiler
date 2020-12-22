
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>				/*Para limpiar pantalla*/
#include <conio.h>				/*Para la funcion getc*/
extern FILE *yyin;
extern int linea,op;
int yylex();
char *yytext;
int yylineno;
int yyerror(char *s);


/* Line 189 of yacc.c  */
#line 86 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DOCTYPE = 258,
     aperturaHtml = 259,
     NUMERO = 260,
     cierreHml = 261,
     aperturaHead = 262,
     cierreHead = 263,
     META = 264,
     META1 = 265,
     aperturaTitle = 266,
     cierreTitle = 267,
     aperturaBody = 268,
     cierreBody = 269,
     aperturaP = 270,
     cierreP = 271,
     aperturaH1 = 272,
     cierreH1 = 273,
     aperturaH2 = 274,
     cierreH2 = 275,
     aperturaH3 = 276,
     cierreH3 = 277,
     aperturaH4 = 278,
     cierreH4 = 279,
     aperturaH5 = 280,
     cierreH5 = 281,
     aperturaH6 = 282,
     cierreH6 = 283,
     aperturaStrong = 284,
     cierreStrong = 285,
     aperturaEm = 286,
     cierreEm = 287,
     aperturaMark = 288,
     cierreMark = 289,
     BR = 290,
     HR = 291,
     aperturaDiv = 292,
     cierreDiv = 293,
     aperturaSection = 294,
     cierreSection = 295,
     aperturaA = 296,
     cierreA = 297,
     IMG = 298,
     aperturaUl = 299,
     cierreUl = 300,
     aperturaOl = 301,
     cierreOl = 302,
     aperturaLi = 303,
     cierreLi = 304,
     aperturaTable = 305,
     cierreTable = 306,
     aperturaCaption = 307,
     cierreCaption = 308,
     aperturaThead = 309,
     cierreThead = 310,
     aperturaTfoot = 311,
     cierreTfoot = 312,
     aperturaTbody = 313,
     cierreTbody = 314,
     aperturaTr = 315,
     cierreTr = 316,
     aperturaTh = 317,
     cierreTh = 318,
     aperturaTd = 319,
     cierreTd = 320,
     PARRAFO = 321
   };
#endif
/* Tokens.  */
#define DOCTYPE 258
#define aperturaHtml 259
#define NUMERO 260
#define cierreHml 261
#define aperturaHead 262
#define cierreHead 263
#define META 264
#define META1 265
#define aperturaTitle 266
#define cierreTitle 267
#define aperturaBody 268
#define cierreBody 269
#define aperturaP 270
#define cierreP 271
#define aperturaH1 272
#define cierreH1 273
#define aperturaH2 274
#define cierreH2 275
#define aperturaH3 276
#define cierreH3 277
#define aperturaH4 278
#define cierreH4 279
#define aperturaH5 280
#define cierreH5 281
#define aperturaH6 282
#define cierreH6 283
#define aperturaStrong 284
#define cierreStrong 285
#define aperturaEm 286
#define cierreEm 287
#define aperturaMark 288
#define cierreMark 289
#define BR 290
#define HR 291
#define aperturaDiv 292
#define cierreDiv 293
#define aperturaSection 294
#define cierreSection 295
#define aperturaA 296
#define cierreA 297
#define IMG 298
#define aperturaUl 299
#define cierreUl 300
#define aperturaOl 301
#define cierreOl 302
#define aperturaLi 303
#define cierreLi 304
#define aperturaTable 305
#define cierreTable 306
#define aperturaCaption 307
#define cierreCaption 308
#define aperturaThead 309
#define cierreThead 310
#define aperturaTfoot 311
#define cierreTfoot 312
#define aperturaTbody 313
#define cierreTbody 314
#define aperturaTr 315
#define cierreTr 316
#define aperturaTh 317
#define cierreTh 318
#define aperturaTd 319
#define cierreTd 320
#define PARRAFO 321




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 260 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3283

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNRULES -- Number of states.  */
#define YYNSTATES  210

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    15,    19,    24,    27,    29,
      34,    40,    44,    48,    50,    52,    54,    56,    58,    60,
      62,    64,    66,    69,    72,    74,    78,    83,    87,    90,
      94,    99,   102,   106,   110,   115,   118,   122,   126,   130,
     135,   140,   144,   148,   151,   154,   159,   163,   169,   174,
     181,   187,   191,   196,   200,   204,   209,   213,   218,   223,
     229,   232,   236,   240,   245,   248,   252,   256,   261,   264,
     268,   272,   277,   280,   284,   288,   293,   296,   300,   304,
     309,   312,   316,   320,   325,   328,   332,   336,   341,   344,
     348,   352,   357,   360,   364,   367,   369,   373,   376,   380,
     383,   387,   390,   394,   397,   401,   404,   408,   411,   416,
     420,   425,   429,   434,   438,   443,   447,   452,   456,   461,
     465,   470,   474,   477,   481,   486,   490,   493,   497,   502,
     506,   509,   513,   515,   518,   520
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      68,     0,    -1,     3,    69,    -1,     1,     3,    69,    -1,
       4,    70,    73,     6,    -1,     7,    10,     8,    -1,     7,
      10,    72,     8,    -1,     9,    71,    -1,     9,    -1,     7,
      10,    71,     8,    -1,     7,    10,    71,    72,     8,    -1,
      11,    66,    12,    -1,    13,    74,    14,    -1,    76,    -1,
      77,    -1,    78,    -1,    79,    -1,    81,    -1,    87,    -1,
      85,    -1,    86,    -1,    66,    -1,     1,    74,    -1,    66,
      74,    -1,    74,    -1,    15,    75,    16,    -1,    15,    75,
      16,    75,    -1,    15,    16,    75,    -1,    15,    16,    -1,
      39,    75,    40,    -1,    39,    75,    40,    75,    -1,    39,
      40,    -1,    39,    40,    75,    -1,    37,    75,    38,    -1,
      37,    75,    38,    75,    -1,    37,    38,    -1,    37,    38,
      75,    -1,    46,    80,    47,    -1,    44,    80,    45,    -1,
      46,    80,    47,    75,    -1,    44,    80,    45,    75,    -1,
      46,    47,    75,    -1,    44,    45,    75,    -1,    46,    47,
      -1,    44,    45,    -1,    48,    66,    74,    49,    -1,    48,
      74,    49,    -1,    48,    66,    74,    49,    80,    -1,    48,
      74,    49,    80,    -1,    48,    66,    74,    49,    75,    80,
      -1,    48,    74,    49,    75,    80,    -1,    48,    49,    80,
      -1,    48,    49,    75,    80,    -1,    48,    49,    75,    -1,
      50,    82,    51,    -1,    50,    82,    51,    75,    -1,    50,
      83,    51,    -1,    50,    83,    51,    75,    -1,    50,    75,
      82,    51,    -1,    50,    75,    82,    51,    75,    -1,    50,
      51,    -1,    50,    51,    75,    -1,    52,    75,    53,    -1,
      52,    75,    53,    82,    -1,    52,    53,    -1,    52,    53,
      82,    -1,    54,    83,    55,    -1,    54,    83,    55,    82,
      -1,    54,    55,    -1,    54,    55,    82,    -1,    56,    83,
      57,    -1,    56,    83,    57,    82,    -1,    56,    57,    -1,
      56,    57,    82,    -1,    58,    83,    59,    -1,    58,    83,
      59,    82,    -1,    58,    59,    -1,    58,    59,    82,    -1,
      60,    84,    61,    -1,    60,    84,    61,    83,    -1,    60,
      61,    -1,    60,    61,    83,    -1,    62,    75,    63,    -1,
      62,    75,    63,    84,    -1,    62,    63,    -1,    62,    63,
      84,    -1,    64,    75,    65,    -1,    64,    75,    65,    84,
      -1,    64,    65,    -1,    64,    65,    84,    -1,    41,    75,
      42,    -1,    41,    75,    42,    75,    -1,    41,    42,    -1,
      41,    42,    75,    -1,    43,    75,    -1,    43,    -1,    17,
      75,    18,    -1,    17,    18,    -1,    19,    75,    20,    -1,
      19,    20,    -1,    21,    75,    22,    -1,    21,    22,    -1,
      23,    75,    24,    -1,    23,    24,    -1,    25,    75,    26,
      -1,    25,    26,    -1,    27,    75,    28,    -1,    27,    28,
      -1,    17,    75,    18,    75,    -1,    17,    18,    75,    -1,
      19,    75,    20,    75,    -1,    19,    20,    75,    -1,    21,
      75,    22,    75,    -1,    21,    22,    75,    -1,    23,    75,
      24,    75,    -1,    23,    24,    75,    -1,    25,    75,    26,
      75,    -1,    25,    26,    75,    -1,    27,    75,    28,    75,
      -1,    27,    28,    75,    -1,    29,    75,    30,    75,    -1,
      29,    75,    30,    -1,    29,    30,    -1,    29,    30,    75,
      -1,    31,    75,    32,    75,    -1,    31,    75,    32,    -1,
      31,    32,    -1,    31,    32,    75,    -1,    33,    75,    34,
      75,    -1,    33,    75,    34,    -1,    33,    34,    -1,    33,
      34,    75,    -1,    36,    -1,    36,    75,    -1,    35,    -1,
      35,    75,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    80,    80,    81,    83,    85,    85,    87,    87,    89,
      89,    91,    93,    98,    98,    98,    98,    98,    98,    98,
      98,    98,   100,   102,   102,   107,   107,   108,   108,   112,
     112,   113,   113,   115,   115,   116,   116,   120,   120,   121,
     121,   122,   122,   123,   123,   127,   127,   128,   128,   129,
     129,   130,   130,   130,   134,   134,   135,   135,   136,   136,
     137,   137,   139,   139,   140,   140,   142,   142,   143,   143,
     145,   145,   146,   146,   148,   148,   149,   149,   151,   151,
     152,   152,   154,   154,   155,   155,   157,   157,   158,   158,
     162,   162,   163,   163,   165,   165,   169,   169,   170,   170,
     171,   171,   172,   172,   173,   173,   174,   174,   176,   176,
     177,   177,   178,   178,   179,   179,   180,   180,   181,   181,
     184,   185,   186,   186,   188,   189,   190,   190,   192,   193,
     194,   194,   197,   197,   198,   198
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOCTYPE", "aperturaHtml", "NUMERO",
  "cierreHml", "aperturaHead", "cierreHead", "META", "META1",
  "aperturaTitle", "cierreTitle", "aperturaBody", "cierreBody",
  "aperturaP", "cierreP", "aperturaH1", "cierreH1", "aperturaH2",
  "cierreH2", "aperturaH3", "cierreH3", "aperturaH4", "cierreH4",
  "aperturaH5", "cierreH5", "aperturaH6", "cierreH6", "aperturaStrong",
  "cierreStrong", "aperturaEm", "cierreEm", "aperturaMark", "cierreMark",
  "BR", "HR", "aperturaDiv", "cierreDiv", "aperturaSection",
  "cierreSection", "aperturaA", "cierreA", "IMG", "aperturaUl", "cierreUl",
  "aperturaOl", "cierreOl", "aperturaLi", "cierreLi", "aperturaTable",
  "cierreTable", "aperturaCaption", "cierreCaption", "aperturaThead",
  "cierreThead", "aperturaTfoot", "cierreTfoot", "aperturaTbody",
  "cierreTbody", "aperturaTr", "cierreTr", "aperturaTh", "cierreTh",
  "aperturaTd", "cierreTd", "PARRAFO", "$accept", "program", "CONTENIDO",
  "CABECERA", "Extra", "TITULO", "CUERPO", "ELEMENTO", "CIERRE", "P",
  "Section", "DIV", "Lista", "ITEM", "Tabla", "Table", "FILAS", "CELDA",
  "A", "IMAGEN", "Resaltos", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    68,    69,    70,    70,    71,    71,    70,
      70,    72,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    75,    75,    76,    76,    76,    76,    77,
      77,    77,    77,    78,    78,    78,    78,    79,    79,    79,
      79,    79,    79,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    81,    81,    81,    81,    81,    81,
      81,    81,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    83,    83,
      83,    83,    84,    84,    84,    84,    84,    84,    84,    84,
      85,    85,    85,    85,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     4,     3,     4,     2,     1,     4,
       5,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     3,     4,     3,     2,     3,
       4,     2,     3,     3,     4,     2,     3,     3,     3,     4,
       4,     3,     3,     2,     2,     4,     3,     5,     4,     6,
       5,     3,     4,     3,     3,     4,     3,     4,     4,     5,
       2,     3,     3,     4,     2,     3,     3,     4,     2,     3,
       3,     4,     2,     3,     3,     4,     2,     3,     3,     4,
       2,     3,     3,     4,     2,     3,     3,     4,     2,     3,
       3,     4,     2,     3,     2,     1,     3,     2,     3,     2,
       3,     2,     3,     2,     3,     2,     3,     2,     4,     3,
       4,     3,     4,     3,     4,     3,     4,     3,     4,     3,
       4,     3,     2,     3,     4,     3,     2,     3,     4,     3,
       2,     3,     1,     2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     2,     1,     3,     0,
       0,     0,     0,     0,     5,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,    13,    14,    15,    16,    17,    19,    20,    18,     4,
       7,     0,     9,     0,     6,    22,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   133,
       0,     0,     0,     0,     0,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    11,    10,    27,    23,     0,   109,     0,   111,
       0,   113,     0,   115,     0,   117,     0,   119,     0,   123,
       0,   127,     0,   131,     0,    36,     0,    32,     0,    93,
       0,    42,     0,     0,     0,     0,    41,     0,    61,    64,
       0,    68,     0,    72,     0,    76,     0,    80,     0,     0,
       0,     0,     0,     0,    26,   108,   110,   112,   114,   116,
     118,   120,   124,   128,    34,    30,    91,    53,    51,     0,
       0,    40,    39,    65,    62,    69,    66,    73,    70,    77,
      74,    81,    84,     0,    88,     0,    78,     0,    55,    57,
      52,     0,     0,    48,    63,    67,    71,    75,    85,    82,
      89,    86,    79,    59,     0,    47,    50,    83,    87,    49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     6,    10,    17,    18,    13,    58,    59,    41,
      42,    43,    44,    89,    45,    99,   100,   150,    46,    47,
      48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -164
static const yytype_int16 yypact[] =
{
      43,    19,    25,    40,    25,    26,  -164,  -164,  -164,    42,
      41,    59,  3217,    50,  -164,    49,    -6,    23,    54,  3217,
    2365,  2409,  2453,  2499,  2543,  2587,  2631,  2675,  2719,  2763,
     173,   227,  2807,  2851,  2895,   281,    33,   -32,  2225,  -164,
      66,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,    52,  -164,    65,  -164,  -164,   335,   389,  -164,    70,
     443,    72,   497,    68,   551,    84,   605,    86,   659,    82,
     713,    64,   767,    87,   821,    62,   875,    78,  -164,  -164,
     929,    80,   983,    79,  1037,    81,  -164,  1091,  2939,    75,
    1145,    74,  1199,  2983,   -18,    22,    24,    13,   -26,    71,
      73,  -164,  -164,  -164,  -164,  -164,  1253,  -164,  1307,  -164,
    1361,  -164,  1415,  -164,  1469,  -164,  1523,  -164,  1577,  -164,
    1631,  -164,  1685,  -164,  1739,  -164,  1793,  -164,  1847,  -164,
    1901,  -164,  3027,  3071,    76,  1955,  -164,  2009,  -164,   -26,
      77,   -26,    83,   -26,    69,   -26,    85,    90,  3115,  3165,
      91,    89,  2063,  2117,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,    88,  -164,    93,
    2269,  -164,  -164,  -164,   -26,  -164,   -26,  -164,   -26,  -164,
     -26,  -164,   -14,    92,   -14,    94,    90,  2171,  -164,  -164,
    -164,  2317,    88,  -164,  -164,  -164,  -164,  -164,  -164,   -14,
    -164,   -14,  -164,  -164,    88,  -164,  -164,  -164,  -164,  -164
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,  -164,   125,  -164,   119,   126,  -164,     8,   -21,  -164,
    -164,  -164,  -164,   -19,  -164,   -41,   -71,  -163,  -164,  -164,
    -164
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -135
static const yytype_int16 yytable[] =
{
      61,    63,    65,    67,    69,    71,    73,    75,    77,    78,
      79,    81,    83,    85,    86,    90,    88,    98,    91,   198,
      40,   200,     4,   142,   144,   146,    93,    55,    94,     5,
      95,    52,    96,     9,    16,   104,   207,   141,   208,   107,
       7,   109,    97,   111,     1,   113,     2,   115,   148,   117,
     149,   119,    11,   121,    12,   123,    49,   151,    15,   125,
      51,   127,    54,   129,   102,   105,   131,    14,    15,   136,
      16,   138,   140,   103,   147,   148,   181,   149,    87,   143,
     101,    88,    97,   145,    97,   154,   106,   155,   110,   156,
     108,   157,   118,   158,   122,   159,   134,   160,   173,   161,
     175,   162,   177,   163,   179,   164,   112,   165,   116,   166,
     114,   167,   124,   168,   171,   202,   172,   120,   126,   128,
     135,   137,   152,   130,   153,   170,   178,   183,   185,     8,
     174,   188,   189,   194,    50,   195,    88,   196,   176,   197,
     187,   169,   191,    53,   180,     0,     0,     0,   190,   192,
      97,   193,   186,     0,     0,   199,     0,     0,     0,   201,
       0,     0,     0,     0,     0,     0,   203,     0,     0,     0,
     204,     0,   205,   206,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   209,     0,  -134,    20,  -134,
      21,  -134,    22,  -134,    23,  -134,    24,  -134,    25,  -134,
      26,  -134,    27,  -134,    28,  -134,    29,  -134,    30,    31,
      32,  -134,    33,  -134,    34,  -134,    35,    36,  -134,    37,
    -134,  -134,  -134,    38,     0,  -134,  -134,  -134,    19,  -134,
       0,  -134,     0,     0,     0,     0,  -134,     0,  -134,    57,
       0,  -132,    20,  -132,    21,  -132,    22,  -132,    23,  -132,
      24,  -132,    25,  -132,    26,  -132,    27,  -132,    28,  -132,
      29,  -132,    30,    31,    32,  -132,    33,  -132,    34,  -132,
      35,    36,  -132,    37,  -132,  -132,  -132,    38,     0,  -132,
    -132,  -132,    19,  -132,     0,  -132,     0,     0,     0,     0,
    -132,     0,  -132,    57,     0,   -95,    20,   -95,    21,   -95,
      22,   -95,    23,   -95,    24,   -95,    25,   -95,    26,   -95,
      27,   -95,    28,   -95,    29,   -95,    30,    31,    32,   -95,
      33,   -95,    34,   -95,    35,    36,   -95,    37,   -95,   -95,
     -95,    38,     0,   -95,   -95,   -95,    19,   -95,     0,   -95,
       0,     0,     0,     0,   -95,     0,   -95,    57,     0,   -28,
      20,   -28,    21,   -28,    22,   -28,    23,   -28,    24,   -28,
      25,   -28,    26,   -28,    27,   -28,    28,   -28,    29,   -28,
      30,    31,    32,   -28,    33,   -28,    34,   -28,    35,    36,
     -28,    37,   -28,   -28,   -28,    38,     0,   -28,   -28,   -28,
      19,   -28,     0,   -28,     0,     0,     0,     0,   -28,     0,
     -28,    57,     0,   -21,    20,   -21,    21,   -21,    22,   -21,
      23,   -21,    24,   -21,    25,   -21,    26,   -21,    27,   -21,
      28,   -21,    29,   -21,    30,    31,    32,   -21,    33,   -21,
      34,   -21,    35,    36,   -21,    37,   -21,   -21,   -21,    38,
       0,   -21,   -21,   -21,    19,   -21,     0,   -21,     0,     0,
       0,     0,   -21,     0,   -21,    39,     0,   -97,    20,   -97,
      21,   -97,    22,   -97,    23,   -97,    24,   -97,    25,   -97,
      26,   -97,    27,   -97,    28,   -97,    29,   -97,    30,    31,
      32,   -97,    33,   -97,    34,   -97,    35,    36,   -97,    37,
     -97,   -97,   -97,    38,     0,   -97,   -97,   -97,    19,   -97,
       0,   -97,     0,     0,     0,     0,   -97,     0,   -97,    57,
       0,   -99,    20,   -99,    21,   -99,    22,   -99,    23,   -99,
      24,   -99,    25,   -99,    26,   -99,    27,   -99,    28,   -99,
      29,   -99,    30,    31,    32,   -99,    33,   -99,    34,   -99,
      35,    36,   -99,    37,   -99,   -99,   -99,    38,     0,   -99,
     -99,   -99,    19,   -99,     0,   -99,     0,     0,     0,     0,
     -99,     0,   -99,    57,     0,  -101,    20,  -101,    21,  -101,
      22,  -101,    23,  -101,    24,  -101,    25,  -101,    26,  -101,
      27,  -101,    28,  -101,    29,  -101,    30,    31,    32,  -101,
      33,  -101,    34,  -101,    35,    36,  -101,    37,  -101,  -101,
    -101,    38,     0,  -101,  -101,  -101,    19,  -101,     0,  -101,
       0,     0,     0,     0,  -101,     0,  -101,    57,     0,  -103,
      20,  -103,    21,  -103,    22,  -103,    23,  -103,    24,  -103,
      25,  -103,    26,  -103,    27,  -103,    28,  -103,    29,  -103,
      30,    31,    32,  -103,    33,  -103,    34,  -103,    35,    36,
    -103,    37,  -103,  -103,  -103,    38,     0,  -103,  -103,  -103,
      19,  -103,     0,  -103,     0,     0,     0,     0,  -103,     0,
    -103,    57,     0,  -105,    20,  -105,    21,  -105,    22,  -105,
      23,  -105,    24,  -105,    25,  -105,    26,  -105,    27,  -105,
      28,  -105,    29,  -105,    30,    31,    32,  -105,    33,  -105,
      34,  -105,    35,    36,  -105,    37,  -105,  -105,  -105,    38,
       0,  -105,  -105,  -105,    19,  -105,     0,  -105,     0,     0,
       0,     0,  -105,     0,  -105,    57,     0,  -107,    20,  -107,
      21,  -107,    22,  -107,    23,  -107,    24,  -107,    25,  -107,
      26,  -107,    27,  -107,    28,  -107,    29,  -107,    30,    31,
      32,  -107,    33,  -107,    34,  -107,    35,    36,  -107,    37,
    -107,  -107,  -107,    38,     0,  -107,  -107,  -107,    19,  -107,
       0,  -107,     0,     0,     0,     0,  -107,     0,  -107,    57,
       0,  -122,    20,  -122,    21,  -122,    22,  -122,    23,  -122,
      24,  -122,    25,  -122,    26,  -122,    27,  -122,    28,  -122,
      29,  -122,    30,    31,    32,  -122,    33,  -122,    34,  -122,
      35,    36,  -122,    37,  -122,  -122,  -122,    38,     0,  -122,
    -122,  -122,    19,  -122,     0,  -122,     0,     0,     0,     0,
    -122,     0,  -122,    57,     0,  -126,    20,  -126,    21,  -126,
      22,  -126,    23,  -126,    24,  -126,    25,  -126,    26,  -126,
      27,  -126,    28,  -126,    29,  -126,    30,    31,    32,  -126,
      33,  -126,    34,  -126,    35,    36,  -126,    37,  -126,  -126,
    -126,    38,     0,  -126,  -126,  -126,    19,  -126,     0,  -126,
       0,     0,     0,     0,  -126,     0,  -126,    57,     0,  -130,
      20,  -130,    21,  -130,    22,  -130,    23,  -130,    24,  -130,
      25,  -130,    26,  -130,    27,  -130,    28,  -130,    29,  -130,
      30,    31,    32,  -130,    33,  -130,    34,  -130,    35,    36,
    -130,    37,  -130,  -130,  -130,    38,     0,  -130,  -130,  -130,
      19,  -130,     0,  -130,     0,     0,     0,     0,  -130,     0,
    -130,    57,     0,   -35,    20,   -35,    21,   -35,    22,   -35,
      23,   -35,    24,   -35,    25,   -35,    26,   -35,    27,   -35,
      28,   -35,    29,   -35,    30,    31,    32,   -35,    33,   -35,
      34,   -35,    35,    36,   -35,    37,   -35,   -35,   -35,    38,
       0,   -35,   -35,   -35,    19,   -35,     0,   -35,     0,     0,
       0,     0,   -35,     0,   -35,    57,     0,   -31,    20,   -31,
      21,   -31,    22,   -31,    23,   -31,    24,   -31,    25,   -31,
      26,   -31,    27,   -31,    28,   -31,    29,   -31,    30,    31,
      32,   -31,    33,   -31,    34,   -31,    35,    36,   -31,    37,
     -31,   -31,   -31,    38,     0,   -31,   -31,   -31,    19,   -31,
       0,   -31,     0,     0,     0,     0,   -31,     0,   -31,    57,
       0,   -92,    20,   -92,    21,   -92,    22,   -92,    23,   -92,
      24,   -92,    25,   -92,    26,   -92,    27,   -92,    28,   -92,
      29,   -92,    30,    31,    32,   -92,    33,   -92,    34,   -92,
      35,    36,   -92,    37,   -92,   -92,   -92,    38,     0,   -92,
     -92,   -92,    19,   -92,     0,   -92,     0,     0,     0,     0,
     -92,     0,   -92,    57,     0,   -44,    20,   -44,    21,   -44,
      22,   -44,    23,   -44,    24,   -44,    25,   -44,    26,   -44,
      27,   -44,    28,   -44,    29,   -44,    30,    31,    32,   -44,
      33,   -44,    34,   -44,    35,    36,   -44,    37,   -44,   -44,
     -44,    38,     0,   -44,   -44,   -44,    19,   -44,     0,   -44,
       0,     0,     0,     0,   -44,     0,   -44,    57,     0,   -43,
      20,   -43,    21,   -43,    22,   -43,    23,   -43,    24,   -43,
      25,   -43,    26,   -43,    27,   -43,    28,   -43,    29,   -43,
      30,    31,    32,   -43,    33,   -43,    34,   -43,    35,    36,
     -43,    37,   -43,   -43,   -43,    38,     0,   -43,   -43,   -43,
      19,   -43,     0,   -43,     0,     0,     0,     0,   -43,     0,
     -43,    57,     0,   -60,    20,   -60,    21,   -60,    22,   -60,
      23,   -60,    24,   -60,    25,   -60,    26,   -60,    27,   -60,
      28,   -60,    29,   -60,    30,    31,    32,   -60,    33,   -60,
      34,   -60,    35,    36,   -60,    37,   -60,   -60,   -60,    38,
       0,   -60,   -60,   -60,    19,   -60,     0,   -60,     0,     0,
       0,     0,   -60,     0,   -60,    57,     0,   -25,    20,   -25,
      21,   -25,    22,   -25,    23,   -25,    24,   -25,    25,   -25,
      26,   -25,    27,   -25,    28,   -25,    29,   -25,    30,    31,
      32,   -25,    33,   -25,    34,   -25,    35,    36,   -25,    37,
     -25,   -25,   -25,    38,     0,   -25,   -25,   -25,    19,   -25,
       0,   -25,     0,     0,     0,     0,   -25,     0,   -25,    57,
       0,   -96,    20,   -96,    21,   -96,    22,   -96,    23,   -96,
      24,   -96,    25,   -96,    26,   -96,    27,   -96,    28,   -96,
      29,   -96,    30,    31,    32,   -96,    33,   -96,    34,   -96,
      35,    36,   -96,    37,   -96,   -96,   -96,    38,     0,   -96,
     -96,   -96,    19,   -96,     0,   -96,     0,     0,     0,     0,
     -96,     0,   -96,    57,     0,   -98,    20,   -98,    21,   -98,
      22,   -98,    23,   -98,    24,   -98,    25,   -98,    26,   -98,
      27,   -98,    28,   -98,    29,   -98,    30,    31,    32,   -98,
      33,   -98,    34,   -98,    35,    36,   -98,    37,   -98,   -98,
     -98,    38,     0,   -98,   -98,   -98,    19,   -98,     0,   -98,
       0,     0,     0,     0,   -98,     0,   -98,    57,     0,  -100,
      20,  -100,    21,  -100,    22,  -100,    23,  -100,    24,  -100,
      25,  -100,    26,  -100,    27,  -100,    28,  -100,    29,  -100,
      30,    31,    32,  -100,    33,  -100,    34,  -100,    35,    36,
    -100,    37,  -100,  -100,  -100,    38,     0,  -100,  -100,  -100,
      19,  -100,     0,  -100,     0,     0,     0,     0,  -100,     0,
    -100,    57,     0,  -102,    20,  -102,    21,  -102,    22,  -102,
      23,  -102,    24,  -102,    25,  -102,    26,  -102,    27,  -102,
      28,  -102,    29,  -102,    30,    31,    32,  -102,    33,  -102,
      34,  -102,    35,    36,  -102,    37,  -102,  -102,  -102,    38,
       0,  -102,  -102,  -102,    19,  -102,     0,  -102,     0,     0,
       0,     0,  -102,     0,  -102,    57,     0,  -104,    20,  -104,
      21,  -104,    22,  -104,    23,  -104,    24,  -104,    25,  -104,
      26,  -104,    27,  -104,    28,  -104,    29,  -104,    30,    31,
      32,  -104,    33,  -104,    34,  -104,    35,    36,  -104,    37,
    -104,  -104,  -104,    38,     0,  -104,  -104,  -104,    19,  -104,
       0,  -104,     0,     0,     0,     0,  -104,     0,  -104,    57,
       0,  -106,    20,  -106,    21,  -106,    22,  -106,    23,  -106,
      24,  -106,    25,  -106,    26,  -106,    27,  -106,    28,  -106,
      29,  -106,    30,    31,    32,  -106,    33,  -106,    34,  -106,
      35,    36,  -106,    37,  -106,  -106,  -106,    38,     0,  -106,
    -106,  -106,    19,  -106,     0,  -106,     0,     0,     0,     0,
    -106,     0,  -106,    57,     0,  -121,    20,  -121,    21,  -121,
      22,  -121,    23,  -121,    24,  -121,    25,  -121,    26,  -121,
      27,  -121,    28,  -121,    29,  -121,    30,    31,    32,  -121,
      33,  -121,    34,  -121,    35,    36,  -121,    37,  -121,  -121,
    -121,    38,     0,  -121,  -121,  -121,    19,  -121,     0,  -121,
       0,     0,     0,     0,  -121,     0,  -121,    57,     0,  -125,
      20,  -125,    21,  -125,    22,  -125,    23,  -125,    24,  -125,
      25,  -125,    26,  -125,    27,  -125,    28,  -125,    29,  -125,
      30,    31,    32,  -125,    33,  -125,    34,  -125,    35,    36,
    -125,    37,  -125,  -125,  -125,    38,     0,  -125,  -125,  -125,
      19,  -125,     0,  -125,     0,     0,     0,     0,  -125,     0,
    -125,    57,     0,  -129,    20,  -129,    21,  -129,    22,  -129,
      23,  -129,    24,  -129,    25,  -129,    26,  -129,    27,  -129,
      28,  -129,    29,  -129,    30,    31,    32,  -129,    33,  -129,
      34,  -129,    35,    36,  -129,    37,  -129,  -129,  -129,    38,
       0,  -129,  -129,  -129,    19,  -129,     0,  -129,     0,     0,
       0,     0,  -129,     0,  -129,    57,     0,   -33,    20,   -33,
      21,   -33,    22,   -33,    23,   -33,    24,   -33,    25,   -33,
      26,   -33,    27,   -33,    28,   -33,    29,   -33,    30,    31,
      32,   -33,    33,   -33,    34,   -33,    35,    36,   -33,    37,
     -33,   -33,   -33,    38,     0,   -33,   -33,   -33,    19,   -33,
       0,   -33,     0,     0,     0,     0,   -33,     0,   -33,    57,
       0,   -29,    20,   -29,    21,   -29,    22,   -29,    23,   -29,
      24,   -29,    25,   -29,    26,   -29,    27,   -29,    28,   -29,
      29,   -29,    30,    31,    32,   -29,    33,   -29,    34,   -29,
      35,    36,   -29,    37,   -29,   -29,   -29,    38,     0,   -29,
     -29,   -29,    19,   -29,     0,   -29,     0,     0,     0,     0,
     -29,     0,   -29,    57,     0,   -90,    20,   -90,    21,   -90,
      22,   -90,    23,   -90,    24,   -90,    25,   -90,    26,   -90,
      27,   -90,    28,   -90,    29,   -90,    30,    31,    32,   -90,
      33,   -90,    34,   -90,    35,    36,   -90,    37,   -90,   -90,
     -90,    38,     0,   -90,   -90,   -90,    19,   -90,     0,   -90,
       0,     0,     0,     0,   -90,     0,   -90,    57,     0,   -38,
      20,   -38,    21,   -38,    22,   -38,    23,   -38,    24,   -38,
      25,   -38,    26,   -38,    27,   -38,    28,   -38,    29,   -38,
      30,    31,    32,   -38,    33,   -38,    34,   -38,    35,    36,
     -38,    37,   -38,   -38,   -38,    38,     0,   -38,   -38,   -38,
      19,   -38,     0,   -38,     0,     0,     0,     0,   -38,     0,
     -38,    57,     0,   -37,    20,   -37,    21,   -37,    22,   -37,
      23,   -37,    24,   -37,    25,   -37,    26,   -37,    27,   -37,
      28,   -37,    29,   -37,    30,    31,    32,   -37,    33,   -37,
      34,   -37,    35,    36,   -37,    37,   -37,   -37,   -37,    38,
       0,   -37,   -37,   -37,    19,   -37,     0,   -37,     0,     0,
       0,     0,   -37,     0,   -37,    57,     0,   -54,    20,   -54,
      21,   -54,    22,   -54,    23,   -54,    24,   -54,    25,   -54,
      26,   -54,    27,   -54,    28,   -54,    29,   -54,    30,    31,
      32,   -54,    33,   -54,    34,   -54,    35,    36,   -54,    37,
     -54,   -54,   -54,    38,     0,   -54,   -54,   -54,    19,   -54,
       0,   -54,     0,     0,     0,     0,   -54,     0,   -54,    57,
       0,   -56,    20,   -56,    21,   -56,    22,   -56,    23,   -56,
      24,   -56,    25,   -56,    26,   -56,    27,   -56,    28,   -56,
      29,   -56,    30,    31,    32,   -56,    33,   -56,    34,   -56,
      35,    36,   -56,    37,   -56,   -56,   -56,    38,     0,   -56,
     -56,   -56,    19,   -56,     0,   -56,     0,     0,     0,     0,
     -56,     0,   -56,    57,     0,   -58,    20,   -58,    21,   -58,
      22,   -58,    23,   -58,    24,   -58,    25,   -58,    26,   -58,
      27,   -58,    28,   -58,    29,   -58,    30,    31,    32,   -58,
      33,   -58,    34,   -58,    35,    36,   -58,    37,   -58,   -58,
     -58,    38,     0,   -58,   -58,   -58,    19,   -58,     0,   -58,
       0,     0,     0,     0,   -58,     0,   -58,    57,     0,     0,
      20,     0,    21,     0,    22,     0,    23,     0,    24,     0,
      25,     0,    26,     0,    27,     0,    28,     0,    29,     0,
      30,    31,    32,     0,    33,     0,    34,     0,    35,    36,
      19,    37,     0,     0,     0,    38,    92,    93,     0,    94,
       0,    95,     0,    96,    20,    97,    21,     0,    22,     0,
      23,    57,    24,     0,    25,     0,    26,     0,    27,     0,
      28,     0,    29,     0,    30,    31,    32,     0,    33,     0,
      34,     0,    35,    36,   -46,    37,   -46,    88,    19,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,    21,    57,    22,     0,    23,     0,
      24,     0,    25,     0,    26,     0,    27,     0,    28,     0,
      29,     0,    30,    31,    32,     0,    33,     0,    34,     0,
      35,    36,   -45,    37,   -45,    88,    19,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    56,    21,    57,    22,     0,    23,     0,    24,     0,
      25,     0,    26,     0,    27,     0,    28,     0,    29,     0,
      30,    31,    32,     0,    33,     0,    34,     0,    35,    36,
      19,    37,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,    21,    60,    22,     0,
      23,    57,    24,     0,    25,     0,    26,     0,    27,     0,
      28,     0,    29,     0,    30,    31,    32,     0,    33,     0,
      34,     0,    35,    36,    19,    37,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
      21,     0,    22,    62,    23,    57,    24,     0,    25,     0,
      26,     0,    27,     0,    28,     0,    29,     0,    30,    31,
      32,     0,    33,     0,    34,     0,    35,    36,     0,    37,
      19,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,    21,     0,    22,    57,
      23,    64,    24,     0,    25,     0,    26,     0,    27,     0,
      28,     0,    29,     0,    30,    31,    32,     0,    33,     0,
      34,     0,    35,    36,    19,    37,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
      21,     0,    22,     0,    23,    57,    24,    66,    25,     0,
      26,     0,    27,     0,    28,     0,    29,     0,    30,    31,
      32,     0,    33,     0,    34,     0,    35,    36,    19,    37,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,    21,     0,    22,     0,    23,    57,
      24,     0,    25,    68,    26,     0,    27,     0,    28,     0,
      29,     0,    30,    31,    32,     0,    33,     0,    34,     0,
      35,    36,    19,    37,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,    21,     0,
      22,     0,    23,    57,    24,     0,    25,     0,    26,    70,
      27,     0,    28,     0,    29,     0,    30,    31,    32,     0,
      33,     0,    34,     0,    35,    36,    19,    37,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,    21,     0,    22,     0,    23,    57,    24,     0,
      25,     0,    26,     0,    27,    72,    28,     0,    29,     0,
      30,    31,    32,     0,    33,     0,    34,     0,    35,    36,
      19,    37,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,    21,     0,    22,     0,
      23,    57,    24,     0,    25,     0,    26,     0,    27,     0,
      28,    74,    29,     0,    30,    31,    32,     0,    33,     0,
      34,     0,    35,    36,    19,    37,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
      21,     0,    22,     0,    23,    57,    24,     0,    25,     0,
      26,     0,    27,     0,    28,     0,    29,    76,    30,    31,
      32,     0,    33,     0,    34,     0,    35,    36,    19,    37,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,    21,     0,    22,     0,    23,    57,
      24,     0,    25,     0,    26,     0,    27,     0,    28,     0,
      29,     0,    30,    31,    32,    80,    33,     0,    34,     0,
      35,    36,    19,    37,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,    21,     0,
      22,     0,    23,    57,    24,     0,    25,     0,    26,     0,
      27,     0,    28,     0,    29,     0,    30,    31,    32,     0,
      33,    82,    34,     0,    35,    36,    19,    37,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,    21,     0,    22,     0,    23,    57,    24,     0,
      25,     0,    26,     0,    27,     0,    28,     0,    29,     0,
      30,    31,    32,     0,    33,     0,    34,    84,    35,    36,
      19,    37,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,    20,     0,    21,     0,    22,     0,
      23,    57,    24,     0,    25,     0,    26,     0,    27,     0,
      28,     0,    29,     0,    30,    31,    32,     0,    33,     0,
      34,     0,    35,    36,    19,    37,     0,     0,   132,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
      21,     0,    22,     0,    23,   133,    24,     0,    25,     0,
      26,     0,    27,     0,    28,     0,    29,     0,    30,    31,
      32,     0,    33,     0,    34,     0,    35,    36,    19,    37,
       0,     0,     0,    38,     0,     0,   139,     0,     0,     0,
       0,     0,    20,     0,    21,     0,    22,     0,    23,    57,
      24,     0,    25,     0,    26,     0,    27,     0,    28,     0,
      29,     0,    30,    31,    32,     0,    33,     0,    34,     0,
      35,    36,    19,    37,     0,    88,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,    21,     0,
      22,     0,    23,    57,    24,     0,    25,     0,    26,     0,
      27,     0,    28,     0,    29,     0,    30,    31,    32,     0,
      33,     0,    34,     0,    35,    36,    19,    37,     0,     0,
     -21,    38,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,    21,     0,    22,     0,    23,    39,    24,     0,
      25,     0,    26,     0,    27,     0,    28,     0,    29,     0,
      30,    31,    32,     0,    33,     0,    34,     0,    35,    36,
       0,    37,     0,     0,     0,    38,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   182,     0,
      20,    57,    21,     0,    22,     0,    23,     0,    24,     0,
      25,     0,    26,     0,    27,     0,    28,     0,    29,     0,
      30,    31,    32,     0,    33,     0,    34,     0,    35,    36,
       0,    37,     0,     0,     0,    38,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     184,    57,    20,     0,    21,     0,    22,     0,    23,     0,
      24,     0,    25,     0,    26,     0,    27,     0,    28,     0,
      29,     0,    30,    31,    32,     0,    33,     0,    34,     0,
      35,    36,     0,    37,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39
};

static const yytype_int16 yycheck[] =
{
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    47,    48,    38,    37,   182,
      12,   184,     3,    94,    95,    96,    52,    19,    54,     4,
      56,     8,    58,     7,    11,    56,   199,    55,   201,    60,
       0,    62,    60,    64,     1,    66,     3,    68,    62,    70,
      64,    72,    10,    74,    13,    76,     6,    98,     9,    80,
      66,    82,     8,    84,    12,    57,    87,     8,     9,    90,
      11,    92,    93,     8,    61,    62,   147,    64,    45,    57,
      14,    48,    60,    59,    60,   106,    16,   108,    20,   110,
      18,   112,    28,   114,    32,   116,    88,   118,   139,   120,
     141,   122,   143,   124,   145,   126,    22,   128,    26,   130,
      24,   132,    34,   132,   135,   186,   137,    30,    38,    40,
      45,    47,    51,    42,    51,    49,    57,   148,   149,     4,
      53,   152,   153,   174,    15,   176,    48,   178,    55,   180,
      51,   133,    49,    17,    59,    -1,    -1,    -1,   167,   170,
      60,   170,    61,    -1,    -1,    63,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,
     191,    -1,   191,   192,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    53,    54,     1,    56,
      -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    54,     1,    56,    -1,    58,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    53,    54,     1,    56,    -1,    58,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    53,    54,
       1,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,
      65,    66,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    53,    54,     1,    56,    -1,    58,    -1,    -1,
      -1,    -1,    63,    -1,    65,    66,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    53,    54,     1,    56,
      -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    54,     1,    56,    -1,    58,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    53,    54,     1,    56,    -1,    58,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    53,    54,
       1,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,
      65,    66,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    53,    54,     1,    56,    -1,    58,    -1,    -1,
      -1,    -1,    63,    -1,    65,    66,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    53,    54,     1,    56,
      -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    54,     1,    56,    -1,    58,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    53,    54,     1,    56,    -1,    58,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    53,    54,
       1,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,
      65,    66,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    53,    54,     1,    56,    -1,    58,    -1,    -1,
      -1,    -1,    63,    -1,    65,    66,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    53,    54,     1,    56,
      -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    54,     1,    56,    -1,    58,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    53,    54,     1,    56,    -1,    58,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    53,    54,
       1,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,
      65,    66,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    53,    54,     1,    56,    -1,    58,    -1,    -1,
      -1,    -1,    63,    -1,    65,    66,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    53,    54,     1,    56,
      -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    54,     1,    56,    -1,    58,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    53,    54,     1,    56,    -1,    58,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    53,    54,
       1,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,
      65,    66,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    53,    54,     1,    56,    -1,    58,    -1,    -1,
      -1,    -1,    63,    -1,    65,    66,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    53,    54,     1,    56,
      -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    54,     1,    56,    -1,    58,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    53,    54,     1,    56,    -1,    58,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    53,    54,
       1,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,
      65,    66,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    53,    54,     1,    56,    -1,    58,    -1,    -1,
      -1,    -1,    63,    -1,    65,    66,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    53,    54,     1,    56,
      -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    54,     1,    56,    -1,    58,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    53,    54,     1,    56,    -1,    58,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    53,    54,
       1,    56,    -1,    58,    -1,    -1,    -1,    -1,    63,    -1,
      65,    66,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    53,    54,     1,    56,    -1,    58,    -1,    -1,
      -1,    -1,    63,    -1,    65,    66,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    53,    54,     1,    56,
      -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,    66,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    54,     1,    56,    -1,    58,    -1,    -1,    -1,    -1,
      63,    -1,    65,    66,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    53,    54,     1,    56,    -1,    58,
      -1,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,    -1,
      15,    -1,    17,    -1,    19,    -1,    21,    -1,    23,    -1,
      25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,
      35,    36,    37,    -1,    39,    -1,    41,    -1,    43,    44,
       1,    46,    -1,    -1,    -1,    50,    51,    52,    -1,    54,
      -1,    56,    -1,    58,    15,    60,    17,    -1,    19,    -1,
      21,    66,    23,    -1,    25,    -1,    27,    -1,    29,    -1,
      31,    -1,    33,    -1,    35,    36,    37,    -1,    39,    -1,
      41,    -1,    43,    44,    45,    46,    47,    48,     1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    -1,    17,    66,    19,    -1,    21,    -1,
      23,    -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,
      33,    -1,    35,    36,    37,    -1,    39,    -1,    41,    -1,
      43,    44,    45,    46,    47,    48,     1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    16,    17,    66,    19,    -1,    21,    -1,    23,    -1,
      25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,
      35,    36,    37,    -1,    39,    -1,    41,    -1,    43,    44,
       1,    46,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    -1,    17,    18,    19,    -1,
      21,    66,    23,    -1,    25,    -1,    27,    -1,    29,    -1,
      31,    -1,    33,    -1,    35,    36,    37,    -1,    39,    -1,
      41,    -1,    43,    44,     1,    46,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      17,    -1,    19,    20,    21,    66,    23,    -1,    25,    -1,
      27,    -1,    29,    -1,    31,    -1,    33,    -1,    35,    36,
      37,    -1,    39,    -1,    41,    -1,    43,    44,    -1,    46,
       1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    -1,    17,    -1,    19,    66,
      21,    22,    23,    -1,    25,    -1,    27,    -1,    29,    -1,
      31,    -1,    33,    -1,    35,    36,    37,    -1,    39,    -1,
      41,    -1,    43,    44,     1,    46,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      17,    -1,    19,    -1,    21,    66,    23,    24,    25,    -1,
      27,    -1,    29,    -1,    31,    -1,    33,    -1,    35,    36,
      37,    -1,    39,    -1,    41,    -1,    43,    44,     1,    46,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    -1,    17,    -1,    19,    -1,    21,    66,
      23,    -1,    25,    26,    27,    -1,    29,    -1,    31,    -1,
      33,    -1,    35,    36,    37,    -1,    39,    -1,    41,    -1,
      43,    44,     1,    46,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    17,    -1,
      19,    -1,    21,    66,    23,    -1,    25,    -1,    27,    28,
      29,    -1,    31,    -1,    33,    -1,    35,    36,    37,    -1,
      39,    -1,    41,    -1,    43,    44,     1,    46,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    17,    -1,    19,    -1,    21,    66,    23,    -1,
      25,    -1,    27,    -1,    29,    30,    31,    -1,    33,    -1,
      35,    36,    37,    -1,    39,    -1,    41,    -1,    43,    44,
       1,    46,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    -1,    17,    -1,    19,    -1,
      21,    66,    23,    -1,    25,    -1,    27,    -1,    29,    -1,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    -1,
      41,    -1,    43,    44,     1,    46,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      17,    -1,    19,    -1,    21,    66,    23,    -1,    25,    -1,
      27,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    -1,    39,    -1,    41,    -1,    43,    44,     1,    46,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    -1,    17,    -1,    19,    -1,    21,    66,
      23,    -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,
      33,    -1,    35,    36,    37,    38,    39,    -1,    41,    -1,
      43,    44,     1,    46,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    17,    -1,
      19,    -1,    21,    66,    23,    -1,    25,    -1,    27,    -1,
      29,    -1,    31,    -1,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    -1,    43,    44,     1,    46,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    17,    -1,    19,    -1,    21,    66,    23,    -1,
      25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,
      35,    36,    37,    -1,    39,    -1,    41,    42,    43,    44,
       1,    46,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    -1,    17,    -1,    19,    -1,
      21,    66,    23,    -1,    25,    -1,    27,    -1,    29,    -1,
      31,    -1,    33,    -1,    35,    36,    37,    -1,    39,    -1,
      41,    -1,    43,    44,     1,    46,    -1,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      17,    -1,    19,    -1,    21,    66,    23,    -1,    25,    -1,
      27,    -1,    29,    -1,    31,    -1,    33,    -1,    35,    36,
      37,    -1,    39,    -1,    41,    -1,    43,    44,     1,    46,
      -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    15,    -1,    17,    -1,    19,    -1,    21,    66,
      23,    -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,
      33,    -1,    35,    36,    37,    -1,    39,    -1,    41,    -1,
      43,    44,     1,    46,    -1,    48,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    17,    -1,
      19,    -1,    21,    66,    23,    -1,    25,    -1,    27,    -1,
      29,    -1,    31,    -1,    33,    -1,    35,    36,    37,    -1,
      39,    -1,    41,    -1,    43,    44,     1,    46,    -1,    -1,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    17,    -1,    19,    -1,    21,    66,    23,    -1,
      25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,
      35,    36,    37,    -1,    39,    -1,    41,    -1,    43,    44,
      -1,    46,    -1,    -1,    -1,    50,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      15,    66,    17,    -1,    19,    -1,    21,    -1,    23,    -1,
      25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,    -1,
      35,    36,    37,    -1,    39,    -1,    41,    -1,    43,    44,
      -1,    46,    -1,    -1,    -1,    50,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    15,    -1,    17,    -1,    19,    -1,    21,    -1,
      23,    -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,
      33,    -1,    35,    36,    37,    -1,    39,    -1,    41,    -1,
      43,    44,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    68,     3,     4,    69,     0,    69,     7,
      70,    10,    13,    73,     8,     9,    11,    71,    72,     1,
      15,    17,    19,    21,    23,    25,    27,    29,    31,    33,
      35,    36,    37,    39,    41,    43,    44,    46,    50,    66,
      74,    76,    77,    78,    79,    81,    85,    86,    87,     6,
      71,    66,     8,    72,     8,    74,    16,    66,    74,    75,
      18,    75,    20,    75,    22,    75,    24,    75,    26,    75,
      28,    75,    30,    75,    32,    75,    34,    75,    75,    75,
      38,    75,    40,    75,    42,    75,    75,    45,    48,    80,
      47,    80,    51,    52,    54,    56,    58,    60,    75,    82,
      83,    14,    12,     8,    75,    74,    16,    75,    18,    75,
      20,    75,    22,    75,    24,    75,    26,    75,    28,    75,
      30,    75,    32,    75,    34,    75,    38,    75,    40,    75,
      42,    75,    49,    66,    74,    45,    75,    47,    75,    53,
      75,    55,    83,    57,    83,    59,    83,    61,    62,    64,
      84,    82,    51,    51,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    80,    74,
      49,    75,    75,    82,    53,    82,    55,    82,    57,    82,
      59,    83,    63,    75,    65,    75,    61,    51,    75,    75,
      80,    49,    75,    80,    82,    82,    82,    82,    84,    63,
      84,    65,    83,    75,    75,    80,    80,    84,    84,    80
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 2289 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 200 "parser.y"



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


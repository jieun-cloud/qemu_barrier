/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 20 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <inttypes.h>

#include "dtc.h"
#include "srcpos.h"

extern int yylex(void);
extern void yyerror(char const *s);
#define ERROR(loc, ...) \
	do { \
		srcpos_error((loc), "Error", __VA_ARGS__); \
		treesource_error = true; \
	} while (0)

extern struct dt_info *parser_output;
extern bool treesource_error;

#line 85 "dtc-parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "dtc-parser.tab.h".  */
#ifndef YY_YY_DTC_PARSER_TAB_H_INCLUDED
# define YY_YY_DTC_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DT_V1 = 258,
    DT_PLUGIN = 259,
    DT_MEMRESERVE = 260,
    DT_LSHIFT = 261,
    DT_RSHIFT = 262,
    DT_LE = 263,
    DT_GE = 264,
    DT_EQ = 265,
    DT_NE = 266,
    DT_AND = 267,
    DT_OR = 268,
    DT_BITS = 269,
    DT_DEL_PROP = 270,
    DT_DEL_NODE = 271,
    DT_PROPNODENAME = 272,
    DT_LITERAL = 273,
    DT_CHAR_LITERAL = 274,
    DT_BYTE = 275,
    DT_STRING = 276,
    DT_LABEL = 277,
    DT_REF = 278,
    DT_INCBIN = 279
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 39 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:355  */

	char *propnodename;
	char *labelref;
	uint8_t byte;
	struct data data;

	struct {
		struct data	data;
		int		bits;
	} array;

	struct property *prop;
	struct property *proplist;
	struct node *node;
	struct node *nodelist;
	struct reserve_info *re;
	uint64_t integer;
	unsigned int flags;

#line 170 "dtc-parser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_DTC_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 199 "dtc-parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   140

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  151

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,     2,     2,    45,    41,     2,
      33,    35,    44,    42,    34,    43,     2,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,    25,
      36,    29,    30,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    31,     2,    32,    40,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,    39,    28,    46,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   117,   121,   128,   129,   139,   142,   149,
     153,   161,   165,   169,   180,   191,   210,   225,   233,   236,
     243,   247,   251,   255,   263,   267,   271,   275,   279,   295,
     305,   313,   316,   320,   327,   343,   348,   367,   381,   388,
     389,   390,   397,   401,   402,   406,   407,   411,   412,   416,
     417,   421,   422,   426,   427,   431,   432,   433,   437,   438,
     439,   440,   441,   445,   446,   447,   451,   452,   453,   457,
     458,   467,   476,   480,   481,   482,   483,   488,   491,   495,
     503,   506,   510,   518,   522,   526
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DT_V1", "DT_PLUGIN", "DT_MEMRESERVE",
  "DT_LSHIFT", "DT_RSHIFT", "DT_LE", "DT_GE", "DT_EQ", "DT_NE", "DT_AND",
  "DT_OR", "DT_BITS", "DT_DEL_PROP", "DT_DEL_NODE", "DT_PROPNODENAME",
  "DT_LITERAL", "DT_CHAR_LITERAL", "DT_BYTE", "DT_STRING", "DT_LABEL",
  "DT_REF", "DT_INCBIN", "';'", "'/'", "'{'", "'}'", "'='", "'>'", "'['",
  "']'", "'('", "','", "')'", "'<'", "'?'", "':'", "'|'", "'^'", "'&'",
  "'+'", "'-'", "'*'", "'%'", "'~'", "'!'", "$accept", "sourcefile",
  "header", "headers", "memreserves", "memreserve", "devicetree",
  "nodedef", "proplist", "propdef", "propdata", "propdataprefix",
  "arrayprefix", "integer_prim", "integer_expr", "integer_trinary",
  "integer_or", "integer_and", "integer_bitor", "integer_bitxor",
  "integer_bitand", "integer_eq", "integer_rela", "integer_shift",
  "integer_add", "integer_mul", "integer_unary", "bytestring", "subnodes",
  "subnode", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    59,    47,   123,   125,    61,
      62,    91,    93,    40,    44,    41,    60,    63,    58,   124,
      94,    38,    43,    45,    42,    37,   126,    33
};
# endif

#define YYPACT_NINF -81

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-81)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      11,    17,    23,    11,    10,    56,   -81,   -81,    21,    10,
      -5,    10,    39,   -81,   -81,   -13,    21,   -81,    44,    44,
      43,   -81,   -81,   -13,   -13,   -13,   -81,    38,   -81,    -2,
      67,    53,    55,    57,    41,     1,    75,    42,   -19,   -81,
      58,   -81,   -81,   -81,    73,    74,    44,    44,   -81,   -81,
     -81,   -81,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -81,    46,    76,    44,   -81,   -81,    67,    61,    53,
      55,    57,    41,     1,     1,    75,    75,    75,    75,    42,
      42,   -19,   -19,   -81,   -81,   -81,    83,    85,    45,    46,
     -81,    77,    46,   -81,   -81,   -13,    78,    79,   -81,   -81,
     -81,   -81,   -81,    81,   -81,   -81,   -81,   -81,   -81,    16,
      22,   -81,   -81,   -81,   -81,    89,   -81,   -81,   -81,    80,
     -81,   -81,    -6,    72,    88,    35,   -81,   -81,   -81,   -81,
     -81,    52,   -81,   -81,   -81,    21,   -81,    82,    21,    84,
     -81
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,     7,     3,     1,     6,     0,     0,
       0,     7,     0,    39,    40,     0,     0,    10,     0,     0,
       2,     8,     4,     0,     0,     0,    73,     0,    42,    43,
      45,    47,    49,    51,    53,    55,    58,    65,    68,    72,
       0,    18,    13,    11,     0,     0,     0,     0,    74,    75,
      76,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    80,     0,     0,    15,    12,    46,     0,    48,
      50,    52,    54,    56,    57,    61,    62,    60,    59,    63,
      64,    66,    67,    70,    69,    71,     0,     0,     0,     0,
      19,     0,    80,    16,    14,     0,     0,     0,    21,    31,
      83,    23,    85,     0,    82,    81,    44,    22,    84,     0,
       0,    17,    30,    20,    32,     0,    24,    33,    27,     0,
      77,    35,     0,     0,     0,     0,    38,    37,    25,    36,
      34,     0,    78,    79,    26,     0,    29,     0,     0,     0,
      28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -81,   -81,   -81,   107,   100,   103,   -81,   -18,   -81,   -80,
     -81,   -81,   -81,    -8,    62,     9,   -81,    65,    64,    66,
      69,    63,    30,    15,    26,    27,   -21,   -81,    20,    24
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    11,    20,    42,    72,   100,
     119,   120,   132,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,   135,   101,   102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      16,    43,    48,    49,    50,    13,    14,    68,    40,    60,
      61,    52,    13,    14,     1,     8,   136,   137,    18,   111,
      15,    19,   114,     6,   138,    69,    70,    15,    75,    76,
      23,    62,     9,    24,    25,    53,   125,    63,   122,    13,
      14,   123,     5,   126,   127,   128,   129,    93,    94,    95,
     124,    58,    59,   130,    15,   142,   104,   143,   131,    44,
      12,    96,    97,    98,    22,    45,    46,   144,    99,    47,
     108,    41,    41,    51,   109,    85,    86,    87,    88,    54,
     110,    64,    65,    71,    66,    67,   145,   146,    83,    84,
      89,    90,    55,    91,    92,    56,    73,    74,    57,   105,
     106,   103,   107,   117,   118,   113,   121,   133,   140,   141,
       7,    21,    17,   134,   116,    78,   148,    77,    79,   150,
      82,    80,   115,   112,   139,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   147,     0,     0,
     149
};

static const yytype_int16 yycheck[] =
{
       8,    19,    23,    24,    25,    18,    19,    26,    16,     8,
       9,    13,    18,    19,     3,     5,    22,    23,    23,    99,
      33,    26,   102,     0,    30,    44,    45,    33,    46,    47,
      43,    30,    22,    46,    47,    37,    14,    36,    22,    18,
      19,    25,    25,    21,    22,    23,    24,    68,    69,    70,
      34,    10,    11,    31,    33,    20,    74,    22,    36,    16,
       4,    15,    16,    17,    25,    22,    23,    32,    22,    26,
      25,    27,    27,    35,    29,    60,    61,    62,    63,    12,
      98,     6,     7,    25,    42,    43,    34,    35,    58,    59,
      64,    65,    39,    66,    67,    40,    23,    23,    41,    38,
      17,    25,    17,    25,    25,    28,    25,    18,    36,    21,
       3,    11,     9,    33,   105,    53,    34,    52,    54,    35,
      57,    55,   102,    99,   132,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,
     148
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    49,    50,    51,    25,     0,    51,     5,    22,
      52,    53,     4,    18,    19,    33,    61,    53,    23,    26,
      54,    52,    25,    43,    46,    47,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      61,    27,    55,    55,    16,    22,    23,    26,    74,    74,
      74,    35,    13,    37,    12,    39,    40,    41,    10,    11,
       8,     9,    30,    36,     6,     7,    42,    43,    26,    44,
      45,    25,    56,    23,    23,    55,    55,    65,    62,    66,
      67,    68,    69,    70,    70,    71,    71,    71,    71,    72,
      72,    73,    73,    74,    74,    74,    15,    16,    17,    22,
      57,    76,    77,    25,    55,    38,    17,    17,    25,    29,
      55,    57,    77,    28,    57,    76,    63,    25,    25,    58,
      59,    25,    22,    25,    34,    14,    21,    22,    23,    24,
      31,    36,    60,    18,    33,    75,    22,    23,    30,    61,
      36,    21,    20,    22,    32,    34,    35,    61,    34,    61,
      35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    52,    52,    53,
      53,    54,    54,    54,    54,    54,    54,    55,    56,    56,
      57,    57,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    59,    59,    59,    60,    60,    60,    60,    60,    61,
      61,    61,    62,    63,    63,    64,    64,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    69,    70,    70,
      70,    70,    70,    71,    71,    71,    72,    72,    72,    73,
      73,    73,    73,    74,    74,    74,    74,    75,    75,    75,
      76,    76,    76,    77,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     4,     1,     2,     0,     2,     4,
       2,     2,     3,     2,     4,     3,     4,     5,     0,     2,
       4,     2,     3,     2,     2,     3,     4,     2,     9,     5,
       2,     0,     2,     2,     3,     1,     2,     2,     2,     1,
       1,     3,     1,     1,     5,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     1,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 110 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			parser_output = build_dt_info((yyvsp[-2].flags), (yyvsp[-1].re), (yyvsp[0].node),
			                              guess_boot_cpuid((yyvsp[0].node)));
		}
#line 1481 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 118 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.flags) = DTSF_V1;
		}
#line 1489 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 122 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.flags) = DTSF_V1 | DTSF_PLUGIN;
		}
#line 1497 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 130 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			if ((yyvsp[0].flags) != (yyvsp[-1].flags))
				ERROR(&(yylsp[0]), "Header flags don't match earlier ones");
			(yyval.flags) = (yyvsp[-1].flags);
		}
#line 1507 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 139 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.re) = NULL;
		}
#line 1515 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 143 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.re) = chain_reserve_entry((yyvsp[-1].re), (yyvsp[0].re));
		}
#line 1523 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 150 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.re) = build_reserve_entry((yyvsp[-2].integer), (yyvsp[-1].integer));
		}
#line 1531 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 154 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			add_label(&(yyvsp[0].re)->labels, (yyvsp[-1].labelref));
			(yyval.re) = (yyvsp[0].re);
		}
#line 1540 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 162 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.node) = name_node((yyvsp[0].node), "");
		}
#line 1548 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 166 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.node) = merge_nodes((yyvsp[-2].node), (yyvsp[0].node));
		}
#line 1556 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 170 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			/*
			 * We rely on the rule being always:
			 *   versioninfo plugindecl memreserves devicetree
			 * so $-1 is what we want (plugindecl)
			 */
			if (!((yyvsp[(-1) - (2)].flags) & DTSF_PLUGIN))
				ERROR(&(yylsp[0]), "Label or path %s not found", (yyvsp[-1].labelref));
			(yyval.node) = add_orphan_node(name_node(build_node(NULL, NULL), ""), (yyvsp[0].node), (yyvsp[-1].labelref));
		}
#line 1571 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 181 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			struct node *target = get_node_by_ref((yyvsp[-3].node), (yyvsp[-1].labelref));

			if (target) {
				add_label(&target->labels, (yyvsp[-2].labelref));
				merge_nodes(target, (yyvsp[0].node));
			} else
				ERROR(&(yylsp[-1]), "Label or path %s not found", (yyvsp[-1].labelref));
			(yyval.node) = (yyvsp[-3].node);
		}
#line 1586 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 192 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			struct node *target = get_node_by_ref((yyvsp[-2].node), (yyvsp[-1].labelref));

			if (target) {
				merge_nodes(target, (yyvsp[0].node));
			} else {
				/*
				 * We rely on the rule being always:
				 *   versioninfo plugindecl memreserves devicetree
				 * so $-1 is what we want (plugindecl)
				 */
				if ((yyvsp[(-1) - (3)].flags) & DTSF_PLUGIN)
					add_orphan_node((yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].labelref));
				else
					ERROR(&(yylsp[-1]), "Label or path %s not found", (yyvsp[-1].labelref));
			}
			(yyval.node) = (yyvsp[-2].node);
		}
#line 1609 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 211 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			struct node *target = get_node_by_ref((yyvsp[-3].node), (yyvsp[-1].labelref));

			if (target)
				delete_node(target);
			else
				ERROR(&(yylsp[-1]), "Label or path %s not found", (yyvsp[-1].labelref));


			(yyval.node) = (yyvsp[-3].node);
		}
#line 1625 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 226 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.node) = build_node((yyvsp[-3].proplist), (yyvsp[-2].nodelist));
		}
#line 1633 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 233 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.proplist) = NULL;
		}
#line 1641 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 237 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.proplist) = chain_property((yyvsp[0].prop), (yyvsp[-1].proplist));
		}
#line 1649 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 244 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.prop) = build_property((yyvsp[-3].propnodename), (yyvsp[-1].data));
		}
#line 1657 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 248 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.prop) = build_property((yyvsp[-1].propnodename), empty_data);
		}
#line 1665 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 252 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.prop) = build_property_delete((yyvsp[-1].propnodename));
		}
#line 1673 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 256 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			add_label(&(yyvsp[0].prop)->labels, (yyvsp[-1].labelref));
			(yyval.prop) = (yyvsp[0].prop);
		}
#line 1682 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 264 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.data) = data_merge((yyvsp[-1].data), (yyvsp[0].data));
		}
#line 1690 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 268 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.data) = data_merge((yyvsp[-2].data), (yyvsp[-1].array).data);
		}
#line 1698 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 272 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.data) = data_merge((yyvsp[-3].data), (yyvsp[-1].data));
		}
#line 1706 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 276 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.data) = data_add_marker((yyvsp[-1].data), REF_PATH, (yyvsp[0].labelref));
		}
#line 1714 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 280 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			FILE *f = srcfile_relative_open((yyvsp[-5].data).val, NULL);
			struct data d;

			if ((yyvsp[-3].integer) != 0)
				if (fseek(f, (yyvsp[-3].integer), SEEK_SET) != 0)
					die("Couldn't seek to offset %llu in \"%s\": %s",
					    (unsigned long long)(yyvsp[-3].integer), (yyvsp[-5].data).val,
					    strerror(errno));

			d = data_copy_file(f, (yyvsp[-1].integer));

			(yyval.data) = data_merge((yyvsp[-8].data), d);
			fclose(f);
		}
#line 1734 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 296 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			FILE *f = srcfile_relative_open((yyvsp[-1].data).val, NULL);
			struct data d = empty_data;

			d = data_copy_file(f, -1);

			(yyval.data) = data_merge((yyvsp[-4].data), d);
			fclose(f);
		}
#line 1748 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 306 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.data) = data_add_marker((yyvsp[-1].data), LABEL, (yyvsp[0].labelref));
		}
#line 1756 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 313 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.data) = empty_data;
		}
#line 1764 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 317 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.data) = (yyvsp[-1].data);
		}
#line 1772 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 321 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.data) = data_add_marker((yyvsp[-1].data), LABEL, (yyvsp[0].labelref));
		}
#line 1780 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 328 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			unsigned long long bits;

			bits = (yyvsp[-1].integer);

			if ((bits !=  8) && (bits != 16) &&
			    (bits != 32) && (bits != 64)) {
				ERROR(&(yylsp[-1]), "Array elements must be"
				      " 8, 16, 32 or 64-bits");
				bits = 32;
			}

			(yyval.array).data = empty_data;
			(yyval.array).bits = bits;
		}
#line 1800 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 344 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.array).data = empty_data;
			(yyval.array).bits = 32;
		}
#line 1809 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 349 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			if ((yyvsp[-1].array).bits < 64) {
				uint64_t mask = (1ULL << (yyvsp[-1].array).bits) - 1;
				/*
				 * Bits above mask must either be all zero
				 * (positive within range of mask) or all one
				 * (negative and sign-extended). The second
				 * condition is true if when we set all bits
				 * within the mask to one (i.e. | in the
				 * mask), all bits are one.
				 */
				if (((yyvsp[0].integer) > mask) && (((yyvsp[0].integer) | mask) != -1ULL))
					ERROR(&(yylsp[0]), "Value out of range for"
					      " %d-bit array element", (yyvsp[-1].array).bits);
			}

			(yyval.array).data = data_append_integer((yyvsp[-1].array).data, (yyvsp[0].integer), (yyvsp[-1].array).bits);
		}
#line 1832 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 368 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			uint64_t val = ~0ULL >> (64 - (yyvsp[-1].array).bits);

			if ((yyvsp[-1].array).bits == 32)
				(yyvsp[-1].array).data = data_add_marker((yyvsp[-1].array).data,
							  REF_PHANDLE,
							  (yyvsp[0].labelref));
			else
				ERROR(&(yylsp[0]), "References are only allowed in "
					    "arrays with 32-bit elements.");

			(yyval.array).data = data_append_integer((yyvsp[-1].array).data, val, (yyvsp[-1].array).bits);
		}
#line 1850 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 382 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.array).data = data_add_marker((yyvsp[-1].array).data, LABEL, (yyvsp[0].labelref));
		}
#line 1858 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 391 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.integer) = (yyvsp[-1].integer);
		}
#line 1866 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 402 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-4].integer) ? (yyvsp[-2].integer) : (yyvsp[0].integer); }
#line 1872 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 407 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) || (yyvsp[0].integer); }
#line 1878 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 412 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) && (yyvsp[0].integer); }
#line 1884 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 417 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) | (yyvsp[0].integer); }
#line 1890 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 422 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) ^ (yyvsp[0].integer); }
#line 1896 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 427 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) & (yyvsp[0].integer); }
#line 1902 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 432 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) == (yyvsp[0].integer); }
#line 1908 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 433 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) != (yyvsp[0].integer); }
#line 1914 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 438 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) < (yyvsp[0].integer); }
#line 1920 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 439 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) > (yyvsp[0].integer); }
#line 1926 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 440 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) <= (yyvsp[0].integer); }
#line 1932 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 441 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) >= (yyvsp[0].integer); }
#line 1938 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 445 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) << (yyvsp[0].integer); }
#line 1944 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 446 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) >> (yyvsp[0].integer); }
#line 1950 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 451 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) + (yyvsp[0].integer); }
#line 1956 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 452 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) - (yyvsp[0].integer); }
#line 1962 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 457 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[-2].integer) * (yyvsp[0].integer); }
#line 1968 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 459 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			if ((yyvsp[0].integer) != 0) {
				(yyval.integer) = (yyvsp[-2].integer) / (yyvsp[0].integer);
			} else {
				ERROR(&(yyloc), "Division by zero");
				(yyval.integer) = 0;
			}
		}
#line 1981 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 468 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			if ((yyvsp[0].integer) != 0) {
				(yyval.integer) = (yyvsp[-2].integer) % (yyvsp[0].integer);
			} else {
				ERROR(&(yyloc), "Division by zero");
				(yyval.integer) = 0;
			}
		}
#line 1994 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 481 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = -(yyvsp[0].integer); }
#line 2000 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 482 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = ~(yyvsp[0].integer); }
#line 2006 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 483 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    { (yyval.integer) = !(yyvsp[0].integer); }
#line 2012 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 488 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.data) = empty_data;
		}
#line 2020 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 492 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.data) = data_append_byte((yyvsp[-1].data), (yyvsp[0].byte));
		}
#line 2028 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 496 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.data) = data_add_marker((yyvsp[-1].data), LABEL, (yyvsp[0].labelref));
		}
#line 2036 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 503 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.nodelist) = NULL;
		}
#line 2044 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 507 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.nodelist) = chain_node((yyvsp[-1].node), (yyvsp[0].nodelist));
		}
#line 2052 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 511 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			ERROR(&(yylsp[0]), "Properties must precede subnodes");
			YYERROR;
		}
#line 2061 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 519 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.node) = name_node((yyvsp[0].node), (yyvsp[-1].propnodename));
		}
#line 2069 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 523 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			(yyval.node) = name_node(build_node_delete(), (yyvsp[-1].propnodename));
		}
#line 2077 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 527 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1646  */
    {
			add_label(&(yyvsp[0].node)->labels, (yyvsp[-1].labelref));
			(yyval.node) = (yyvsp[0].node);
		}
#line 2086 "dtc-parser.tab.c" /* yacc.c:1646  */
    break;


#line 2090 "dtc-parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
  return yyresult;
}
#line 533 "/home/jieun/sata/qemu_barrier/qemu/dtc/dtc-parser.y" /* yacc.c:1906  */


void yyerror(char const *s)
{
	ERROR(&yylloc, "%s", s);
}

/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "kim.y"

#define NORMAL_TEXT_COLOR "\x1b[0m"
#define ERROR_TEXT_COLOR "\x1b[31m"

int line_no = 1;

#line 77 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IDENTIFIER = 258,
    TYPE_IDENTIFIER = 259,
    FLOAT_CONSTANT = 260,
    INTEGER_CONSTANT = 261,
    CHARACTER_CONSTANT = 262,
    STRING_LITERAL = 263,
    AUTO_SYM = 264,
    STATIC_SYM = 265,
    TYPEDEF_SYM = 266,
    STRUCT_SYM = 267,
    ENUM_SYM = 268,
    SIZEOF_SYM = 269,
    UNION_SYM = 270,
    IF_SYM = 271,
    ELSE_SYM = 272,
    WHILE_SYM = 273,
    DO_SYM = 274,
    FOR_SYM = 275,
    CONTINUE_SYM = 276,
    BREAK_SYM = 277,
    RETURN_SYM = 278,
    SWITCH_SYM = 279,
    CASE_SYM = 280,
    DEFAULT_SYM = 281,
    PLUS = 282,
    MINUS = 283,
    PLUSPLUS = 284,
    MINUSMINUS = 285,
    AMP = 286,
    BARBAR = 287,
    AMPAMP = 288,
    STAR = 289,
    SLASH = 290,
    PERCENT = 291,
    ASSIGN = 292,
    ARROW = 293,
    COLON = 294,
    SEMICOLON = 295,
    DOTDOTDOT = 296,
    PERIOD = 297,
    COMMA = 298,
    EXCL = 299,
    LSS = 300,
    GTR = 301,
    LEQ = 302,
    GEQ = 303,
    EQL = 304,
    NEQ = 305,
    LP = 306,
    RP = 307,
    LB = 308,
    RB = 309,
    LR = 310,
    RR = 311
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define FLOAT_CONSTANT 260
#define INTEGER_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define AUTO_SYM 264
#define STATIC_SYM 265
#define TYPEDEF_SYM 266
#define STRUCT_SYM 267
#define ENUM_SYM 268
#define SIZEOF_SYM 269
#define UNION_SYM 270
#define IF_SYM 271
#define ELSE_SYM 272
#define WHILE_SYM 273
#define DO_SYM 274
#define FOR_SYM 275
#define CONTINUE_SYM 276
#define BREAK_SYM 277
#define RETURN_SYM 278
#define SWITCH_SYM 279
#define CASE_SYM 280
#define DEFAULT_SYM 281
#define PLUS 282
#define MINUS 283
#define PLUSPLUS 284
#define MINUSMINUS 285
#define AMP 286
#define BARBAR 287
#define AMPAMP 288
#define STAR 289
#define SLASH 290
#define PERCENT 291
#define ASSIGN 292
#define ARROW 293
#define COLON 294
#define SEMICOLON 295
#define DOTDOTDOT 296
#define PERIOD 297
#define COMMA 298
#define EXCL 299
#define LSS 300
#define GTR 301
#define LEQ 302
#define GEQ 303
#define EQL 304
#define NEQ 305
#define LP 306
#define RP 307
#define LB 308
#define RB 309
#define LR 310
#define RR 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   467

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  282

#define YYUNDEFTOK  2
#define YYMAXUTOK   311


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    23,    23,    26,    27,    30,    31,    36,    37,    42,
      43,    46,    47,    50,    53,    54,    55,    56,    59,    60,
      61,    64,    65,    68,    69,    72,    73,    77,    78,    81,
      82,    87,    88,    89,    92,    93,    94,    97,    98,   101,
     102,   105,   108,   109,   112,   115,   116,   117,   120,   121,
     124,   125,   130,   131,   134,   135,   138,   139,   140,   141,
     144,   145,   148,   149,   152,   153,   156,   157,   160,   161,
     164,   165,   166,   169,   170,   171,   172,   173,   178,   179,
     182,   183,   186,   187,   188,   189,   190,   191,   194,   195,
     198,   201,   202,   205,   206,   207,   210,   211,   212,   215,
     218,   219,   222,   223,   224,   229,   230,   233,   234,   237,
     238,   241,   244,   247,   250,   251,   254,   257,   258,   261,
     262,   265,   268,   271,   274,   275,   276,   279,   280,   281,
     282,   283,   286,   289,   290,   291,   294,   295,   296,   297,
     300,   301,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   316,   317,   318,   319,   320,   321,   322,   325,
     326,   327,   328,   329,   330,   333,   334
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_IDENTIFIER",
  "FLOAT_CONSTANT", "INTEGER_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM", "STRUCT_SYM",
  "ENUM_SYM", "SIZEOF_SYM", "UNION_SYM", "IF_SYM", "ELSE_SYM", "WHILE_SYM",
  "DO_SYM", "FOR_SYM", "CONTINUE_SYM", "BREAK_SYM", "RETURN_SYM",
  "SWITCH_SYM", "CASE_SYM", "DEFAULT_SYM", "PLUS", "MINUS", "PLUSPLUS",
  "MINUSMINUS", "AMP", "BARBAR", "AMPAMP", "STAR", "SLASH", "PERCENT",
  "ASSIGN", "ARROW", "COLON", "SEMICOLON", "DOTDOTDOT", "PERIOD", "COMMA",
  "EXCL", "LSS", "GTR", "LEQ", "GEQ", "EQL", "NEQ", "LP", "RP", "LB", "RB",
  "LR", "RR", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", "declaration", "declaration_specifiers",
  "storage_class_specifier", "init_declarator_list_opt",
  "init_declarator_list", "init_declarator", "initializer",
  "initializer_list", "type_specifier", "struct_type_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "enumerator_list", "enumerator", "declarator", "pointer",
  "direct_declarator", "parameter_type_list_opt", "parameter_type_list",
  "parameter_list", "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator",
  "statement_list_opt", "statement_list", "statement", "labeled_statement",
  "compound_statement", "expression_statement", "selection_statement",
  "iteration_statement", "for_expression", "expression_opt",
  "jump_statement", "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "type_name", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

#define YYPACT_NINF (-186)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     295,  -186,  -186,  -186,  -186,  -186,  -186,    16,  -186,   -24,
      40,    72,   295,  -186,  -186,  -186,    40,   441,   441,  -186,
      34,  -186,    -6,    50,    59,    56,    13,  -186,    35,  -186,
    -186,    62,    86,  -186,    15,  -186,  -186,    88,   178,   441,
    -186,    59,   441,   348,    13,    77,     3,  -186,  -186,  -186,
      40,   169,  -186,   178,    40,    53,  -186,   220,   441,  -186,
      40,   110,    87,  -186,   105,  -186,  -186,  -186,  -186,  -186,
    -186,   380,   348,   348,   398,   398,   348,   348,   348,   330,
     108,  -186,  -186,  -186,  -186,  -186,   132,   136,  -186,  -186,
    -186,    27,   210,  -186,   139,    71,  -186,   142,   180,  -186,
      85,   348,    13,  -186,  -186,   147,   169,  -186,  -186,    84,
       4,  -186,  -186,  -186,  -186,   122,   134,   220,   135,   148,
     152,   348,   144,   348,   165,  -186,   150,   220,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,   167,  -186,   269,   348,  -186,
      39,  -186,  -186,   100,  -186,   426,   330,  -186,  -186,  -186,
    -186,   348,  -186,  -186,  -186,  -186,  -186,    33,   156,   159,
    -186,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,  -186,  -186,   209,   226,   348,
     348,  -186,  -186,  -186,  -186,    89,  -186,  -186,    40,   348,
     348,   212,   348,  -186,  -186,   192,  -186,   348,   198,   220,
    -186,  -186,  -186,   200,   201,   205,   100,   441,   348,  -186,
    -186,   211,   279,   106,  -186,  -186,   348,   136,  -186,   210,
     210,  -186,  -186,  -186,  -186,    71,    71,  -186,  -186,  -186,
    -186,  -186,  -186,   213,   218,  -186,   208,   169,  -186,  -186,
     214,   215,   217,   222,   229,  -186,   224,   220,  -186,  -186,
    -186,  -186,   225,   216,  -186,  -186,  -186,   348,  -186,  -186,
     220,   220,   348,   220,   348,   220,  -186,  -186,  -186,  -186,
     268,  -186,   234,  -186,   247,  -186,   220,   253,   348,  -186,
    -186,  -186
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    56,    33,    18,    19,    20,    37,     0,    38,    54,
       0,     0,     2,     3,     5,     6,    21,    15,    14,    31,
       0,    32,     0,     0,    53,    47,     0,    55,     0,     1,
       4,     0,    22,    23,    25,    17,    16,    36,     0,     9,
       8,    52,    60,   109,     0,    50,     0,    48,    57,    13,
       0,     0,     7,     0,     0,     0,    39,    78,    10,    11,
      21,    68,     0,    61,    62,    64,   159,   161,   160,   162,
     163,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   111,   112,   113,   114,   116,   117,   119,   121,
     122,   123,   124,   127,   132,   133,   136,   140,   142,   152,
       0,     0,     0,    46,    24,    25,     0,    26,    27,     0,
       0,    42,    44,    35,    40,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,    91,     0,    79,    80,    82,
      83,    84,    85,    86,    87,     0,    12,    60,   109,    66,
      71,    67,    69,    70,    59,     0,     0,   150,   149,   140,
     148,     0,   143,   144,   145,   146,   147,   165,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   157,   158,     0,     0,   105,
       0,    45,    51,    49,    29,     0,    34,    41,     0,     0,
       0,     0,   100,   103,   104,     0,   101,     0,     0,     0,
      90,    81,    92,     0,     0,     0,    72,    60,   109,    63,
      65,     0,    60,    71,   166,   164,     0,   118,   120,   125,
     126,   128,   129,   130,   131,   134,   135,   137,   138,   139,
     115,   156,   155,     0,   106,   107,     0,     0,    28,    43,
       0,     0,     0,     0,     0,   102,     0,     0,    89,    76,
      73,    74,     0,     0,   151,   141,   154,     0,   153,    30,
       0,     0,     0,     0,   100,     0,    88,    77,    75,   108,
      93,    96,     0,    98,     0,    95,     0,     0,   100,    94,
      97,    99
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -186,  -186,  -186,   283,  -186,  -186,  -186,     2,     6,  -186,
    -186,  -186,   246,  -101,  -186,    -5,  -186,  -186,   244,   -34,
    -186,   112,  -186,   257,   207,     1,    -7,    -9,   -39,  -186,
    -186,   157,  -186,   -57,  -131,  -186,  -186,  -105,  -186,    47,
    -186,  -186,  -186,  -186,  -185,  -186,  -186,  -186,  -125,   -50,
     -43,  -186,  -159,  -186,  -186,   151,   149,  -186,  -186,  -186,
      17,    49,  -186,    32,   -38,   -46,  -186,  -186,   168
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    57,    58,    15,    61,    17,
      31,    32,    33,   107,   185,    18,    19,    20,    55,    56,
     110,   111,    21,    46,    47,    22,    23,    24,   203,    63,
      64,    65,   141,   204,   143,   126,   127,   128,   129,   130,
     131,   132,   133,   243,   195,   134,   233,   234,    80,    81,
     135,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   159
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,   108,    27,    62,   142,   184,    16,   244,    82,   206,
       9,    28,   191,   205,    41,   230,    45,    34,    16,    25,
     235,   114,   201,    35,    36,   147,   149,   149,   152,   153,
     149,   149,   149,    54,   148,   150,   158,    37,   154,   155,
     156,    59,     1,     1,   187,    60,   102,   188,    54,    39,
      54,   105,    51,     1,   140,   112,   108,     2,   182,   103,
     136,   105,   139,    82,    60,     6,     7,     9,     8,    40,
      39,    26,    29,   198,     9,   114,   163,   164,   196,   274,
      82,    52,   206,   253,   212,   157,   138,    48,     2,    38,
     137,    10,   138,   281,   248,    82,     6,     7,   269,     8,
     214,    10,    49,   158,    54,   171,   172,   173,   158,   113,
      42,    44,    43,     1,   101,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   102,    50,
     140,    41,   237,   227,   228,   229,   259,   236,    28,   144,
     186,   181,   266,    53,     9,   238,   240,   241,   145,   196,
     213,   207,   157,   208,   246,   270,   271,   212,   273,   138,
     275,   137,   160,   138,   161,    82,   169,   170,   252,   162,
     149,   279,    66,   189,    67,    68,    69,    70,   255,   174,
     219,   220,     2,    71,    51,   190,   192,   108,   193,   112,
       6,     7,   194,     8,    82,   197,    72,    73,    74,    75,
      76,   225,   226,    77,   199,   213,   200,   202,   215,   175,
     176,   216,   231,    78,   221,   222,   223,   224,   177,   272,
      79,   196,   178,    66,   106,    67,    68,    69,    70,   232,
     242,   179,   245,   180,    71,   196,   115,   247,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    72,    73,    74,
      75,    76,   249,   250,    77,   165,   166,   167,   168,   251,
     125,   257,   258,   254,    78,   256,   260,   261,   262,   264,
     268,    79,     1,     2,   263,    39,   265,   267,     3,     4,
       5,     6,     7,     2,     8,   276,   277,   278,     3,     4,
       5,     6,     7,   280,     8,    30,   104,   109,     1,     2,
     239,   100,   210,     9,     3,     4,     5,     6,     7,   183,
       8,   218,   217,     9,   211,     0,     0,     0,     0,     0,
     137,     0,   138,     0,     0,     0,     0,     0,     0,     9,
     212,     0,   138,    66,     2,    67,    68,    69,    70,     3,
       4,     5,     6,     7,    71,     8,    10,     0,     0,     0,
       0,    66,     0,    67,    68,    69,    70,    72,    73,    74,
      75,    76,    71,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    72,    73,    74,    75,    76,
       0,    79,    77,    66,     0,    67,    68,    69,    70,     0,
       0,     0,    78,     0,    71,     0,     0,     0,     0,    79,
       0,    66,     0,    67,    68,    69,    70,    72,    73,    74,
      75,    76,    71,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    72,    73,    74,    75,    76,
       2,   146,    77,     0,     0,     3,     4,     5,     6,     7,
       0,     8,    78,     0,     0,     2,     0,     0,     0,   151,
       3,     4,     5,     6,     7,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   209
};

static const yytype_int16 yycheck[] =
{
      43,    51,     9,    42,    61,   106,     0,   192,    51,   140,
      34,    10,   117,   138,    23,   174,     3,    16,    12,     3,
     179,    55,   127,    17,    18,    71,    72,    73,    74,    75,
      76,    77,    78,    38,    72,    73,    79,     3,    76,    77,
      78,    39,     3,     3,    40,    39,    43,    43,    53,    55,
      55,    50,    37,     3,    61,    54,   106,     4,   101,    56,
      58,    60,    61,   106,    58,    12,    13,    34,    15,    22,
      55,    55,     0,   123,    34,   109,    49,    50,   121,   264,
     123,    34,   213,   208,    51,    79,    53,    52,     4,    55,
      51,    51,    53,   278,   199,   138,    12,    13,   257,    15,
     157,    51,    40,   146,   109,    34,    35,    36,   151,    56,
      51,    55,    53,     3,    37,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,    43,    43,
     137,   140,    43,   171,   172,   173,   237,   180,   137,    52,
      56,    56,   247,    55,    34,    56,   189,   190,    43,   192,
     157,    51,   146,    53,   197,   260,   261,    51,   263,    53,
     265,    51,    54,    53,    32,   208,    27,    28,   207,    33,
     216,   276,     3,    51,     5,     6,     7,     8,   216,    37,
     163,   164,     4,    14,    37,    51,    51,   237,    40,   188,
      12,    13,    40,    15,   237,    51,    27,    28,    29,    30,
      31,   169,   170,    34,    39,   212,    56,    40,    52,    29,
      30,    52,     3,    44,   165,   166,   167,   168,    38,   262,
      51,   264,    42,     3,    55,     5,     6,     7,     8,     3,
      18,    51,    40,    53,    14,   278,    16,    39,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    52,    52,    34,    45,    46,    47,    48,    54,
      40,    43,    54,    52,    44,    52,    52,    52,    51,    40,
      54,    51,     3,     4,    52,    55,    52,    52,     9,    10,
      11,    12,    13,     4,    15,    17,    52,    40,     9,    10,
      11,    12,    13,    40,    15,    12,    50,    53,     3,     4,
     188,    44,   145,    34,     9,    10,    11,    12,    13,   102,
      15,   162,   161,    34,   146,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      51,    -1,    53,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    51,    -1,    -1,    -1,
      -1,     3,    -1,     5,     6,     7,     8,    27,    28,    29,
      30,    31,    14,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    27,    28,    29,    30,    31,
      -1,    51,    34,     3,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    44,    -1,    14,    -1,    -1,    -1,    -1,    51,
      -1,     3,    -1,     5,     6,     7,     8,    27,    28,    29,
      30,    31,    14,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    27,    28,    29,    30,    31,
       4,    51,    34,    -1,    -1,     9,    10,    11,    12,    13,
      -1,    15,    44,    -1,    -1,     4,    -1,    -1,    -1,    51,
       9,    10,    11,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     9,    10,    11,    12,    13,    15,    34,
      51,    58,    59,    60,    61,    64,    65,    66,    72,    73,
      74,    79,    82,    83,    84,     3,    55,    83,    82,     0,
      60,    67,    68,    69,    82,    65,    65,     3,    55,    55,
      96,    84,    51,    53,    55,     3,    80,    81,    52,    40,
      43,    37,    96,    55,    72,    75,    76,    62,    63,    64,
      65,    65,    85,    86,    87,    88,     3,     5,     6,     7,
       8,    14,    27,    28,    29,    30,    31,    34,    44,    51,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      80,    37,    43,    56,    69,    82,    55,    70,   106,    75,
      77,    78,    82,    56,    76,    16,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    40,    92,    93,    94,    95,
      96,    97,    98,    99,   102,   107,    64,    51,    53,    82,
      83,    89,    90,    91,    52,    43,    51,   122,   121,   122,
     121,    51,   122,   122,   121,   121,   121,    65,   107,   125,
      54,    32,    33,    49,    50,    45,    46,    47,    48,    27,
      28,    34,    35,    36,    37,    29,    30,    38,    42,    51,
      53,    56,   107,    81,    70,    71,    56,    40,    43,    51,
      51,    94,    51,    40,    40,   101,   107,    51,   106,    39,
      56,    94,    40,    85,    90,   105,    91,    51,    53,    41,
      88,   125,    51,    83,    90,    52,    52,   112,   113,   117,
     117,   118,   118,   118,   118,   120,   120,   121,   121,   121,
     109,     3,     3,   103,   104,   109,   107,    43,    56,    78,
     107,   107,    18,   100,   101,    40,   107,    39,    94,    52,
      52,    54,    85,   105,    52,   121,    52,    43,    54,    70,
      52,    52,    51,    52,    40,    52,    94,    52,    54,   109,
      94,    94,   107,    94,   101,    94,    17,    52,    40,    94,
      40,   101
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    63,    63,    64,    65,    65,    65,    65,    66,    66,
      66,    67,    67,    68,    68,    69,    69,    70,    70,    71,
      71,    72,    72,    72,    73,    73,    73,    74,    74,    75,
      75,    76,    77,    77,    78,    79,    79,    79,    80,    80,
      81,    81,    82,    82,    83,    83,    84,    84,    84,    84,
      85,    85,    86,    86,    87,    87,    88,    88,    89,    89,
      90,    90,    90,    91,    91,    91,    91,    91,    92,    92,
      93,    93,    94,    94,    94,    94,    94,    94,    95,    95,
      96,    97,    97,    98,    98,    98,    99,    99,    99,   100,
     101,   101,   102,   102,   102,   103,   103,   104,   104,   105,
     105,   106,   107,   108,   109,   109,   110,   111,   111,   112,
     112,   113,   114,   115,   116,   116,   116,   117,   117,   117,
     117,   117,   118,   119,   119,   119,   120,   120,   120,   120,
     121,   121,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   123,   123,   123,   123,   123,   123,   123,   124,
     124,   124,   124,   124,   124,   125,   125
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     0,
       1,     1,     2,     3,     1,     1,     2,     2,     1,     1,
       1,     0,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     5,     4,     2,     1,     1,     1,
       2,     3,     1,     3,     1,     5,     4,     2,     1,     3,
       1,     3,     2,     1,     1,     2,     1,     3,     4,     4,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     4,     3,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       4,     1,     2,     5,     7,     5,     5,     7,     5,     5,
       0,     1,     3,     2,     2,     0,     1,     1,     3,     0,
       1,     1,     1,     1,     1,     3,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     1,     3,     3,     1,     3,     3,     3,
       1,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     1,     4,     4,     3,     3,     2,     2,     1,
       1,     1,     1,     1,     3,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1674 "y.tab.c"

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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
#line 337 "kim.y"

extern char *yytext;

void main() {
	yyparse();
}

void yyerror(char *s){
	printf(ERROR_TEXT_COLOR "Line %d: %s near %s \n" NORMAL_TEXT_COLOR,  line_no, s, yytext);
}

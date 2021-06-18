/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

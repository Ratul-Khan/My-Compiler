

%{
	#include "proj.tab.h"
	#include <string.h>
%}

header []*[!][o][n][t][o][r][v][o][k][t][o][%][a-zA-Z]+[.][h][%]
ID [a-zA-Z][a-zA-Z0-9]*
int "purno"
float "dosomik"
char "okkhor"
end "$"
assign "soman"
main "func main<>:"
shoro "shuru"
shesh "shesh"
rt "ferot"
separator ";"
lp "<"
rp ">"
lb "lb"
rb "rb"
void "nothing"
int_array "[".*"]"
str [{].*[}]
tD_array [p][o][r][n][o][[][0-9| ]*[]][[][0-9| ]*[]][ ][a-zA-Z]+
increment [b][a][r][a][o]
decrement [k][o][m][a][o]
si [f][o][r][w]
sd [b][a][c][k]
add "jog"
sub "biyog"
mul "gon"
div "vag"
fd "//"
rem "vagshes"
gcd [g][s][a][g][o]
lcm [l][s][a][g][o]
prime [i][s][_][m][o][w][l][i][k]
const "fixed"
cmnt "**".*"\n"
mc "#*"(.*|\n*)"*#"
eq "eq"
ne "ne"
gt "gt"
lt "lt"
ge "ge"
le "le"
if "jodi"
else_if "na hoi"
else "noi to:"
for "loop"
while "jotokkhon"
do "repeat"[\n][\t]*"shuru"[.\n\t]*"shesh"[ \n\t]+"jotokkhon:"[a-zA-Z]+[ ]("eq"|"lt"|"gl"|"gt"|"le"|"ge")[ ][0-9]+
break "stop"
continue "go_on"
goto "jump
struct "encapsule"
func "func"
switch "toggle"
case "cs"
default "auto"
then "then"
define "!def"
typedef "typealias "[a-zA-Z]+" soman "[a-zA-Z]+
static "shared"
ternary1 "?"
ternary2 "/"
in "obtain"[<]
show "show"
show_str "show_str"
pow "pow"
sqrt "root"
ceil [a-zA-z]+" soman ""CEIL"[<][a-zA-Z0-9]+[>]
floor [a-zA-z]+" soman ""FLOOR"[<][a-zA-Z0-9]+[>]
pointer ("porno"|"okkhor"|"vognansho")" ^"[a-zA-Z]+
address [a-zA-z]+" soman ""@"[a-zA-Z]+
lor "or"
land "and"
not"not"
bor "b_or"
band "b_and"
neg "neg"
da [a-zA-z]+" soman ""d_alloc"[<].*[>]
size [a-zA-z]+" soman ""#"[<][a-zA-Z0-9]+[>]
free "Free "[a-zA-Z]+
strcpy "str_copy"[<].*[>]
strcat "str_add"[<].*[>]
abs [a-zA-z]+" soman ""ABS""<"[a-zA-Z0-9]+[ ]"biyog"[ ][a-zA-Z0-9]+">"
tan [a-zA-Z]" soman ""tan"[<].*[>]
sin [a-zA-Z]" soman ""sin"[<].*[>]
cos [a-zA-Z]" soman ""cos"[<].*[>]
union "UNION"[ ][a-zA-Z]+":""\n""shuru"[.\n\t]*"shesh"
enum "ENUM"[ ][a-zA-Z]+[[].*[]]
comma ","
long "large"[ ]
file "file ^"[a-zA-Z]+
fopen [a-zA-Z]" soman ""fOPEN"[<].*[>]
fclose "fCLOSE"[<].*[>]
fread "fREAD"[<].*[>]
fwrite "fWRITE"[<].*[>]
fin "fIN"[<].*[>]
fout "fOUT"[<].*[>]
filename [a-zA-Z0-9]+[.][t][x][t]
up [j][o][g][a-zA-Z][a-zA-Z0-9]*
um [b][i][y][o][g][a-zA-Z][a-zA-Z0-9]*
bool "boolean"[ ][a-zA-Z]+
j "jodi"
t "tokhon:"
func_call [a-zA-Z]+[<][0-9]*[>]
min "mn"
max "mx"

%%

[ \t\n] 
{main} {return MAIN;}
{header} {return HEADER;}
{struct} {return STRUCT;}
{int} {return INT;}
{float} {return FLOAT;}
{char} {return CHAR;}
{shoro} {return SHURU;}
{shesh} {return SHESH;}
"!def" {return DEF ; }
{assign} {return ASSIGN;}
[0-9]+	{ yylval.i = atoi(yytext); return NUM; }
{lp} {return LP; }
{rp} {return RP; }
{show} {return SHOW; }
{end} {return END; }
{separator} {return SP;}
{add} {return ADD;}
{sub} {return SUB;}
{mul} {return MUL;}
{div} {return DIV;}
{min} {return MIN;}
{max} {return MAX;}
{if} {return IF;}
{else_if} {return ELSE_IF;}
{else} {return ELSE;}
":" {return COLON;}
{increment} {return INC;}
{decrement} {return DEC;}
{eq} {return EQ;}
{ne} {return NE;}
{gt} {return GT;}
{lt} {return LT;}
{ge} {return GE;}
{le} {return LE;}
{si} {return SI;}
{sd} {return SD;}
"fact" {return FACT;}
"cir_area" {return CA;}
"sq_area" {return SA;}
"rec_area" {return RA;}
{for} {return FOR;}
"to" {return TO;}
"with" {return WITH;}
{then} {return THEN;}
{switch} {return SWITCH;}
{case} {return CASE;}
"auto" {return DEFAULT;}
"func" {return FUNC;}
{void} {return VOID;}
{cmnt} {}
{mc} {}
"bin" {return BIN;}
"c_sum" {return C_SUM;}
{str} {strcpy(yylval.s,yytext); return STR;}
"rev" {return REV;}
"sort" {return SORT;}
{int_array} {strcpy(yylval.s,yytext);return IA;}
"?" {return T1;}
"/" {return T2;}
{fd} {return FD;}
{rem} {return REM;}
{pow} {return POW;}
{gcd} {return GCD;}
{lcm} {return LCM;}
{sqrt} {return SQRT;}
{prime} {return PRIME;}
{lor} {return OR;}
{land} {return AND;}
{not} {return NOT;}
{while} {return WHILE;}
{show_str} {return SHOW_STR;}
"print_star" {return PS;}
"print_mowlik_till" {return PM;}
{bor} {return BOR;}
{band} {return BAND;}
{neg} {return NEG;}
{ID} {strcpy(yylval.s,yytext);return ID;}

%%


int yywrap()
{
	return 1;
}

int main(){
	yyin = freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	yyparse();
}
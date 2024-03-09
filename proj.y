
%{
	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>
	#include <math.h>
	int if_cnt = 0;
	int if_done[1000];
	int if_work[1000];
	int else_if_work[1000];
	int else_work[1000];
	int if_work_cnt=0;
	int else_if_work_cnt=0;
	int else_work_cnt=0;
	int for_cnt = 0;
	int for_work[1000];
	int for_work_cnt=0;
	int while_cnt = 0;
	int while_work[1000];
	int while_work_cnt = 0;
	int switch_cs = 0;
	int switch_done = 0;
    int cnt = 0;
    char id[1000][1000];
	int id_val[1000];
	
    int check_declaration(char s[])
	{
        int i;
        for(i = 0; i < cnt; i++)
		{
            if(strcmp(id[i],s) == 0) return 1;
        }
        return 0;
    }
	
    void add_id_val(char s[],int v)
	{
        strcpy(id[cnt],s);
		id_val[cnt] = v;
        cnt++;
    }

    int get_idVal(char s[])
	{
        int i;
        for(i = 0; i < cnt; i++)
		{
            if(strcmp(id[i],s) == 0)
			{
                return id_val[i];
            }
        }
    }
	
    void set_idVal(char s[], int v)
	{
        int i;
        for(i = 0; i < cnt; i++)
		{
            if(strcmp(id[i],s) == 0) 
			{
                id_val[i] = v;
				break;
            }
        }
	}


%}

%union {
  char s[1000];
  int i;
}


%token <s>  ID 
%token <i> NUM
%token <s> STR
%left OR AND
%nonassoc NOT
%left BOR BAND
%nonassoc NEG
%left ADD SUB
%left MUL DIV
%left REM
%left POW
%token SQRT
%token <s> IA
%token HEADER DEF INT SHURU MAIN SA RA WHILE FD PM PS SHOW SHOW_STR STRUCT PRIME SHESH T1 T2 SORT REV C_SUM BIN VOID FUNC THEN SWITCH CASE DEFAULT FOR TO WITH FACT CA SI SD MIN MAX EQ NE GT LT GE LE INC DEC COLON IF ELSE_IF ELSE LP RP FLOAT CHAR END SP ASSIGN 
%nonassoc GCD
%nonassoc LCM
%type  <i> exp
%type <i> show


%%

program : header definition struct function start
	;
header :
	    | HEADER { printf("Header included\n"); }
		;
start : MAIN shuru statement shesh { printf("Successful compilation"); }
	;
shuru : SHURU { printf("Start of main\n"); }
shesh : SHESH { printf("End of main\n");}
statement	:
			| statement declaration
			| statement assignment
			| statement exp
			| statement show
			| statement if
			| statement for
			| statement switch
			| statement str_operation
			| statement while
			| statement show_str
			;
declaration : type var END
			;
type 	: INT 
		| FLOAT
		| CHAR
		;
var 	: v
		| var SP v
		;
v   	: ID {
				int check = check_declaration($1);
				if(check)
				{
					printf("Compilation Error:%s is already declared\n",$1);
					exit(-1);
				}
				else
				{
					add_id_val($1,rand());
				}
				/*printf("%d\n",cnt);
				int i;
				for(i=0;i<cnt;i++)printf("%s\n",id[i]);*/
			 }
		| ID ASSIGN exp {
							int check = check_declaration($1);
							if(check)
							{
								printf("Compilation Error:%s is already declared\n",$1);
								exit(-1);
							}
							else
							{
								set_idVal($1,$3);
							}
						}
		;
assignment	: ID ASSIGN exp END {
									int check = check_declaration($1);
									if(!check)
									{
										printf("Compilation Error:%s is not declared yet\n",$1);
										exit(-1);
									}
									else
									{
										set_idVal($1,$3);
									}
								}
			;
show		: SHOW LP exp RP END {
								printf("%d\n",$3);
						   }
			;
show_str : SHOW_STR LP STR RP END{
										int l = strlen($3);
										int i;
										for(i=1;i<l-1;i++)
										{
											printf("%c",$3[i]);
										}
										printf("\n");
									}
			;
exp		: NUM { $$ = $1 ; }
		| ID  { 
				int check = check_declaration($1);
				if(!check)
				{
					printf("Compilation Error:%s is not declared yet\n",$1);
					exit(-1);
				}
				else
				{
					$$ = get_idVal($1);
				}
			  }
		| exp ADD exp {
						$$ = $1 + $3 ;
					  }
		| exp SUB exp {
						$$ = $1 - $3 ;
					  }
		| exp MUL exp {
						$$ = $1 * $3 ;
					  }
		| exp OR exp {
						$$ = $1 || $3 ;
					 }
		| exp AND exp {
						$$ = $1 && $3 ;
					  }
		| NOT exp	{
						$$ = !$2;
					}
		| exp BOR exp {
						$$ = $1 | $3;
					  }
		| exp BAND exp {
						$$ = $1 & $3;
					   }
		| NEG exp {
						$$ = ~$2;
					  }
		| exp DIV exp {
						if($3)
						{
							$$ = $1 / $3 ;
						}
						else
						{
							$$ = 0;
							printf("\nRuntime Error:Divide by zero");
							exit(-1);
						}
					  }
		| exp FD exp {
						if($3)
						{
							$$ = $1 / $3 ;
						}
						else
						{
							$$ = 0;
							printf("\nRuntime Error:Divide by zero");
							exit(-1);
						}
					 }
		| exp REM exp {
						if($3)
						{
							$$ = $1 % $3 ;
						}
						else
						{
							$$ = 0;
							printf("\nRuntime Error:Divide by zero");
							exit(-1);
						}
					  }
		| MIN LP exp SP exp RP {
									if($3<$5)
									{
										$$ = $3;
									}
									else
									{
										$$ = $5;
									}
							   }
		| MAX LP exp SP exp RP {
									if($3>$5)
									{
										$$ = $3;
									}
									else
									{
										$$ = $5;
									}
							   }
		| INC LP ID SP exp RP {
								int prev = get_idVal($3);
								int new = prev + $5;
								/*printf("%d\n",new);*/
								$$ = new;
							  }
		| DEC LP ID SP exp RP {
								int prev = get_idVal($3);
								$$ = prev - $5;
							  }
		| SI LP ID RP {
						int prev = get_idVal($3);
						$$ = prev + 1;
					  }
		| SD LP ID RP {
						int prev = get_idVal($3);
						$$ = prev - 1;
					  }
		| exp EQ exp {
							$$ = ($1==$3) ;
					 }
		| exp NE exp {
							$$ = ($1!=$3) ;
					 }
		| exp GT exp {
							$$ = ($1>$3) ;
					 }
		| exp LT exp {
							$$ = ($1<$3) ;
					 }
		| exp GE exp {
						    $$ = ($1>=$3) ;
					 }
		| exp LE exp {
							$$ = ($1<=$3) ;
					 }
		| FACT LP exp RP {
							int f = 1;
							int i;
							for(i=1;i<=$3;i++)
							{
								f*=i;
							}
							$$ = f ;
						}
		| CA LP exp RP {
							double pi = 3.1416;
							double area = pi*$3*$3;
							printf("%.6f",area);
					   }
		| SA LP exp RP {
							$$ = $3*$3;
					   }
		| RA LP exp SP exp RP {
								$$ = $3*$5;
							  }
		| BIN LP exp RP {
							int b[100];
							int d = $3 ;
							int i=0;
							while(d>0)
							{
								b[i]=d%2;
								d/=2;
								i++;
							}
							int j;
							for(j=i-1;j>=0;j--)
							{
								printf("%d",b[j]);
							}
							printf("\n");
						}
		| C_SUM LP exp RP {
							int n = $3;
							n = (n*(n+1))/2;
							$$ = n;
						  }
		| exp T1 exp T2 exp {
								if($1)
								{
									$$ = $3;
								}
								else
								{
									$$ = $5;
								}
							}
		| exp POW exp {
						int n = $1;
						int m = $3;
						int i;
						int ans = 1;
						for(i=1;i<=m;i++)
						{
							ans*=n;
						}
						$$ = ans;
					  }
		| GCD LP exp SP exp RP {
									int n = $3;
									int m = $5;
									while(n!=m)
									{
										if(n>m)
										{
											n-=m;
										}
										else
										{
											m-=n;
										}
									}
									$$ = n;
							   }
		| LCM LP exp SP exp RP {
									int n=$3;
									int m=$5;
									int p=n*m;
									while(n!=m)
									{
										if(n>m)
										{
											n-=m;
										}
										else
										{
											m-=n;
										}
									}
									n=p/n;
									$$ = n;
							   }
		| SQRT LP exp RP {
							double n = (double)$3;
							int ans = (int)sqrt(n);
							$$ = ans;
						 }
		| PRIME LP exp RP {
							int n = $3;
							int flag=0;
							if(n==0 || n==1)
							{
								flag=1;
							}
							int i;
							for(i=2;i<=n/2;i++)
							{
								if(n%i==0)
								{
									flag=1;
									break;
								}
							}
							if(flag)
							{
								$$ = 0;
							}
							else
							{
								$$ = 1;
							}
						}
		;
str_operation : REV LP STR RP END{
							int l = strlen($3);
							int i;
							/*printf("%s\n",$3);*/
							for(i=l-2;i>0;i--)
							{
								printf("%c",$3[i]);
							}
							printf("\n");
						}
			  | SORT LP STR RP END{
									int l = strlen($3);
									int i,j;
									for(i=1;i<l-1;i++)
									{
										for(j=i+1;j<l-1;j++)
										{
											if( $3[i] > $3[j])
											{
												char temp = $3[i];
												$3[i] = $3[j];
												$3[j] = temp;
											}
										}
									}
									
									for(i=1;i<l-1;i++)
									{
										printf("%c",$3[i]);
									}
									printf("\n");
								}
				| SORT LP IA RP END{
									int l = strlen($3);
									/*printf("%d\n",l);*/
									int i,j;
									for(i=1;i<l-1;i+=2)
									{
										for(j=i+2;j<l-1;j+=2)
										{

											/*printf("a %d %d\n",$3[i],$3[j]);*/
											if($3[i] >$3[j])
											{
												/*printf("a %d %d\n",$3[i],$3[j]);*/
												char temp = $3[i];
												$3[i] = $3[j];
												$3[j] = temp;
											}
										}
									}
										for(i=1;i<l-1;i++)
										{
												if($3[i]==';' || $3[j]==';')
												{
													continue;
												}
												printf("%c ",$3[i]);
										}
										printf("\n");
									}
				| PS LP exp RP END {
										int n = $3;
										int r,c;
										for(r=1;r<=n;r++)
										{
											for(c=1;c<=n-r;c++)
											{
												printf(" ");
											}
											for(c=1;c<=2*r-1;c++)
											{
											    printf("*");
											}
											printf("\n");
										}
								   }
				| PM LP exp RP END {
										int n = $3;
										int i,j;
										int flag = 0;
										for(i=2;i<=n;i++)
										{
											flag = 0;
											for(j=2;j<=i/2;j++)
											{
												if(i%j==0)
												{
													flag = 1;
													break;
												}
											}
											if(flag == 0)
											{
												printf("%d ",i);
											}
										}
										printf("\n");
								   }
			  ;						
if : IF exp COLON SHURU ifexecute SHESH elseif {
													if_cnt++;
													if_done[if_cnt]=0;
													if($2)
													{
														int i;
														printf("Executed by if:\n");
														for(i=0;i<if_work_cnt;i++)
														{
															printf(" %d\n",if_work[i]);
														}
														if_work_cnt=0;
													}
											   }
	;
elseif	:   {if_cnt--;}
		|ELSE_IF exp COLON SHURU elseifexecute SHESH elseif {
															if(if_done[if_cnt]==0)
															{
																if($2)
																{
																	if_done[if_cnt] = 1 ;
																	int i;
																	printf("Executed by else if:\n");
																	for(i=0;i<else_if_work_cnt;i++)
																	{
																		printf(" %d\n",else_if_work[i]);
																	}
																	else_if_work_cnt=0;
																}
															}
														}
		| ELSE COLON SHURU elseexecute SHESH elseif {
														if(if_done[if_cnt] == 0 )
														{
															if_done[if_cnt] = 1;
															int i;
															printf("Executed by else\n");
															for(i=0;i<else_work_cnt;i++)
															{
																printf(" %d\n",else_work[i]);
															}
															printf("End of else");
															else_if_work_cnt = 0;
														}
													}
		;
ifexecute	:
			| ifexecute ifex
			;
ifex	:	SHOW LP exp RP END {
									if_done[if_cnt]=1;
									if_work[if_work_cnt]=$3;
									if_work_cnt++;
								}
		;
elseifexecute :
			  | elseifexecute elseifex
			  ;
elseifex	: SHOW LP exp RP END {
									if_done[if_cnt] = 1 ;
									else_if_work[else_if_work_cnt]=$3;
									else_if_work_cnt++;
								 }
			;
elseexecute	:
			| elseexecute elseex
			;
elseex	: declaration
		| assignment
		| SHOW LP exp RP END {
								if_done[if_cnt] = 1 ;
								else_work[else_work_cnt]=$3;
								else_work_cnt++;
							 }
		;

for	: FOR ID COLON exp TO exp WITH exp SHURU forexecute SHESH{
															 for_cnt++;
															 int beg = $4;
															 int end = $6;
															 int step = $8;
															 /*printf("%d %d %d\n",beg,end,step);*/
															 int i,j,k=1;
															 printf("Execute by for\n");
															 for(i=beg;i<end;i+=step)
															 {
															 printf("Iteration %d\n",k);
						
																for(j=0;j<for_work_cnt;j++)
																{
																	printf(" %d\n",for_work[j]);
																}
																k++;
						
		
															 }
															 printf("End of for\n");
															 for_work_cnt=0;
														}
	;
forexecute :
		   | forexecute forex
		   ;
forex : declaration
	  |	assignment
	  | SHOW LP exp RP END {
							 for_work[for_work_cnt] = $3;
							 for_work_cnt++;
						   }
	  ;
while : WHILE ID TO exp COLON SHURU whileexecute SHESH {
													 while_cnt++;
													 int beg = 0;
													 int end = $4;
													 int step = 1;
													 int i,j,k=1;
													 printf("Execute by while\n");
													 for(i=beg;i<end;i++)
													 {
														printf("Iteration %d\n",k);
				
														for(j=0;j<while_work_cnt;j++)
														{
															printf(" %d\n",while_work[j]);
														}
														k++;
													}
													 printf("End of while\n");
													 while_work_cnt=0;
												}
	  ;
whileexecute :
		   | whileexecute whileex
		   ;
whileex : declaration
	  |	assignment
	  | SHOW LP exp RP END {
							 while_work[while_work_cnt] = $3;
							 while_work_cnt++;
						   }
	  ;
switch : SWITCH ex SHURU switch_case SHESH {
												switch_done=0;
										}
		;
ex : exp {
			switch_cs=$1;
			switch_done=0;
		 }
	;
switch_case :
			| switch_case CASE exp THEN statement {
												if($3==switch_cs)
												{
													printf("Switch executed by block %d\n",$3);
													switch_done = 1;
												}
											}
			| switch_case DEFAULT THEN statement {
													if(switch_done == 0)
													{
														printf("Switch executed by default block\n");
														switch_done=1;
													}
											   }
			;
definition:
		  | DEF ID exp { 
							add_id_val($2,$3); 
							printf("Definition of %s\n",$2);
						}
		;
function:
		| function func
		;
func : FUNC rt ID LP fp RP COLON SHURU statement SHESH {
															printf("Function Declared\n");
													   }
	 ;
rt : VOID
   | INT
   | FLOAT
   | CHAR
   ;
fp :
   | type ID fpm
   ;
fpm : 
	| fpm SP type ID
	;
struct:
		| STRUCT ID COLON SHURU ss SHESH {
											printf("Structure is declared\n");
										 }
		;
ss : 
   | ss declaration
   | ss FUNC rt ID LP fp RP COLON SHURU statement SHESH
   ;
%%

int yyerror(char *s)
{
	printf( "%s\n", s);
}
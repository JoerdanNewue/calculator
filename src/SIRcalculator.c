/*
 ============================================================================
 Name        : SIRcalculator.c
 Author      : Sir
 Version     : final
 Copyright   :
 Description : rabota:1) vvod A , B, poriadkovogo nomera deystvia; 2) zapros na povttor operaciy
 ============================================================================
 */

#include <stdio.h>                              //vkluchenie bibliotek
#include <stdlib.h>                             //vkluchenie bibliotek
int main(void) {                                //nachalo programmi
char viebor;                                    // ponadobitsia dlya povtornieh raschetov
        do{                                     //tcikl DO WHILE
int i,z;                                        // i -schetchik dlya stepeni i fact
float a,b,c;                                    // peremenniee i yacheyka otveta
    printf ("Nachalo rabotei programmei. calc mozhet: scladivat', vichitat', umnozhat' , delit' ,   vozvodit' v stepen',  brat' factorial\n");
    printf ("a=");                                              // chtenie i zapic'
     scanf ("%f", &a);                                            //peremennieh
    printf ("b=");                                                  //  v stroki;
     scanf ("%f", &b);                                                //schitivanie a, b, z.
    printf ("z=");                                                      //smotri etot block
     scanf (" %d", &z);
         switch (z) {              // block zapici deystviy nizhe perebranie vse vozmozhniee dly moego calculyztora
             case 0:                    //0 means "+"
                  c=a+b;
                  break;
             case 1:                    //0 means "-"
                  c=a-b;
                  break;
             case 2:                    //0 means "*"
                  c=a*b;
                  break;
             case 3:                    //0 means "/"
                 if (b==0) puts("b=0 nedopustimaya operatcia"); else c=a/b;
                  break;
             case 4:                    //0 means "^"
                  c=1;
                 for (i=0; i < b; i++){        //stepen'
                  c=a*c;}
                  break;
             case 5:                    //0 means "!"
                  c=a;
                 for (i=0; i < a; i++){        //fact
                 a=a-1;c=c*a;}
                  break;
             default:
    printf ("Vvedite poriadkoviy nomer deystvia!\n");}        // esli ne vveden nomer znaka deystvia  a kakiye-to drugie simvolie
    printf ("Calculator poschital. otvet: %f", c);                                  // vidacha otveta
                                    fflush(stdin);            //reshenie vipolnit' programmu zanovo
                                    printf("\n Zhelaete vipolnit' raschetie snova? ('y'-esli hochesh' povtorit')\n");
                                    viebor=getchar();
                                }while(viebor=='y'||viebor=='Y');
if(viebor !='y'||viebor !='Y')
    scanf ("%c", &viebor);
printf("Programma zavershena\n");                           //konetc
}

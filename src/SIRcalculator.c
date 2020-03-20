/*
 ============================================================================
 Name        : calculator.c
 Author      : Sir
 Version     : final
 Copyright   :
 Description : rabota:1) vvod A i B, poriadkovogo nomera deystvia; 2) zapros na povttor operaciy
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int i,z,d;                  // i -schetchik dlya stepeni i fact
    float a,b,c;                // peremenniee i yacheyka otveta
       printf ("nachalo rabotei programmei \n");
       printf ("a=" /n);
           scanf ("%f", &a);            // chtenie i zapic' peremennieh  v sled strokah; schitivanie a, b, z.
       printf ("b=" /n);
              scanf ("%f", &b);
       printf ("z=" /n);
              scanf (" %d", &z);
              switch (z) {              // block zapici deystviy nizhe perebranie vse vozmozhniee dly moego calculyztora
              case 0:
                  c=a+b;
              break;
              case 1:
                  c=a-b;
              break;
              case 2:
                  c=a*b;
              break;
              case 3:
                      if (b==0) puts("b=0"); else c=a/b;
              break;
              case 4:
              for (i=a; i>0; i=i-1) c=a*a;                      // rabota s tcilamy (realizatciya stepeni i fact)
              break;
              case 5:
              for (i=b; i>0; i=i-1) c=a*i;
              break;
              default:
                  printf ("vvedite poriadkoviy nomer deystvia!" /n);                // esli ne vveden nomer znaka deystvia
              }


printf ("calculator poschital. otvet: %f", c);                                  // vidacha otveta
printf ("zhelaete povtorit' operatciyu(dopuscaetsy tolko dlya +, -, *, /)");

}

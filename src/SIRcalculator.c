/*
 ============================================================================
 Name        : calculator.c
 Author      :
 Version     :
 Copyright   :
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int i,z;
    float a,b,c;
       printf ("nachalo rabotei programmei \n");
       printf ("a=");
           scanf ("%f", &a);
       printf ("b=");
              scanf ("%f", &b);
       printf ("z=");
              scanf (" %d", &z);
              switch (z) {
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
              for (i=a; i>0; i=i-1) c=a*a;
              break;
              case 5:
              for (i=b; i>0; i=i-1) c=a*a;
              break;
              default:
                  puts ("vvedite znak deystvia!");
              }
printf ("calculator poschital. otvet: %f", c);

}

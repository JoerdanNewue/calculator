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
    float a,b,c,d,X;                                                        // 0-plus 1-minus 2-umnozhit' 3-delit' 4-fact 5-stepen'  X znachit deystvie
    printf("vvedite a: ");
    scanf("%f", &a);
    printf("vvedite b: ");
    scanf("%f", &a);
    printf("vvedite simvol nuzhnogo deystvia");
    scanf("%c", &X);
    if (X==0) {c=a+b;}
        else if (X==1)
            {c=a-b;}
        else if (X==2)
                {c=a*b;}
        else if (X==3)
                {c=a*b;}
        else if (X==4)
                 {for (float i=a,j=b;     i>=0,j>=0;   i=i-1, j=j-1)                                       // factor  chisel
                {c=a*i, d=b*j}}
        else (X==5)
                {for (float i=0;i<=b;i++) {c=a*a;}}
    return 0;

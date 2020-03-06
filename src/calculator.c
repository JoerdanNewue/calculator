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
    float a,b,c,d,X;                           // 0-plus 1-minus 2-umnozhit' 3-delit' 4-fact 5-stepen'  X znachit deystvie
    printf("vvedite a: ");
    scanf("%f", &a);
    printf("vvedite b: ");
    scanf("%f", &a);
    printf("vvedite simvol nuzhnogo deystvia");
    scanf("%f", &X);
    if (X==0) {c=a+b;}
        else if (X==1)
            {c=a-b;}
        else if (X==2)                                                //RIADOVIE OPERACII BEZ OBYASNENIA
                {c=a*b;}
        else if (X==3)
                {c=a*b;}
        else if (X==4)
                 {for (float i=a;     i>=0;   i=i-1)           // factor  chisel
                {c=a*i;}}
        else if (X==5)
                {for (float i=0;i<=b;i++) {c=a*a;}}
    printf("calculator podumal i vievel takoy otvet =%f\n",c);
}



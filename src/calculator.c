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
    int a,b,c;
    char z;
        printf ("%d\nVvedite a: ", a);
        printf ("%d\nVvedite b: ", b);
        printf ("%c\nVvedite znak deystvia ", z);
    printf("a=%d", a);
    printf("z=%c", z);
    printf("b=%d", b);
     scanf ("%d", &a);
     scanf ("%d", &b);
     scanf ("%c", &z);
    if (z == "+") {
        c = a+b;}
    else if (z == "-") {
        c = a-b;}
    else if (z == "*") {
        c = a*b;}
    else if (z == "/") {
        c = a/b;}
    printf ("%d", c);
}

#include <stdio.h>
int a(int i) {return i;}
int b(int i, int j) {return i-j;}

void main(){
    int (*p)(int);
    int (*pf)(int, int);
    p=a;
    printf("%d", p(5));
    pf=b;
    printf("%d", pf(5, 4));
}
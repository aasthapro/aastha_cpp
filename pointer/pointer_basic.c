/* A program to learn pointer basics */
#include<stdio.h>
int main(){
    int a;
    int* p = &a;
    printf("start\n");
    printf("a = %d\n", a);
    printf("address of a = %p\n", &a);
    printf("p = %p\n", p);
    printf("address of p = %p\n", &p);
    printf("value stored @ p = %d\n", *p);

    a = 10;
    printf("\nafter a=10\n");
    printf("a = %d\n", a);
    printf("address of a = %p\n", &a);
    printf("value stored @ p = %d\n", *p);

    a = a*10;
    printf("\nafter a=a*10\n");
    printf("a = %d\n", a);
    printf("address of a = %p\n", &a);
    printf("value stored @ p = %d\n", *p);

    *p = 99;
    printf("\nafter *p = 99\n");
    printf("a = %d\n", a);
    printf("address of a = %p\n", &a);
    printf("value stored @ p = %d\n", *p);


    return 0;
 }
// #include<stdio.h>
// int main(){
//     float a;
//     printf("enter the radius a: ");
//     scanf("%f", &a);
//     // printf("The area of the circle is : %f",3.14*a*a);
//     return 0;
// }

// #include<stdio.h>
// int main(){
// float a,b;
// a=3.0;
// b=5.6;
// printf("the sum is : %d", a+b);
// return 0;
// } 

/* A program to print the sum of first n natural numbers*/
#include<stdio.h>
int main(){
    int a;
    int sum=0;
    int i=1;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(i<=a){
        sum=sum+i;
        i++;
    }
    return 0;

}
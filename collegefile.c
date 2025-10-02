// #include<stdio.h>
// int main(){
//     int i;
//     int array[11] = (1,2,3,4,5,6,7,8,9,10);
//     for(i==0;i<=10;i++);
//     scanf("%d\n",i);
//     printf("the numbers are: %d\n", i);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the number a: ");
//     scanf("%d", &a);
//     for(int i=1; i<=a; i++){
//         printf("%d \n", i);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the number a: ");
//     scanf("%d", &a);
//     int i=1;
//     do{printf("%d \n", i);
//         i++;
//     }
//     while(i<=a);
//    return 0;
// }

/* A program to print the sum of first n natural numbers*/
// #include<stdio.h>
// int main(){
//     int a;
//     int sum=0;
//     int i=0;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     while(i<=a){(printf("%d\n", sum));
//         i++;
//         sum = sum + i;
//     }
//     return 0;

// }

/* A program to print the table of a given no.*/
#include<stdio.h>
int main(){
    int a;
    printf("enter the no. ");
    scanf("%d", &a);

    printf("print numbers from 1 to a\n");

    for(int i=1;i<=10;i++){
        printf("The table of %d is : %d\n", a, a*i);
    }

    return 0;
}
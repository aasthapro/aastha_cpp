
// /*A program to write the no. from 1 to n which are divisible by 3*/
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the no. ");
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         if(i%3==0){
//             printf("%d is divisible by 3\n",i);
//         }else{
//             printf("%d is not divisible by 3\n",i);
//         }
//     }
//         return 0;
// }

//write a program to print numbers divisible by 3 and 5.
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the no. ");
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         if(i%3==0 && i%5==0){
//             printf("%d is divisible by 3 and 5\n",i);
//         } 
        // else{
        //     printf("%d is not divisible by 3 and 5\n",i);
        //    }
        
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a;
//     int i=1;
//     printf("enter the no. ");
//     scanf("%d",&a);
//     while(i<=a){
//         if(i%3==0 && i%5==0){
//         printf("%d is divisible by 3 and 5\n",i);
//         }
//         else{
//             printf("%d is not divisible by 3 and 5\n",i);

//         }
//         i++;
// }
//     return 0;
// }

/* A program to print the factorial of the no. n*/
#include<stdio.h>
int main(){
    int a;
    printf("enter the no. ");
    scanf("%d", &a);
    printf("%d\n",a);
    int factorial=1;     
    for(int i=1;i<=a;i++){
         printf("%d\n",i);
        factorial= factorial*i;
      }
    printf("The factorial of the given no. is %d\n",factorial);
    
    return 0;
 }
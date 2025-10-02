// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the no.a: ");
//     scanf("%d",&a);
//     if(a%2 == 0){
//         printf("the no. %d is divisible by 2 ", a);
//     }
//     return 0;
// }

/* keep taking numbers as input from user until user enters an odd number.*/

//  #include<stdio.h>
//  int main(){
//      int a;
//      while(1){
//          printf("Enter the no. ");
//          scanf("%d",&a);
//          if(a%2 != 0){
//              continue;
//      }
//  }
//      printf("End of the program");
//      return 0;
// }

/*keep taking numbers as input from the user until user enters a number which is multiple of 7*/
// #include<stdio.h>
// int main(){
//     int a;
//     do{
//         printf("Enter the no. ");
//         scanf("%d",&a);
//     }
//     while(a%7 != 0);
//     printf("End of the program");
//     return 0;
//     }

#include <stdio.h>
int main()
{
    // Read a number and print it
    int a;
    printf("enter the no. ");
    scanf("%d", &a);

    // printf("printing all numbers from 1 to %d\n", a);

    // for (int i = 1; i <= a; i++)
    // {
    //     printf("%d\n", i);
    // }

    printf("printing all numbers from 1 to %d except 3\n", a);

    for (int i = 1; i <= a; i++)
    {
        // printf("loop iteration # %d\n", i);

        // printf("before continue \n");
        if (i == 3)
        {
            continue;
        }
        printf("%d ", i);
        // printf("after continue \n");
    }

    printf("\nprinting all numbers from 1 to %d except 3 using slightly different logic\n", a);
    for (int i = 1; i <= a; i++)
    {
        if (i != 3)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

// logic to print the numbers from 1 to a, if number is not 3

// while(a<=5){
//     printf("the no. is %d\n",a);
//     a++;
//     if(a==3){
//         continue;
//     }
//     return 0;
// }

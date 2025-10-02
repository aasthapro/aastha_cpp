/* A program to learn pointer basics */
#include <stdio.h>
int main()
{
    int array[5];

    printf("array=    %p\n", array);

    printf("\n");
    printf("array + 0=%p\n", array + 0);
    printf("&array[0]=%p\n", &array[0]);

    printf("\n");
    printf("array + 1=%p\n", array + 1);
    printf("&array[1]=%p\n", &array[1]);

    printf("\n");
    printf("array + 2=%p\n", array + 2);
    printf("&array[2]=%p\n", &array[2]);

    return 0;
}
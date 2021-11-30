#include <stdio.h>

int main()

{

    int a, b;

    printf("Enter two numbers\n");

    scanf("%d %d", &a, &b);

    
    (a > b) ? printf("%d is greater than %d",a,b) : printf("%d is less than %d",a,b);

}

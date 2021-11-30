// Copy of a string.

#include <stdio.h>

int main()

{
    char s[100], c[100];
    int i;

    printf("Enter the string\n");
    gets(s);

    // To copy the contents of the given string to another string.

  
    
    for(i = 0;s[i] != '\0';i++)
    {
        c[i] = s[i];
      
    }

    c[i] = '\0'; // The value of i, here, will be equal to the length of the string

    printf("The string entered is: ");
    puts(s);

    printf("The copied string is: ");
    puts(c);
}

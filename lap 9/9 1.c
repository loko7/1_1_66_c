#include <stdio.h>
int main()
{
   char name[30], ch;
   int i = 0;
        printf("Enter name: ");
        while(ch != '\n'){
           ch = getchar();
           name[i] = ch;
           i++;
        }
        name[i] = '\0';
        printf("Hello, %s", name);
        return 0;
}

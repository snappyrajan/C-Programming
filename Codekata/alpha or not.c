#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(isalpha(ch))
        printf("Alphabet");
    
    else
        printf("NOT");

    return 0;
}

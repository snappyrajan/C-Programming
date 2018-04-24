#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    ch=toupper(ch);
    if(isalpha(ch))
    {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            printf("Vowel");
        else
            printf("Consonant");
    }
    else
    {
        printf("INVALID! Enter the character");
    }
    return 0;
}
    

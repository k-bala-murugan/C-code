#include<stdio.h>
int main()
{
        char ch;
        printf("Enter the char\n");
        scanf("%c",&ch);
        if((ch>='A')&&(ch<='Z'))
        printf("Upper case Alphabet\n");
        else if((ch>='a')&&(ch<='z'))
        printf("Lower case Alphabet\n");
        else if((ch>='0')&&(ch<='9'))
        printf("Digit\n");
        else
        printf("Special character\n");
}

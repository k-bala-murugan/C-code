#include<stdio.h>
int main()
{
    int i=2,num;
    scanf("%d",&num);
    
    while(i<=num)
    {
        if(num%i==0)
        break;
        i++;
        
    }
    
    
        
    
    if(num==i)
    printf("prime");
    else
    printf("not prime");
}

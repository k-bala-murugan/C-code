#include <stdio.h>

int main()
{
    int i,n,num,prev=2;
    printf("Enter the range:");
    scanf("%d",&n);
   
    for(num=3;num<=n;num++)
    {
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            break;
        }
    
    }
    if(num==i)
    {
        if(prev+2==num)
        {
         printf("(%d,%d) ",prev,num);
        }
         prev=num;
    }
   
    }
   printf("\n"); 
}

    


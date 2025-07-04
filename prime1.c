#include <stdio.h>//range upto 100

int main()
{
    int i,num;
   
    for(num=1;num<=100;num++)
    {
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            break;
        }
    
    }if(num==i)
    printf("%d is prime number.\n",num);
    }
    
}


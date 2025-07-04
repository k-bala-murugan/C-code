#include<stdio.h>
int main()
{
    float f=22.7;
     int i,*p=( int*)&f;
    
       
    for(i=31;i>=0;i--)
    {
        printf("%d",(*p>>i)&1);  
    }
   
   
    
}
/*#include<stdio.h>     //using short int
int main()
{
    float f=22.7;
    short int j,i,*p=(short int*)&f;
    p=p+1;
    for(j=0;j<=1;j++)
    {
    for(i=15;i>=0;i--)
    {
        printf("%d",(*p>>i)&1);  
    }
    p=p-1;
    }   */ 
 /*
 #include<stdio.h>    //using char
int main()
{
    float f=22.7;
    char  j,i,*p=(char *)&f;
    p=p+3;
    for(j=0;j<=3;j++)
    {
    for(i=7;i>=0;i--)
    {
        printf("%d",(*p>>i)&1);  
    }
    p--;
    }
    
}
*/

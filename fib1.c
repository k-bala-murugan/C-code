#include <stdio.h>

int main() {
    int n1=0,n2=1,fib,val;
    printf("Enter the value = ");

    
    scanf("%d",&val);
   
    while(n1<val)
    {
      printf("%d ",n1);   
     fib=n1+n2;
    n1=n2;
    n2=fib;
}
 
  return 0;
}

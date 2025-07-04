#include <stdio.h>

int main() {
    int pow=1,n1,n2;
    printf("Enter the values:");
    scanf("%d%d",&n1,&n2);// Write C code here
    while(n2!=0)
    {
    
    pow=pow*n1;
    n2--;
    
   
}
  printf("%d",pow);
  return 0;
}

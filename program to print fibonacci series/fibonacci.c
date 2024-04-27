#include<stdio.h>

int main () {
int a=0,b=1,n;
printf("Enter value of n :");
scanf("%d",&n);
printf("%d",a);
printf("%d",b);
int sum;
for(int i=3;i<=n;i++){
     sum =a+b;
     printf("%d",sum);
    a=b;
    b=sum;
    
}





    return 0;
}
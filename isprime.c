#include <stdio.h> 

int main(){
    int n,i,count=0;
    printf("enter your numbr");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        count=1;
    }
    if((n==2||count==0))
    printf("its a prime number");
    else
    printf("not prime");
    return 0;
}
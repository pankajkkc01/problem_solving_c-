#include <stdio.h> 
int fact(int);

int main(){
    int n;
    printf("entr the numbre");
    scanf("%d",&n);
    printf("%d",fact(n));
    
    return 0;
}
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return (n*fact(n-1));
}
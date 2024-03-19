#include<iostream>
using namespace std;
int main()
{
    int target;
    cout<<"enter the number"<<endl;
    cin>>target;
    int a[10]  = {2,7,11,15};
    for(int i=0; i<=4;i++)
    {  
        for(int j=i+1;j<=4;j++)
        {
            if(a[i]+a[j]==target)
        cout<<i<<endl<<j;
        }
       

    }
     
}
#include <iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"enter the number of rows";
    cin>>n;
    i=1;
    while(i<=n)
    {

    
    //space printing
    int space =n-i;
    while(space)
    {
        cout<<" ";
        space--;

    }
    j=1;
    while(j<=i)
    {
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
    }

}
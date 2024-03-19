#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    int i=2;
    while(i<=n){
          int p=2;
          while(p<=i){
            if(i%p==0){
            break;
            }
            if(p==i){
            cout<<i;
            break;
            }

            p++;
          }
          cout<<endl;
          i++;
    }
}
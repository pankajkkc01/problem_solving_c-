#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[10],name1[10];
    cout<<"enter the name of the students\n";
    cin>>name>>name1;
    strcat(name,name1);
    cout<<strlen(name) <<endl;
    cout<<"you enter the name of the student  "<<name;
    return 0;
}
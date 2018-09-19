#include<iostream>
using namespace std;
class test                //class creation
{
public:
int s;
void sum(int a,int b)      //method creation
{
s=a+b;
cout<<"sum of two numbers is:"<<s;
}
};
int main()
{
int a,b;
cout<<"enter two numbers";
cin>>a>>b;
test in;                   //creation of objects
in.sum(a,b);               //function call using object
}

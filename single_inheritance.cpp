#include<iostream>
using namespace std;
class test
{
public:
int a,b;
void sum()
{
cout<<"sum="<<a+b;
}
};
class derive:public test
{
public:
void feed()
{
a=5;
b=9;
}
};
main()
{
derive in;
in.feed();
in.sum();
}

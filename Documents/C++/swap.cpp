#include <iostream>
using namespace std;
void swap (int*,int*);
int main()
{
    int a=23;
    int b=10;
    swap(&a,&b);
    cout<<a<<endl<<b<<endl;
}
void swap(int*p,int*q)
{
    int temp = *p;
    *p=*q;
    *q=temp;
}
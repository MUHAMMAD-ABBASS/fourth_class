#include <iostream>
using namespace std;

void update(int*a,int*b)
{
    int temp=*a;
    *a=*a+*b;
    *b=abs(temp-*b);
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    update(&a,&b);
cout<<a<<endl<<b<<endl;
    return 0;
}
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
    double a=0,b=0,c=0;
    int n;
    cin>>n; 
    signed int g[n];
    for(int i=0;i<n;i++)
    {
        cin>>g[i];
    }
    for (int j=0;j<n;j++){
    if(g[j]>0)
    {
        a++;
    }
    else if(g[j]<0)
    {
        b++;
    }
    else
    {
     c++;   
    }
    }
   double d=a/n;
   double e=b/n;
   double f=c/n;
    cout<<fixed<<setprecision(6)<<d<<endl<<e<<endl<<f<<endl;

}
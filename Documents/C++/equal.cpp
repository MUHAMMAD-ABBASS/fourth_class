#include<iostream>
using namespace std;
void change(int []);

void change2(const int arr[]);
int main()
{
   int arr[]={1,2,3,4,5};
    change(arr);
     cout<<arr[0]<<endl;
    return 0;
}
void change(int arr[])
{
  arr[0]=69;
}
void change2(const int arr[])
{
    //arr[0]=23;

}
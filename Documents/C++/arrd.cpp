#include<iostream>
using namespace std;
int doubl(int[] );
int main()
{
    int arr[]={1,2,3,4,5};
    doubl(arr);
for (int i = 0; i <5; i++)
{
    cout<<arr[i]<<endl;
}

}
int doubl(int *arr)
{
  for (int i=0;i<5;i++)
  {
      arr[i]=arr[i]*2;

  }
  return 0;
}
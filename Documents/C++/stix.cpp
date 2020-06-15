#include <iostream>
using namespace std;
 int main()
 {
     int arr[5]={10,64,32,14,3};
     for (int i=0;i<4;i++)
     {
         for(int j=0;j<4-i;j++)
         {
             if(arr[j+1]<arr[j])
             {
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
             }
         }
     }
     for(int k=0;k<5;k++)
     {
         cout<<arr[k]<<endl;
     }
     return 0;
 }
#include <iostream>
using namespace std;
int main(){
    int arr[5]={45,23,1,4,7};
    for (int i=0;i<5;i++)
    {
        int min = arr[i];
        for (int j=i-1;j<4;j++)
        {
           
            if (arr[j]>arr[j+1])
            {
              int temp=arr[j+1];
              arr[j+1]=arr[j];
              arr[j]=temp;
            }

        }
    }
    for(int k=0;k<5;k++){
        cout<<arr[k]<<endl;
    }
    
} 
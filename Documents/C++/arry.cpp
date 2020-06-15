#include<iostream>
#include<iomanip>
using namespace std;
main()
{
int arr[5]={9,5,4,1,2};
int temp,j;
for(int i=1; i<5; i++){
temp=arr[i];
j=i;
while(j>0 && arr[j-1]>temp){
//if(arr[j]<arr[j-1]){
    arr[j]=arr[j-1];
   // arr[i+1]=temp;
    j--;
}
arr[j]=temp;
}
for(int k=0; k<5; k++){
    cout<<arr[k]<<endl;
}

}
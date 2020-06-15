 #include<iostream>
using namespace std;

int* result(int a[],int b)
{
    int *p = new int[2] {3, 4};
    return p;
    
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int target=9;
    int *r = result(arr, target);
    cout<<*r;
    cout << *(r+1);

}
// int main()
// {
//     int arr[3]={1,2,3};
//     int *ptr=arr;
//     for(int i=0;i<3;i++)
//     {
//     cout<<*ptr<<endl;
//      ptr++;
//     }
// }
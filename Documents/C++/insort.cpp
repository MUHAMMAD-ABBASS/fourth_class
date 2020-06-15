#include<iostream>
using namespace std;
int main()
 {
    int arr[]={4,3,23,10,2};
    int j;
    for(int i=1;i<5;i++)
    {
        int temp=arr[i];
     //if(temp< arr[i])
    // {
      for(j=i-1;j>=0;j--)
        {
            if (temp > arr[j] )
            {
                break;
            }
            
          arr[j+1] = arr[j];
         
             
          }
          arr[j+1] = temp;
       // }
    }    
     
     for (int k=0;k<5;k++){
         cout<<arr[k]<<endl;
     }
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     /*int arr[]={4,3,23,10,2};
//     for(int i=0;i<5;i++)
//     {
//         int temp=arr[i];
//         int j=i-1;
  
//         while(temp>arr[j] && j>=0)
//         {
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=temp;

//     }



//     for(int k=0;k<5;k++)
//     {
//         cout<<arr[k]<<endl;
//     }*/
//     int A[6]={5,4,10,1,6,2};
//     int temp,temp1;
//     for(int i=0;i<5; i++){
//         if(A[i]>A[i+1]){
//             temp=A[i+1];
//             A[i+1]=A[i];
//             A[i]=temp;
//         }
//         for(int j=i+1; j>=0; j--){
//             if(A[j]>A[j-1]){
//                 break;}
//             else{
//                 temp1=A[j-1];
//                 A[j-1]=A[j];
//                 A[j]=temp1;

//             }
//             }
//         }
    
// for(int a=0; a<6; a++)
//     cout<<A[a]<<"  ";
// }
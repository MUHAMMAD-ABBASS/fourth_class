// #include<iostream>
// using namespace std;
// void swap(int *a ,int *b){
//     int temp=*a;
//         *a=*b;
//         *b=temp;
// }
//  int partition(int A[],int l,int h)
//  {
//      int i=l ,j=h;
//      int pivot=A[l];
//      do{
//         do{i++;}while(A[i]<=pivot);
//         do{j--;}while(A[j]>pivot);
//         if(i<j)swap(&A[i],&A[j]);

//      }while(i<j);
//      if(i<j)swap(&A[l],&A[j]);
//      return j;
//  }

// void  Quick_sort(int A[],int l ,int h)
// {
//     int j;
//   if(l<h)
//   {
//       j=partition(A,l,h);
//       Quick_sort(A,l,j);
//       Quick_sort(A,j+1,h);
//   }
// }

// int main()
// {
//     int A[]={3,6,7,33,99,78,32,67,244,9,INT32_MAX};
//     Quick_sort(A,0,10);
//     for (int i=0;i<11;i++)
//     {
//         cout<<A[i]<<endl;
//     }
// }
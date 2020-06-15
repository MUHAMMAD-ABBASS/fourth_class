#include<iostream>
#include<string>
using namespace std;

struct students
{
 string
name,
age,
roll_no,
addrs,
contact,
mail;

};
int doubl(students *arr);
int main()
{
    students arr[5];
    for (int i=0;i<5;i++)
    {
        cin>>arr[i].age;
    }
    doubl(arr);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i].age<<endl;
    }
    

}
int doubl(students *arr)
{
  for (int i=0;i<5;i++)
  {
      arr[i].age=to_string(stoi(arr[i].age)*2);

  }
  return 0;



}
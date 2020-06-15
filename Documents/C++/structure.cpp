#include <iostream>
using namespace std;
struct student{
    string name;
    string age;
    string rollno;
};
void display(student* temp);
void access(student* perm);
int main()
{
    student std_01;
    // student std_02;
    cin>>std_01.name;
    cin>>std_01.age;
    cin>>std_01.rollno;
    // cin>>std_02.name;
    // cin>>std_02.age;
    // cin>>std_02.rollno;
    system("clear");
    display(&std_01);
    access(&std_01);
    cout << "-------------------------------------"<<endl;
    display(&std_01);
    // display(&std_02);
 return 0;
}
void display(student* temp)
{
  cout<<temp->name<<endl;
  cout<<temp->age<<endl;
  cout<<temp->rollno<<endl;
}
void access(student* perm)
{
    perm->name="sharukh";
}
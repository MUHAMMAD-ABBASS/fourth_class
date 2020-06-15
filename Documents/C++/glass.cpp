#include <iostream>
using namespace std;
class small_obj{
    int some_data;
   public :
    int get_data(int a){ 
        some_data=a;
    }
    void show_data(){
        cout<<"data is "<<some_data<<endl;
    }
};
int main()
{
  small_obj s1,s2;
  s1.get_data(123);
  s2.get_data(345);
  s1.show_data();
  s2.show_data();

   
}
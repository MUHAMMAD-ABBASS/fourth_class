#include<iostream>
using namespace std;
class account{
    
    long int balance;
    public:
    long int setter(long int a){
        if (a<0)
        {
        cout<<"invalid"<<endl;
        }
        else{
            balance=a;
            cout<<balance<<endl;
        }
    }

};
int main()
{
    account tanveer;
   tanveer.setter(100000000);
    

    return 0;
}
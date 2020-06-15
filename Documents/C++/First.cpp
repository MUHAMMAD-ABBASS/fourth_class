#include <iostream>

using namespace std;
void Increment(int *x)
{
    *x = *x + 1;
    cout << "address: " << x << endl;
}

int main()
{
    int x = 69;
    Increment(&x);
    cout << "address: " << &x << endl;
    return 0;
}
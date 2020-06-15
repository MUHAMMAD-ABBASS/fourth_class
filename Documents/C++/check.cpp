#include <iostream>
using namespace std;
struct Vector
{
    int x;
    int y;
};

void abc(Vector* p, Vector* q)
{
    Vector temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    Vector v1 = {50, 100};
    Vector v2= {25, 200};
    abc(&v1, &v2);
    cout << v1.x << "\t" << v1.y << endl;
    cout << v2.x << "\t" << v2.y << endl;
    return 0;
}
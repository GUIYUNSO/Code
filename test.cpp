#include <iostream>
using namespace std;
class C
{
public:
    int n;
    C(int n = 0);
    friend C operator+(C n, C m);
};
C::C(int n)
{
    this->n = n;
}
C operator+(C n, C m)
{
    C temp;
    temp.n = n.n + m.n;
    return temp;
}
int main()
{
    C c1(1);
    C c2(2);
    C c3 = c1 + c2;
    cout << c1.n << endl;
    cout << c2.n << endl;
    cout << c3.n << endl;
}
#include<iostream>
using namespace std;
void Judge_root(int a,int b,int c);
int main()
{
    int data[100][3];
    int a,b,c,num;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        cin >> data[i][0] >> data[i][1] >> data[i][2];
        a=data[i][0];
        b=data[i][1];
        c=data[i][2];
        Judge_root(a,b,c);
    }
}

void Judge_root(int a,int b,int c)
{
    if (a==0&&b==0)
    {
    cout<<"False\n";
    return;
    }
    
    if (b*b-4*a*c>=0)
    cout<<"True\n";
    else
    cout<<"False\n";
}
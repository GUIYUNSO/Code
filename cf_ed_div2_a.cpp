#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        int n;
        cin>>n;
        if (n==1)
        {
            cout<<"1"<<endl;
        }
        if (n==2)
        {
            cout<<"9"<<endl;
        }
        if (n==3)
        {
            cout<<"29"<<endl;
        }
        if (n==4)
        {
            cout<<"56"<<endl;
        }
        if (n>=5)
        {
            int a=n*n-n-1;
            int b=a-n;
            int c=n*n-1;
            int sum=a+a+a+b+c;
            cout<<sum<<endl;
        }
        
    }
    
}
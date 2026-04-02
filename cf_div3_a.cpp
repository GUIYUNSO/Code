#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        int n;
        int count=0;
        cin>>n;
        for (int i = 0; i <= n/2; i++)
        {
            for (int j = 0; j <= n/4; j++)
            {
                if (n==i*2+j*4)
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}
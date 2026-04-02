#include <iostream>
using namespace std;

void sort(int a[],int b[],int c[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
            if(b[i]>b[i+1])
            {
                int temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
            }
            if(c[i]>c[i+1])
            {
                int temp=c[i];
                c[i]=c[i+1];
                c[i+1]=temp;
            }
        }
        
    }
}

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int check1=0,check2=0;
            int num[m];
            int confirm1[m];
            int confirm2[m];
            for (int i = 0; i < m; i++)
            {
                cin>> num[i];
                if (num[i]%2==0)
                {
                    confirm1[i]=1;
                    confirm2[i]=0;
                }
                else
                {
                    confirm1[i]=0;
                    confirm2[i]=1;
                }
            }
            sort(num,confirm1,confirm2,m);
            for (int i = 0; i < m-1; i++)
            {
                if (confirm1[i]==confirm1[i+1])
                {
                    check1=1;
                    break;
                }
                if (confirm2[i]==confirm2[i+1])
                {
                    check2=1;
                    break;
                }
            }
            if (check1==1 && check2==1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
            
        }
    }
}
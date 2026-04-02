#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        int n;
        cin>>n;
        int count1=0,count2=0;
        vector<int> Ajisai;
        vector<int> Mai;
        Ajisai.push_back(0);
        Mai.push_back(0);
        for (int i = 1; i <= n; i++)
        {
            int temp;
            cin>>temp;
            Ajisai.push_back(temp);
        }
        for (int i = 1; i <= n; i++)
        {
            int temp;
            cin>>temp;
            Mai.push_back(temp);
        }
        for (int i = 1; i <= n; i++)
        {
            if (i%2==0)
            {
                if ((Ajisai[i]==1&&Mai[i]==0)||(Ajisai[i]==0&&Mai[i]==1))
                {
                    count2++;
                }
            }
            else
            {
                if ((Ajisai[i]==1&&Mai[i]==0)||(Ajisai[i]==0&&Mai[i]==1))
                {
                    count1++;
                }
            }
        }
        if (count1<count2)
        {
            cout<<"Mai"<<endl;
        }
        else if (count1>count2)
        {
            cout<<"Ajisai"<<endl;
        }
        else
        {
            cout<<"Tie"<<endl;
        }
    }
}
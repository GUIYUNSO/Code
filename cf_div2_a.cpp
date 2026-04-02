#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        int count=0;
        int people,yellow,red;
        cin>>people>>yellow>>red;
        while (yellow>=2)
        {
            count++;
            yellow=yellow-2;
        }
        while (red>=1)
        {
            count++;
            red--;
        }
        if (count>=people)
        {
            cout<<people<<endl;
        }
        else
        {
            cout<<count<<endl;
        }
    }
    
}
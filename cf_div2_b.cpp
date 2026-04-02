#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        int count=0;
        int log,index;
        vector<int> data(log*2+1);

        cin>>log;
        data.push_back(0);

        for (int i = 1; i <= log*2; i++)
        {
            int temp;
            cin>>temp;
            data.push_back(temp);
        }

        vector<int> arr1(log);
        vector<int> arr2(log);
        arr1.push_back(0);
        arr2.push_back(0);

        for (int i = 1; i <= log*2; i++)
        {
            for (int j = 1; j <= arr1.size()+1; j++)
            {
                if (data[i]!=arr1[j])
                {
                    arr1.push_back(data[i]);
                    data.erase(data.begin()+i);
                    count++;
                }
            }
            for (int j = 1; j <= arr2.size()+1; j++)
            {
                if (data[i]!=arr2[j])
                {
                    arr2.push_back(data[i]);
                    data.erase(data.begin()+i);
                    count++;
                }
            }
        }
        int max=0;
        for (int i = 1; i <= log*2-arr1.size()-arr2.size()-2; i++)
        {
            vector<int> change;
            for (int j = 1; j <= log*2-arr1.size()-arr2.size()-2; j++)
            {
                while (arr1.size()!=log+1)
                {
                    arr1.push_back(data[j]);
                    data.erase(data.begin()+1);
                    count--;
                }
            }
            for (int j = 1; j <= log*2-arr1.size()-arr2.size()-2; j++)
            {
                if (log-arr2.size()>=2)
                {
                    change.push_back(data[i]);
                }
                while (arr2.size()!=log+1)
                {
                    arr2.push_back(data[j]);
                    data.erase(data.begin()+1);
                    count--;
                }
                if (change.size()>2)
                {
                    for (int i = 0; i < change.size(); i++)
                    {
                        
                    }
                    
                }
                
            }

        }

    }
}
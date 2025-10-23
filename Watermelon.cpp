#include<iostream>

int main()
{
    int num;
    std::cin>>num;
    if(num<=0||num==2)
    std::cout<<"NO";
    for(int i=1;i<=num;i+=1)
        {
            int instant1,instant2;
            instant1=num/2;
            instant2=instant1+1;
            if(instant1==0 && instant2==0)
            {
            std::cout<<"YES";
            return 0;
            }
            else
            {
            std::cout<<"NO";
            return 0;  
            }
        }
}
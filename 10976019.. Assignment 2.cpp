#include <iostream>

using namespace std;

int main()
{
    cout<<"Prime numbers from 1 to 1000 are :";
    int counter1=0;
    int counter2=0;
    for(int i=2;i<=1000;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                counter1++;
            }
        }
        if(counter1==1)
        {
            cout<<","<<i;
            counter2++;
        }
        counter1=0;


    }
    cout<<endl;
    cout<<"total number of prime numbers from 1 to 1000 is "<<counter2+1;


}

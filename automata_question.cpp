#include<iostream>
using namespace std;

int main()
{
    int timer=1;
    int n;
    cin>>n;
    int count=1;
    for( int i =0 ; i<n ; i++)
    {

        for(int j=0; j<timer;j++)
        {
            cout<<count;
            count++;
            if(j!=timer-1)
                cout<<"*";
        }
        timer++;
        cout<<"\n";
    }
    timer--;
    count--;
    for(int i=0;i<n;i++)
    {
        int temp=count-timer+1;
        for(int j=timer;j>0;j--)
        {
            cout<<temp;
            temp++;
            count--;
            if(j!=1)
                cout<<"*";
        }
        timer--;
        cout<<"\n";

    }

}

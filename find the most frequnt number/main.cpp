#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    const int maxi=250+500+1;
    int frequancy[maxi]={0};

    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        value+=500;
        frequancy[value]++;

    }
    int mx_pos=0;

    for(int i=0;i<maxi;i++)
    {
        if(frequancy[mx_pos]<frequancy[i])
        {
            mx_pos=i;
        }

    }
    cout << mx_pos - 500 << " has repeated " << frequancy[mx_pos] << " times ";


    system("pause");
    return 0;
}

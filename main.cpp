#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    int n=0,i,t[103];

    ifstream   in("bac.in");

    while(in >> t[n])
    {
        n++;
    }
    in.close();
    for(i=0; i<n-1; i++)
    {
        for(int j=1+i; j<n; j++)
        {
            if(t[i]>t[j])
            {
                int csere=t[i];
                t[i]=t[j];
                t[j]=csere;
            }
        }
    }
    int u[103],sz=0;
    for(i=0; i<n; i++)
    {
        if(t[i]!=t[i+1])
        {
            u[sz]=t[i];
            sz++;
        }
    }

    int r=u[1]-u[0];
    for( i = 1; i < sz; i++)
    {
        if (u[i] - u[i - 1] != r)
        {
            cout << "NU";
            return 0;
        }
    }

    cout<<r;
    return 0;
}

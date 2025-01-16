#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szo,result;
    cin>>szo;
    for(int i = 0; i < szo.size(); i++)
    {
            if(szo[i] == 'a' || szo[i] == 'e' || szo[i] == 'i' || szo[i] == 'o' || szo[i] == 'u')
            {
            szo[i] = szo[i].replace(0,"mpm");
            }

    }
    cout<<szo;
    return 0;
}

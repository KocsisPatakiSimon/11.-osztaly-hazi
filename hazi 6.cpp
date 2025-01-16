#include <iostream>
#include <string>
using namespace std;

int main()
{
    int j,i,k;
    string szo;
    cin>>szo;
    cin>>k;
    if(k<=5 && szo.size()>0){
        for(i=0;i<k;i++){
            char c= szo[szo.size() -1];
            for(j= szo.size() -1 ;j>0;j--){
                szo[j]=szo[j-1];
            }
            szo[0]=c;
        }
        cout<<szo;

    }
    return 0;
}

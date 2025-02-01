#include <iostream>

using namespace std;
void cuburi(int n)
{
    for(int b=n;b>0;b--){
            cout<<(b*b*b)<<" ";
        }
}
int main()
{
   int n;
   cin>>n;
   cuburi(n);
    return 0;
}

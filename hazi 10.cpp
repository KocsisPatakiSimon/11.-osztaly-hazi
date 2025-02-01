#include <iostream>

using namespace std;

int joc(int n){
    int k=0;
    for(int i=2;i<=n;i++){
        if(n%i == 0){
            k++;
        }
    }
  return k;
}

int main()
{
   int n;
   cin>>n;
   cout<<joc(n);
    return 0;
}

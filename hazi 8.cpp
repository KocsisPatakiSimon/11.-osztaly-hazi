#include <iostream>

using namespace std;

int primek(int n,int &x,int &y)
{
    bool primek[n];
     for(int i=0; i<=n;i++){
        primek[i]=true;
    }
    primek[0]=false;
    primek[1]=false;

    for( int i =2 ; i <=n;i++){
        if(primek[i]){
            for(int kihuz= i+i;kihuz<=n;kihuz+=i){
                primek[kihuz]= false;

            }
        }
    }

     for(int i=n;i>1;i--){
        if(primek[i]){
            if(y==0){
                y=i;
            }

        }
     }

     for(int i=y-1;i>1;i--){
        if(primek[i]){
            if(x==0){
                x=i;
            }
        }
     }


     return x,y;

}

int main()
{
    int x=0,y=0,n;
    cin>>n;
    primek(n,x,y);
    cout<<x<<endl;
    cout<<y;
    return 0;
}

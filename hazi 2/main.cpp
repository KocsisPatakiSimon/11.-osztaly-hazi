#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,x ,f[100], szamjegy;

    ifstream input("input.txt");
    input >> n;
    input.close();

    x=0;

     while (n > 0) {
        int szamjegy = n % 10;
        if (szamjegy > x) {
            x = szamjegy;
        }
        n /= 10;
     }

      f[1]=1;
    f[2]=1;
    for(int i=3;i<=x;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }

    ofstream output("fib.out");
    output << f[x];

    output.close();

    return 0;
}

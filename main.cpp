#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int n, tomb[100], maxim=-999, atlag=0, oszto=0;

    ifstream input("input.txt");

        input >> n;

        for(int i = 0 ; i<n;i++)
        {
            input>> tomb[i];
        }

    input.close();

    for(int i = 0 ; i<n;i++)
    {
        atlag= atlag + tomb[i];

        if(maxim< tomb[i])
        {
            maxim=tomb[i];
        }

    }
    atlag = atlag/n;

    string elso = to_string(atlag);
    string masodik = to_string(maxim);

    string ujszam_str = elso+ masodik;

    int ujszam = stoi(ujszam_str);

    for(int i=1; i< ujszam/2 +1 ; i++)
    {
        if(ujszam%i == 0 && i>oszto)
        {
            oszto=i;
        }
    }

    ofstream output("oszto.out");
    output << oszto;

    output.close();



    return 0;
}

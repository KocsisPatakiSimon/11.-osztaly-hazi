#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i,j,N, matrix[50][50],kelet=0,nyugat=0;
    ifstream input("input.txt");
    input >> N;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            input >> matrix[i][j];
        }
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if( i>j && i+j < N-1)
            {
                kelet= kelet+matrix[i][j];
            }
            if( i<j && i+j > N-1)
            {
                nyugat= nyugat+matrix[i][j];
            }
        }
    }
    while( kelet != nyugat){
        if(kelet > nyugat){
            kelet= kelet-nyugat;
        }
        if(kelet < nyugat){
            nyugat= nyugat-kelet;
        }
    }

    ofstream out("lnko.out");
     out << kelet;

    out.close();
    return 0;
}

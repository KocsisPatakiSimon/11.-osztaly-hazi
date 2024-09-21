#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int matrix[100][100],N ,i,j, alatt=0,folott=0,lkkt,lnko;
    ifstream input("input.txt");
    input >> N;
    for(i=0 ; i<N;i++)
    {
        for(j=0 ; j<N;j++){
            input >> matrix[i][j];
        }
    }
    input.close();

    for(i=0 ; i<N;i++)
        {
            for(j = 0 ; j<N; j++)
            {
             if( i < j){
                alatt= alatt + matrix[i][j];
             }
             if(i > j){
                folott= folott + matrix[i][j];
             }
            }
        }
    lkkt=alatt*folott;
while(alatt != folott)
    {   if (alatt>folott)
        alatt=alatt-folott;
        else
        folott=folott-alatt;
    }
lkkt = lkkt/alatt;

 ofstream out("lkkt.out");
    out << lkkt;

out.close();


    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    char l[7]={'A','B','C','D','E','F','G'};
    short fil,fil2,col;
    for (fil=0;fil<=12;fil=fil+1){
        for(col=0;col<=12;col=col+1){
            fil2=fil;
            if (fil>6){
                fil2=12-fil;
            }
            if(col<=fil2){
                cout << l[col];
            }
            else if((12-col)<=fil2){
                cout << l[12-col];
            }
            else{
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}

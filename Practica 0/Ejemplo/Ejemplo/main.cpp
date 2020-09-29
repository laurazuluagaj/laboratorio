#include <iostream>

using namespace std;

int main()
{
    char l[7]={'A','B','C','D','E','F','G'};
    short fil,col;
    for (fil=0;fil<=6;fil=fil+1){
        for(col=0;col<=12;col=col+1){
            if(col<=fil){
                cout << l[col];
            }
            else if((12-col)<=fil){
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

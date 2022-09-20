#include <iostream>

using namespace std;

/* Programa que diz qual quadrante se encontra as coordendas. Q2|Q1 
                                                              Q3|Q4 */

int main(){
    float x,y;

    cin >> x >> y;

    if (x == 0 && y == 0){
        cout << "Origem" << endl;
    }
    if (x == 0 && y != 0)
    {
        cout << "Eixo Y" << endl;
    }
    if (x != 0 && y == 0)
    {
        cout << "Eixo X" << endl;
    }
    if (x > 0 && y > 0)
    {
        cout << "Q1" << endl;
    }
    if (x > 0 && y < 0 )
    {
        cout << "Q4" << endl;
    }
    if (x<0 && y>0)
    {
        cout << "Q2" << endl;
    }
    if (x<0 && y<0)
    {
        cout << "Q3" << endl;
    }
    
}
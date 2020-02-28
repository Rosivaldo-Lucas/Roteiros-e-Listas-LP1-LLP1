#include <iostream>
#include "data.h"

using namespace std;

int main(void){
    Data d1 = Data(1, 2, 2016);
    Data compara = Data(2, 2, 2020);
    cout << d1.compara(compara) << endl;
    cout << d1.isBissexto(d1) << endl;
    return 0;
}
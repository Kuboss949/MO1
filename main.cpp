#include <iostream>
#include <math.h>

using namespace std;

int main() {

    float epsylonFloat=1.0f;        //2^0
    double epsylonDouble=1.0;
    int mantysaFloat=0, mantysaDouble=0;

    while(epsylonFloat/2.0f+1.0f>1.0f){
        epsylonFloat /= 2.0f;
        mantysaFloat++;
    }
    while(epsylonDouble/2.0+1.0>1.0){
        epsylonDouble /= 2.0;
        mantysaDouble++;
    }

    cout << "Float epsylon: " << epsylonFloat << endl;
    cout << "Float epsylon z biblioteki: " << FLT_EPSILON << endl;
    cout << "Float - liczba bitow mantysy: " << mantysaFloat << endl << endl;
    cout << "Double epsylon: " << epsylonDouble << endl;
    cout << "Double epsylon z biblioteki: " << DBL_EPSILON << endl;
    cout << "Double - liczba bitow mantysy: " << mantysaDouble << endl << endl;

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
// * THIS WILL PRINT FIRST 10 EVEN OR ODD NUMBERS
int main(){
    int p;
    int i=0;
    cout << "1 for odd 2 for even";
    cin >> p;
    switch (p)
    {
    case 1:
    i = i+1;
    do
    {
       
        cout << i << endl;
        i = i+2;
    } while (i < 20);
        break;
    case 2:
    i=i+2;
    do
    {
        cout << i << endl;
        i = i+2;
    } while (i < 20);
    }
}
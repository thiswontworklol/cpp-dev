// prints first ten odd or even numbers
#include <iostream>
using namespace std;
int main(){
    int i;
    cout << "1 for odd or 2 for even";
    cin >> i;
    switch (i)
    {
    case 1:
        for (int p=1; p < 20; p+=2)
    {
        cout << p << endl;
    }
        break;
    case 2:
        for (int p=2; p < 20; p+=2)
    {
        cout << p << endl;
    }
    } 
}
#include <iostream>
#include <string>

using namespace std;
int main() {

    int num = 10;

    if (num > 0) {
        cout <<"Number is positive" << endl;
    } else if (num < 0) {
        cout <<"Number is negative" << endl;
    } else {
        cout << "Number is zero" << endl;
    }

    for (int i = 0; i < 5; ++i) {
        cout << "i is "<<i<<endl;
    }
    int i = 0;

    return 0;
}
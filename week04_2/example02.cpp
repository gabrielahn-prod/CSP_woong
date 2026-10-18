#include <iostream>

using namespace std;

int main(void) {
    char txt[30];
    char (&ref)[30] = txt;
    // ref is a reference to txt //
    cin >> txt;
    cout << "ref: " << ref << ", len: " << sizeof(ref) << endl;
    return 0;
}
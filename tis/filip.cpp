#include <iostream>
#include <string>
#include <algorithm>


using namespace std;
   
int main() {
    string a, b;
    cin >> a >> b;


    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    if(a < b) {
        cout << b << endl;
    }else {
        cout << a << endl;
    }
    return  0;
}
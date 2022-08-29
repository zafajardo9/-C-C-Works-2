#include <iostream>
using namespace std;
   
int main() {
    int n[2];
    int sum;
    for (int i = 0; i < 2; i++){
        cin >> n[i];
        sum += n[i];
    }
    cout << sum;

    return  0;
}
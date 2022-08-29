#include <iostream>
using namespace std;
   
int main() {
    int n;
    int sum;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    for (int i = 0; i < n; i++){
        sum += array[i];
    }

    cout << sum;
    return  0;
}
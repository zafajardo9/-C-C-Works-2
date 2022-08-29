#include <iostream>
#include <cmath>


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

        sum += pow(array[i],i+1);
    }

    cout << sum;
    return  0;

}
#include <iostream>
using namespace std;
   
int main() {
    int n;
    cin >> n;
    int first = n/10;
    int second = n%10;

    int swap = (second*10)+first;
    cout << swap;


    return  0;
}
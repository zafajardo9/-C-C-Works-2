#include <iostream>
using namespace std;
   
int main() {

    //alice = odd
    //Bob = even
    int input;
    cin >> input;

    if(input%2 == 0) 
        cout << "Bob";
    else
        cout << "Alice";

    return  0;
}
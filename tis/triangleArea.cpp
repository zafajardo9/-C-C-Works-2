#include <iostream>
using namespace std;
   
int main() {
    int number = 2;
    float area;
    unsigned int array[number];

    for (int i = 0; i < number; i++)
    {
        cin >> array[i];

    }

    area = array[0] * array[1];
    area /= 2;


    cout << area;

    return  0;
}
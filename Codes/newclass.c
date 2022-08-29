#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int random() {
    int num;
    num = rand()%100;
    return num;
}

int main() {
    int choice = 0;
    int loop = 1;

    while(loop) {
        printf("Press 1. Addition\nPress 2. Subtraction\nPress 3. Multiplication\nPress 4. Division\nPress 5. Quit");

        switch(choice) {

            case 1  :
                Addition(correct);
                break;

            case 2  :
                Subtraction(a, b);
                break;



            case 5  :
                break;
        }

        printf("\nWould you like new Problem? Yes = 1, No = 0");
        scanf("%d", loop);
        if(loop == 1) {
            loop = 1;
        }else {
            loop = 0;
        }

    }
}

int Addition(int correct) {
    int a = random();
    int b = random();
    int c;
    printf("%i + %i = ", a,b);
    scanf("%d", &c);

    if(c == a + b) {
        printf("\n CORRECT\n");
        correct += 1; //increment
    }
    else{
        printf("\n%d\n", c);
        printf("\nWRONG\n");
    }
}
int Subtract(int correct) {
    int a = random();
    int b = random();
    int c;
    printf("%i - %i = ", a,b);
    scanf("%d", &c);

    if(c == a - b) {
        printf("\n CORRECT\n");
        correct += 1; //increment
    }
    else{
        printf("\n%d\n", c);
        printf("\nWRONG\n");
    }
}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
//MENU
void menu();


int random() {
    int num;
    num = (rand()%(1000 - 100 + 1)) + 50;
    return num;
}
//Global Variable increment counter
int counter, correct;

int main() {
    //data
    int userInput, a, b, c;
    double x, y, z;
    int counter = 0, correct = 0;
    do{     
        menu();

        scanf("%d", &userInput);

        
        switch(userInput) {

            case 1  :
                a = random();
                b = random();
                printf("%i + %i = ", a,b);
                scanf("%d", &c);
                    
                if(c == a + b) {
                    printf("\n CORRECT\n");
                    ++correct; //increment
                }
                else{
                    printf("\n%d\n", c);
                    printf("\nWRONG\n");
                }
                break;

            case 2  :
                a = random();
                c = random();
                printf("%i - %i = ", a,b);
                scanf("%d", &c);

                if(c == a - b) {
                    printf("\n CORRECT!\n");
                    correct += 1;
                }
                else
                    printf("\nWRONG\n");
                break;

            case 3  :
                a = random();
                b = random();

                printf("%i x %i = ", a,b);
                scanf("%d", &c);

                if(c == a * b) {
                    printf("\n CORRECT!\n");
                }
                else
                    printf("\nWRONG\n");
                break;

            case 4  :
                x = rand()%100;
                y = rand()%100;
                z;

                printf("%lf / %lf = ", x,y);
                scanf("%lf", &z);

                if(z == x / y) {
                    printf("\n CORRECT!\n");
                }
                else
                    printf("\nWRONG\n");
                break;
            case 5  :
                break;
        }
        counter++;

        printf("\tCorrect Answers: %d \n\t#%d Question",correct, counter);
    }while((userInput > 0) && (userInput < 5));

    
    return 0;
}


void menu() {
    puts("\n=================================");
    puts("\tPress 1. Addition\n\tPress 2. Subtraction\n\tPress 3. Multiplication\n\tPress 4. Division\n\tPress 5. Quit");
    puts("Enter your Choice: \n");
}

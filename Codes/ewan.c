#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
int loop(int i, int n) {
        for(i=1; i<=n; i++)
        {
            if(i%4 == 0)
            {
                printf("%d\n", i);
            } 
        }   
}

int main()
{
    int i, n, repeat = 1;
    char input[1];
    char correct[] = "y";

    while(repeat != 0) {
        printf("Enter a number: \n");
        scanf("%d", &n);

        loop(i, n);


        printf("do you want to try again?: \n");
        scanf("%s", &input);

        if(strcmp(correct,input) != 0) {
            repeat = 0;
        } else {
            repeat = 1;
        }
            
    }



    return 0;
}


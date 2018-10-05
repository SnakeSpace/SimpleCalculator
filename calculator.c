# include <stdio.h>
#include<conio.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

int main() {
    // Initialized Variables
    char operator;
    double firstNumber,secondNumber;
    // Banner
    printf("\n                      --------------------");
    printf("\n                      - Basic Calculator -");
    printf("\n                      --------------------\n");

    // Color only supports in UNIX Terminals.
   /*printf("\n KYEL                     --------------------");
    *printf("\n KBLU                     - Basic Calculator -");
    *printf("\n KYEL                     --------------------\n KNRM");
    */

    // Set Operator
    printf("\n           >> Enter an operator (+, -, *,): ");
    scanf("%c", &operator);

    // Ask User To Input First Operand.
    printf("\n           >> Enter First Number: ");
    // Assign Entered Value To Variable First Number.
    scanf("%lf",&firstNumber);
    // Ask User To Input Second Operand.
    printf("\n           >> Enter Second Number: ");
    // Assign Entered Value To Variable Second Number.
    scanf("%lf",&secondNumber);

    // Evaluation
    switch(operator)
    {
        case '+':
            printf("\n           >> %.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
            break;

        case '-':
            printf("\n           >> %.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
            break;

        case '*':
            printf("\n           >> %.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
            break;

        case '/':
            printf("\n           >> %.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("\n           >> Error! operator is not correct");
    }
    printf("\n\n\n\n                         -- FINISHED --\n");
	// Waiting for user to exit

   /* getchar() >> not working
    * system("pause"); >> working
    */
    getch();
   /*
    * getch function prompts a user to press a character and that character isn't printed on screen,
    * getch header file is conio.h
    * This function is not a part of standard C library.
    */
    return 0;
}

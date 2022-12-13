#include <stdio.h>
#include <stdlib.h>

/*
Xavier Vaughn
@02928026
*/

/* IMPLEMENT ME: Declare your functions here */
typedef int (*func)(int a, int b);
int Add (int a, int b);
int Multiply (int a, int b);
int Subtract (int a, int b);
int Divide (int a, int b);


int main (void){
    int a = 10;
    int b = 2;
    int finalAnswer;
    func opFunctions[4];
    //char operation[9];
    int chosenOperation;
	/* IMPLEMENT ME: Insert your algorithm here */
    opFunctions[0] = &Add;
    opFunctions[1] = &Multiply;
    opFunctions[2] = &Subtract;
    opFunctions[3] = &Divide;

    while(1){
        printf("Please input a number from 0 to 3.\n This number will specify which operation will be preformed \n 0 = add \n 1 = multiply \n 2 = subtract \n 3 = divide \n");
        scanf("%d",&chosenOperation);
        finalAnswer = (opFunctions[chosenOperation](a,b));

        printf("%d \n" ,finalAnswer);

    }
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int Add (int a, int b) {
     printf ("Adding %d and %d \n", a, b); return a + b; 
}
int Multiply (int a, int b) {
     printf ("Multiplying %d and %d \n", a, b); return a * b; 
}
int Subtract (int a, int b) {
     printf ("Subtracting %d and %d \n", a, b); return a - b; 
}
int Divide (int a, int b) {
     printf ("Dividing %d and %d \n", a, b); return a / b; 
}


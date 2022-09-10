#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//declaration all functions
double addition(void);
double subtraction(void);
double multiplication(void);
double division(void);
int factorial(void);
int power_of_number(void);
double square_root(void);

int main(int argc, char *argv[]) {
	char s[10]; // variable for check what type has op
	int op; // main variable
	
	// only main loop
	do {
		// interface
		printf("\t\tCalculator\n");
		printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Factorial\n6. Power of number\n7. Square root\n8. EXIT\n");
		printf("\n");
		printf("Type what you wanna do: ");
		scanf("%d", &op);

		// checking type of op
		gets(s);
		if (sscanf(s ,"%d", &op) == 0) {
			system("cls");
		}

		// using swtitch for call a function
		switch (op) {
			case 1:
				system("cls"); // clear cmd
				addition(); // calling addition function
				break; // break the function 
			case 2:
				system("cls"); // clear cmd
				subtraction(); // calling subtraction function
				break; // break the function  
			case 3:
				system("cls"); // clear cmd
				multiplication(); // calling multiplication function
				break; // break the function  
			case 4:
				system("cls"); // clear cmd
				division(); // calling division function
				break; // break the function  
			case 5:
				system("cls"); // clear cmd
				factorial(); // calling factorial calculating function
				break; // break the function  
			case 6:
				system("cls"); // clear cmd
				power_of_number(); // calling power of number function
				break; // break the function  
			case 7:
				system("cls"); // clear cmd
				square_root(); // calling sqrt calculating function
				break; // break the function  
			case 8:
				break; // exit the calculator
			default:
				system("cls"); // clear cmd
				break; // typed somthing wrong
		}
		printf("\n --------------------------------- \n");
		
	} while (op != 8);

	system("pause");

	return 0;
}

// FUNCTIONS

// addition function
double addition(void) {
	double op1, op2, res;

	printf("Type the first operand: ");
	scanf("%lf", &op1);
	printf("Type the second operand: ");
	scanf("%lf", &op2);

	res = op1 + op2;

	printf("%.2lf + %.2lf = %.2lf", op1, op2, res);
}

// subtraction function
double subtraction(void) {
	double op1, op2, res;

	printf("Type the first operand: ");
	scanf("%lf", &op1);
	printf("Type the second operand: ");
	scanf("%lf", &op2);

	res = op1 - op2;

	printf("%.2lf - %.2lf = %.2lf", op1, op2, res);
}

// multiplication function
double multiplication(void) {
	double op1, op2, res;

	printf("Type the first operand: ");
	scanf("%lf", &op1);
	printf("Type the second operand: ");
	scanf("%lf", &op2);

	res = op1 * op2;

	printf("%.2lf * %.2lf = %.2lf", op1, op2, res);
}

// division function
double division(void) {
	double op1, op2, res;

	printf("Type the first operand: ");
	scanf("%lf", &op1);
	printf("Type the second operand: ");
	scanf("%lf", &op2);

	if (op2 == 0) {
		do {
			printf("Zero division is impossible. Please type another operand: ");
			scanf("%lf", &op2);
		} while (op2 == 0);
	}

	res = op1 / op2;

	printf("%.2lf / %.2lf = %.2lf", op1, op2, res);
}

// factorial function
int factorial(void) {
	int factorial, num;

	printf("Type number: ");
	scanf("%d", &num);

	factorial = 1;
	for (int i = 1; i <= num; i++) {
		factorial *= i;
	}

	printf("%d! = %d", num, factorial);
}

// power of number function
int power_of_number(void) {
	int num, power, res;

	printf("Type number: ");
	scanf("%d", &num);
	printf("Type power: ");
	scanf("%d", &power);

	res = 1;
	for (int i = 1; i <= power; i++) {
		res *= num;
	}

	printf("%d^%d = %d", num, power, res);
}

// sqrt function
double square_root(void) {
	double num;

	printf("Type number: ");
	scanf("%lf", &num);

	printf("sqrt of %.2lf = %.2lf", num, sqrt(num));
}

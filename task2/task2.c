#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int terminate();

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int (*operations[5]) (int foo, int bar);
	operations[0] = add;
	operations[1] = subtract;
	operations[2] = multiply;
	operations[3] = divide;
  operations[4] = terminate;
  
  int a, b, input;
  a = 6;
  b = 3;
  
  while (1) {
    printf("Operand ‘a’ : %d | Operand ‘b’ : %d\n", a, b);
    printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
    scanf("%d", &input);
    while (input > 4) {
      printf("Operand ‘a’ : %d | Operand ‘b’ : %d\n", a, b);
      printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");
      scanf("%d", &input);
    } 
    
    int result = (*operations[input])(a, b);
		printf("x = %d\n", result);
  } 
  
  
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) {printf("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) {printf("Subtracting 'b' from 'a'\n"); return a - b;}
int multiply (int a, int b) {printf("Multiplying 'a' and 'b'\n"); return a * b;}
int divide (int a, int b) {printf("Dividing 'a' by 'b'\n"); return a / b;}
int terminate() {exit(0);}

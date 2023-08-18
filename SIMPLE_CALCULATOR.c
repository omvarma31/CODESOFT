#include <stdio.h>

int main() {
  // Declare variables.
  int number1, number2;
  char operator;

  // Get the two numbers and the operator.
  printf("Enter the first number: ");
  scanf("%d", &number1);
  printf("Enter the second number: ");
  scanf("%d", &number2);
  printf("Enter the operator (+, -, *, /): ");
  scanf(" %c", &operator);

  // Switch statement to perform the operation.
  switch (operator) {
    case '+':
      printf("%d + %d = %d\n", number1, number2, number1 + number2);
      break;
    case '-':
      printf("%d - %d = %d\n", number1, number2, number1 - number2);
      break;
    case '*':
      printf("%d * %d = %d\n", number1, number2, number1 * number2);
      break;
    case '/':
      printf("%d / %d = %d\n", number1, number2, number1 / number2);
      break;
    default:
      printf("Invalid operator.\n");
      break;
  }

  return 0;
}
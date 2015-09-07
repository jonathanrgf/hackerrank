#include <stdio.h>
int main() {
  int numberOfLines;
  int firstNum;
  int secondNum;
  int sum;

  scanf("%d", &numberOfLines);

  while (numberOfLines > 0) {
    // Type below...
    scanf("%d", &firstNum);
    scanf("%d", &secondNum);

    sum = firstNum + secondNum;

    printf("%d\n", sum);

    numberOfLines = numberOfLines - 1;
  }

  return 0;
}


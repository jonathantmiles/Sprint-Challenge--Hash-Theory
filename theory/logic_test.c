#include <stdio.h>
#include <stdlib.h>

int calculate_logic_puzzles(int A, int B, int C) {

  if (!(A && B) || ( (A && C) && !(B || !C) ) ) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  for (int A = 0; A <= 1; A ++) {
    for (int B = 0; B <= 1; B ++) {
      for (int C = 0; C <= 1; C ++) {
        printf("A: %d, B: %d, C: %d\n", A, B, C);
        printf("returned value: %d\n", calculate_logic_puzzles(A, B, C));
      }
    }
  }


  return 0;
}

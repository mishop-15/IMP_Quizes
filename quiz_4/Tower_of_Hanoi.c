#include <stdio.h>

void tower_of_hanoi(int n, char beg, char aux, char end) {
  if (n == 1) {
    printf("Move disk 1 from %c to %c\n", beg, end);
    return;
  }

  tower_of_hanoi(n - 1, beg, end, aux);
  printf("Move disk %d from %c to %c\n", n, beg, end);
  tower_of_hanoi(n - 1, aux, beg, end);
}

int main() {
  int num_disks;

  printf("Enter the number of disks: ");
  scanf("%d", &num_disks);

  tower_of_hanoi(num_disks, 'A', 'B', 'C');  

  return 0;
}

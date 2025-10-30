#include <stdio.h>
#include <stdlib.h>

/* define */
 #define D_MAX 9

int main() {
  
  /* for文用の変数 */
  int i;
  int j;

  printf("  |  1  2  3  4  5  6  7  8  9\n");
  printf("--+---------------------------\n");

  for(i = 1; i <= D_MAX; i++) {
     printf("%d |",i);
    for (j = 1; j <= D_MAX; j++) 
    {
      printf("%3d",i * j);
    }
    printf("\n");
  }
}
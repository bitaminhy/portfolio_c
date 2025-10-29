#include <stdio.h>
#include <stdlib.h>

/* define */
 #define D_MAX 9

int main() {
  
  /* for文用の変数 */
  int i;
  int j;

  for(i = 1; i <= D_MAX; i++) {
    for (j = 1; j <= D_MAX; j++) 
    {
      printf("%3d",i * j);
    }
    printf("\n");
  }
}
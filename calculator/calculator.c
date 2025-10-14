#include "opration.h"

int main()
{

  char op;

  double num1;
  double num2;
  double result;

  printf("四則演算ができる簡易な計算機です。\n");

  while (1)
  {
    /* 入力を要求 */
    printf("行いたい計算の記号(+,-,*,/)を入力してください。(終了:q)\n");

    /* 記号入力 */
    scanf("%s", &op);

    /* 入力された記号ごとの処理 */
    if(op == '+') {
      printf("足し算を行います\n");
      printf("計算式を入力してください。\n");
      scanf("%lf %c %lf", &num1, &op, &num2);
      result = sum(num1, num2);
      printf("計算結果：%g\n", result);
      printf("\n");
      continue;
    } else if(op == '-') {
      printf("引き算を行います\n");
      printf("計算式を入力してください。\n");
      scanf("%lf %c %lf", &num1, &op, &num2);
      result = sub(num1, num2);
      printf("計算結果：%g\n", result);
      printf("\n");
      continue;
    } else if(op == '*') {
      printf("掛け算を行います\n");
      printf("計算式を入力してください。\n");
      scanf("%lf %c %lf", &num1, &op, &num2);
      result = mul(num1, num2);
      printf("計算結果：%g\n", result);
      printf("\n");
      continue;
    }else if(op == '/') {
      printf("割り算算を行います\n");
      printf("計算式を入力してください。\n");
      scanf("%lf %c %lf", &num1, &op, &num2);
      result = divi(num1, num2);
      printf("計算結果：%g\n", result);
      printf("\n");
      continue;
    }
    else if(op == 'q') {
      printf("プログラムを終了します。\n");
      break;
    } else {
      printf("入力が正しくありません。\n");
      continue;
    }
      /* 終了 */
      return 0;
  }
}

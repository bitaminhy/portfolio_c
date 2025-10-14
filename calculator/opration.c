#include "opration.h"


/* 足し算 */
double sum (double a,double b) {
    return a + b;
}
/* 引き算 */
double sub (double a,double b) {
  return a - b;
}

/* 掛け算 */
double mul (double a,double b) {
  /* かける数が０の場合は０を返す */
  if(b == 0) {
    return 0;
  } else {
    /* Nothing to do */
  }
  return a * b;
}
/* 割り算 */
double divi (double a,double b) {
  /* 割る数が０の場合０を返す */
  if(b == 0) {
    return 0;
  } else {
    /* Nothing to do */
  }
  return a / b;
}
#include <stdio.h>
#include <stdlib.h>//exitを使うため。
#include <math.h>//sqrtを使うため。

double myRoot(double x) //
{
  double y;//小数点を表示させるようにした。
  if( !(x >= 0) ){//正常に機能させるために()をつけた
    exit(1);
  }
  y = sqrt(x);
  return y;
}

int main(void)
{
  int i=0;//iの値を初期化した。
  double *x = (double *)malloc(sizeof(double) * 100);

  while( i <= 100 ){
    x[i] = myRoot((double)i);
    i++;
  }

  //以下は確認用(このままで良い)
  printf("x[0]=%f\n", x[0]);
  printf("x[1]=%f\n", x[1]);
  printf("x[2]=%f\n", x[2]);
  printf("x[3]=%f\n", x[3]);
  printf("x[4]=%f\n", x[4]);
  printf("x[99]=%f\n", x[99]);
  printf("x[100]=%f\n", x[100]);

  free(x);
  return 0;
}

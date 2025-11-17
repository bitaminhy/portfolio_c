#include <stdio.h>

#define DMAX_LEN 256 /* ファイル名の入力数を示すdefine */


int main() {
  FILE *fin;
  FILE *fout;

  char file_in[DMAX_LEN];
  char file_out[DMAX_LEN];

  int value = 0;
  int count = 0;
  double sum = 0.0;


  printf("入力するファイル名を入力してください\n");
  scanf("%255s",file_in);

  fin = fopen(file_in,"r");
  if(fin == NULL) {
    printf("入力ファイル%sが開けません\n",file_in);
    return -1;
  }

  printf("出力するファイル名を入力してください\n");
  scanf("%255s",file_out);

  fout = fopen(file_out,"w");
  if(fout == NULL) {
    printf("出力ファイル%sが見つかりません\n",file_out);
    return -1;
  }

  while(fscanf(fin, "%d",&value) == 1) {
    sum += value;
    count++;
  }

  if(count > 0) {
    double avg = sum / count;
        fprintf(fout, "データ件数: %d\n", count);
        fprintf(fout, "合計: %.2f\n", sum);
        fprintf(fout, "平均: %.2f\n", avg);

        printf("\n✅ 計算が完了しました！\n");
        printf("→ 出力ファイル '%s' に結果を保存しました。\n", file_out);
    } else {
        printf("⚠️ 有効なデータがありませんでした。\n");
  }

/* ファイルを閉じる */
  fclose(fin);
  fclose(fout);

  /* 終了 */
  return 0;
}
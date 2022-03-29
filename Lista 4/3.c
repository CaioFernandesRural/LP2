# include <stdio.h>

int main () {

  int n, face;
  int dado [6];

  for (int c=1; c<=6;c++) {
    dado [c]=0;
  }

  printf ("Quantos lancamentos? ");
  scanf ("%d", &n);

  for (int c=1; c<=n;c++) {
    printf ("Face do %d lancamento: ",c);
    scanf ("%d", &face);
    dado [face]++;
  }

  for (int c=1; c<=n;c++) {
    if (dado [c]!=0) {
      printf ("A face %d caiu %d vez(es). \n", c, dado [c]);
    }
  }
}
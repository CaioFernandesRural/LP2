# include <stdio.h>
# include <stdlib.h>

main () {

  int n, face;
  int dado [6];

  for (int i = 1; i <= 6; i++) {
    dado [i] = 0;
  }

  printf ("Quantas vezes ? ");
  scanf ("%d", &n);

  for (int i = 1; i <= n; i++) {
    printf ("Face do %d lancamento: ", i);
    scanf ("%d", &face);
    dado [face]++;
  }

  for (int i = 1; i <= n; i++) {
    if (dado [i] != 0) {
      printf ("A face %d do dado caiu %d vezes. \n", i, dado [i]);
    }
  }

  return 0;

}
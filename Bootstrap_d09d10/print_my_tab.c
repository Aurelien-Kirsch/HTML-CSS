#include <stdio.h>

void print_my_tab(int **tab)
{
  for (int i = 0; i < 4; i++)
    {
      printf("-----------------\n");
      printf("| %d | %d | %d | %d |\n", tab[i][0], tab[i][1], tab[i][2], tab[i][3]);
    }
  printf("-----------------\n");
}

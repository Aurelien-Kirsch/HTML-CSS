#include <stdio.h>
#include <stdlib.h>

int **my_malloc_tab(void);
int **my_tab(int **tab);
void print_my_tab(int **tab);
int main (void)
{
  int **tab = my_malloc_tab();
  tab = my_tab(tab);
  print_my_tab(tab);
  return (0);
}

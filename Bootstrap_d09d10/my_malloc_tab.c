#include <stdlib.h>

int **my_malloc_tab(void)
{
  int **tab = malloc(sizeof(int *)*4);

  for(size_t i = 0; i < 4; i++)
    {
      tab[i] = malloc(sizeof(int) *4);
    }
  return (tab);
}

#include<stdio.h>
#include<stdlib.h>

void draw_square(int size, int total_size) {
  int local_size = (total_size - size) / 2;
  if( size <= 1) {
    for(int i = 0; i < local_size; ++i)
      {
	putchar(' ');
      }
    putchar('x');
  }
  else {
    for(int i = 0; i < local_size; ++i)
      {
	putchar(' ');
      }
    for(int i = 0; i < size; ++i)
      {
	putchar('x');
      }
    putchar('\n');
    draw_square(size - 2, total_size);
    putchar('\n');
    for(int i = 0; i < local_size; ++i)
      {
	putchar(' ');
      }
    for(int i = 0; i < size; ++i)
      {
	putchar('x');
      }
  }
}
int prepare_draw(char *str)
{
  int size = atoi(str);
  printf("you ask for a reccursive draw of size %d.\n", size);
  if(size <= 0) {
    fprintf(stderr, "You should enter a bigger size.\n");
    return 1;
  }
  if(size % 2 == 0){
    fprintf(stderr, "You should put a number an odd number.\n");
    return 1;
  }
  draw_square(size, size);
  putchar('\n');
  return 0;
}
int main(int argc, char *argv[])
{
  if(argc != 2){
    fprintf(stderr, "Error: not enough args\n");
    return 1;
  }return prepare_draw(argv[1]);
}
    

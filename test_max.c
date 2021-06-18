#include <stdio.h>
#include <assert.h>


int max(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
int max(int f[],int count)
{
  for(int a=0;a<count;a++)
  {
    for(int b=0;b<count-1-a;b++)
    {
      if(f[b]>f[b+1])
      {int c=0;
         c=f[b+1];
        f[b+1]=f[b];
        f[b]=c;
      }
    }
  }
  int M=f[count-1];
  return M;
}

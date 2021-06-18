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
/*void int max(int x[],int count)
{
  for(int i;i<count;i++)
  {
    for(int j;j<count-1-j;j++)
    {
      if(x[j]>x[j+1])
      {
        int z=x[j+1];
        x[j+1]=x[j];
        x[j]=z;
      }
    }
  }
  return x[cout-1];}*/
int max(int f[],int count)
{
  for(int a;a<count;a++)
  {
    for(int b;b<count-1-a;b++)
    {
      if(f[b]>f[b+1])
      {
        int c=f[b+1];
        f[b+1]=f[b];
        f[b]=c;
      }
    }
  }
  int Max=f[count-1];
  return Max;
}

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

	  int max(int max[],int a){
  int i;
  for(i=1;i<a;i++){
  max[0]=max[0]>max[i]?(max[0]):(max[i]);
  }
  return max[0];}

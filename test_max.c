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
int max(int arr[],int n){
	int Max;
	for (int j=0;j<n;j++)
	{
	for(int i=0;i<n-1-j;i++){
		if(arr[i]>arr[i+1]){
			Max=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=Max;
		}
	}
	}
	return Max;
}

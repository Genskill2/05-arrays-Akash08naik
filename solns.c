/* Enter your solutions in this file */
#include <stdio.h>

int max(int arr[],int count)
{int m;
  for(int a;a<count;a++)
  {
    for(int b;b<count-1-a;b++)
    {
      if(arr[b]>arr[b+1])
      {
        m=arr[b+1];
        arr[b+1]=arr[b];
        arr[b]=m;
      }
    }
  }
 int c=arr[count-1];
 return c;
}

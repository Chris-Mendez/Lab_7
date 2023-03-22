#include <stdio.h>

void swap(int *a, int *b)//swaps values in the array
{
  int t;
  t = *a;
  *a=*b;
  *b=t;
  
}

void bubble_sort(int a[], int s)
{
  int i;
  for(i=0;i<s-1;i++)
    {
      printf("\nPass #%d:\n", i+1);
      int count = 0;
      for(int j=0;j<s-i-1;j++)
        {
          if(a[j]>a[j+1])
          {
            swap(&a[j], &a[j+1]);//swaps j with next element if it is smaller
            count += 1;
          }   
        }
      printf("%d\n", count);
    }
}
int main(void) {
  int a[] = {97,16,45,63,13,22,7,58,72};
  bubble_sort(a, 9);
  return 0;
}
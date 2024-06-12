#include <stdio.h>
#include "search.h"

int main()
{
  int arr[] = {2,4,6,1,7,8,4,9};

  printf("%i\n",linearSearch(arr, 8,7));

  int arr2[] = {2,2, 3,5, 7, 8, 11, 16 ,19,33, 44,53};
  int size = sizeof(arr2)/sizeof(int);

  printf("Binary Search: %i\n", binarySearch(arr2, size, 5));
}

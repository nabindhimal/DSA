#include <search.h>

// linear search


int linearSearch(int arr[],int size, int data)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == data) return i;
  }
  return -1;
}

int binarySearch(int arr[], int size, int data)
{
  int low = 0;
  int high = size - 1;

  while(low <= high)
  {
    int middle = low + (high -low)/2;
    int value = arr[middle];

    if (value < data)
    {
      low = middle + 1;
    }
    else if ( value > data)
    {
      high = middle -1;
    }
    else
    {
      return middle;
    }
  }

  return -1;
}


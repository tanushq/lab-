#include <stdio.h>
void main()
{
  int i, first, mid, last, n, search, arr[50];
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  printf("Enter value to find\n");
  scanf("%d", &search);}
  first = 0;
  last = n - 1;
  mid = (first+last)/2;
  while (first <= last) {
    if (arr[mid] < search)
      first = mid + 1;
    else if (arr[mid] == search) {
      printf("%d found at location %d.\n", search, mid+1);
      break;
    }
    else
      last = mid - 1;
    mid = (first + last)/2;
  }
  if (first > last)
    printf("Not present: %d isn't present in the list.\n", search);
}
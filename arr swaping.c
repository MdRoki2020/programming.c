#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr_siz1;
    int nums1[] = {2, 5, 7, 3, 1, 5, 9, 8, 2, 6};
    arr_siz1 = sizeof(nums1)/sizeof(nums1[0]);
    printf("Elements in original array1 are: ");
    print_array(nums1, arr_siz1);
    int result[arr_siz1];
    for (int i = 0; i < arr_siz1; i++) {
            result[i] = nums1[i];
             }
    int first = nums1[0];
    result[0] = nums1[arr_siz1 - 1];
    result[arr_siz1 - 1] = first;

    printf("New array, after swapping first and last elements: ");
    print_array(result, arr_siz1);
 }
  print_array(int parray[], int size)
    {
     int i;
     for( i=0; i<size-1; i++)
      {
        printf("%d ", parray[i]);
       }
    printf("%d ", parray[i]);
    printf("\n");
  }

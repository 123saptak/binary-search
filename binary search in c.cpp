// C program to do Binary Search 
#include <stdio.h> 
  
 
int binary_Search(int arr[], int l, int row, int element) 
{ 
    if (row >= l) { 
        int mid = l + (row - l) / 2; 
    
        if (arr[mid] == element) 
            return mid; 
  
        
        if (arr[mid] > element) 
            return binary_Search(arr, l, mid - 1, element); 
  
        
        return binary_Search(arr, mid + 1, row, element); 
    } 
  
     
    return -1; 
} 
  
int main(void) 
{ 
    int arr[] = {4,8,23,45,12}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int element = 10; 
    int find = binary_Search(arr, 0, n - 1, element); 
    (find == -1) ? printf("Element is not present in array") 
                   : printf("Element is present at index %d", 
                            find); 
    return 0; 
}

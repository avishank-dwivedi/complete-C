#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5; // Current size of the array
    
    // Print array before insertion
    printf("Array before insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Insertion
    int element = 10;
    int position = 2;
    
    // Shift elements to the right to make space
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert the new element
    arr[position] = element;
    
    // Increment size
    size++;
    
    // Print array after insertion
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}


/*
#include <stdio.h>
# define MAX_SIZE 100
int main(){
    int i , arr[MAX_SIZE];
    int n=5;
    for(i=0;i<n;i++){
    printf("array %d before insertion ",i);
        scanf("%d",& arr[i]);
    }
    printf("\n");
    int element =11;
    int poss = 2;

    for(i = n ; i>poss;i--){
    arr[i] = arr[i-1];
    }
    arr[poss]=element;
    n++;
    printf("Array after insertion: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;

}
*/
/*
#include <stdio.h>

int main() {
  int array[10];
  int size = 10;
  int new_element = 50;

  // Get the current size of the array
  printf("Enter the number of elements in the array: ");
  scanf("%d", &size);

  // Get the elements of the array
  for(i=0;i<size;i++){}
  printf("Enter %d elements: ", i);
    scanf("%d", &array[i]);
  }

  // Insert the new element at the beginning of the array
  for (int i = size-1; i > 0; i--) {
    array[i] = array[i - 1];
  }
  array[size] = new_element;
  size--;

  // Print the updated array
  printf("The updated array is: ");
  for (int i = 0; i < size + 1; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}

*/
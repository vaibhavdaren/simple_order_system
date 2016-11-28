#include<iostream>
#include<algorithm>

#include <stdio.h>
#include <stdlib.h>
using namespace std;
// A heap has current size and array of elements
struct MaxHeap
{
    int size;
   long long int* array;
};

// A utility function to swap to integers
void swap(long long int* a, long long int* b) { int t = *a; *a = *b;  *b = t; }

// The main function to heapify a Max Heap. The function
// assumes that everything under given root (element at
// index idx) is already heapified
void maxHeapify(struct MaxHeap* maxHeap, int idx)
{
    int largest = idx;  // Initialize largest as root
    int left = (idx << 1) + 1;  // left = 2*idx + 1
    int right = (idx + 1) << 1; // right = 2*idx + 2

    // See if left child of root exists and is greater than
    // root
    if (left < maxHeap->size &&
        maxHeap->array[left] > maxHeap->array[largest])
        largest = left;

    // See if right child of root exists and is greater than
    // the largest so far
    if (right < maxHeap->size &&
        maxHeap->array[right] > maxHeap->array[largest])
        largest = right;

    // Change root, if needed
    if (largest != idx)
    {
        swap(&maxHeap->array[largest], &maxHeap->array[idx]);
        maxHeapify(maxHeap, largest);
    }
}

// A utility function to create a max heap of given capacity
struct MaxHeap* createAndBuildHeap(long long int *array, int size)
{
    int i;
    struct MaxHeap* maxHeap =
              (struct MaxHeap*) malloc(sizeof(struct MaxHeap));
    maxHeap->size = size;   // initialize size of heap
    maxHeap->array = array; // Assign address of first element of array

    // Start from bottommost and rightmost internal mode and heapify all
    // internal modes in bottom up way
    for (i = (maxHeap->size - 2) / 2; i >= 0; --i)
        maxHeapify(maxHeap, i);
    return maxHeap;
}

// The main function to sort an array of given size
void heapSort(long long int* array, int size)
{
    // Build a heap from the input data.
    struct MaxHeap* maxHeap = createAndBuildHeap(array, size);

    // Repeat following steps while heap size is greater than 1.
    // The last element in max heap will be the minimum element
    while (maxHeap->size > 1)
    {
        // The largest item in Heap is stored at the root. Replace
        // it with the last item of the heap followed by reducing the
        // size of heap by 1.
        swap(&maxHeap->array[0], &maxHeap->array[maxHeap->size - 1]);
        --maxHeap->size;  // Reduce heap size

        // Finally, heapify the root of tree.
        maxHeapify(maxHeap, 0);
    }
}

// A utility function to print a given array of given size
void printArray(long long int* arr, int size)
{
    int i;
    for (i = size-1; i>=0;i--){
        printf("%d ", arr[i]);}
        cout<<endl;

}

int main()
{
long long int t,i,n;
long long int arr[10000];
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
heapSort(arr, n);
printArray(arr, n);

}
return 0;
}

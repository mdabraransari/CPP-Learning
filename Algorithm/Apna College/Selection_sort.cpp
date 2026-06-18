#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int smallest_indx = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[smallest_indx]){
                smallest_indx = j;
            }
        }
        swap(arr[i], arr[smallest_indx]);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    selection_sort(arr, n);
    printArray(arr,n);
    
   

    return 0;
}
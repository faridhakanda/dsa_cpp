// selection sort
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    int i, j, index, temp;
    for (i = 0; i < n; i++) {
        index = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }
        if (index != i) {
            temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
}
int main() {
    int arr[] = {2, 5, 1, 3, 10, 19, 3, 18};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
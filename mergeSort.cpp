#include <bits/stdc++.h>

using namespace std;

void mergeSort(int arr[] ){
    int n = sizeof(arr) / sizeof(arr[0]);
    if(n<2) return ;
    int mid = n/2;
    int left[mid];
    int right[n-mid];
    for(int i = 0 ; i<mid ; i++)
    {
        left[i] = arr[i];
    }
    for(int i = 0 ; i<n ; i++)
    {
        left[i] = arr[i];
    }

    mergeSort(left);
    mergeSort(right);
}

int main()
{
    int arr[] = {2, 7, 4, 2, 79, 36, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting sorting" << endl;
    for (int p : arr)
    {
        cout << p << " ";
    }
    cout << endl;
    mergeSort(arr);
    cout << "After Sorting sorting" << endl;
    for (int p : arr)
    {
        cout << p
             << " ";
    }
}
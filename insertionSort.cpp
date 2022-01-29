#include <bits/stdc++.h>

using namespace std;

void insertionSort(int arr[] ,int n){
    for(int i = 1; i<n ; i++)
    {   int value = i;
        for(int j=i-1 ; j>=0 ; j--)
        {
            if(arr[j]>arr[value])
            {
                swap(arr[value] , arr[j]);
            }
            value = j;
        }
    }
}

    int
    main()
{
    int arr[] = {2, 7, 4, 2, 79, 36, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting sorting" << endl;
    for (int p : arr)
    {
        cout << p << " ";
    }
    cout << endl;
    insertionSort(arr, n);
    cout << "After Sorting sorting" << endl;
    for (int p : arr)
    {
        cout << p << " ";
    }
}

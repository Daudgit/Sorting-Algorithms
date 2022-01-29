#include<bits/stdc++.h>

using namespace std;
void bubbleSort(int arr[] , int n)
{
    for(int i=1 ; i<n ; i++)
    {
        int flag = 0;
        for(int j=0 ; j<=n-i-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
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
    bubbleSort(arr, n);
    cout << "After Sorting sorting" << endl;
    for (int p : arr)
    {
        cout << p
             << " ";
    }
}
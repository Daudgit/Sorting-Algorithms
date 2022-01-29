#include<bits/stdc++.h>

using namespace std;

void selectionSort(int arr[] , int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        int imin = i;
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[j] < arr[imin])
            {
                imin = j;
            }
        }
        swap(arr[i] , arr[imin]);
    }
    
}




int main(){
    int arr[] = {2,7,4,2,79,36,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Before Sorting sorting" << endl;
    for(int p : arr)
    {
        cout << p << " ";
    }
    cout << endl;
    selectionSort(arr, n);
    cout << "After Sorting sorting" << endl;
    for (int p : arr)
    {
        cout << p
             << " ";
    }
}
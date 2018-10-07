#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H
using namespace std;

vector<int> selectionSort(vector<int> arr)
{
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    return arr;
}
#endif

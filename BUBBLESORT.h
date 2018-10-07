#ifndef BUBBLESORT_H
#define BUBBLESORT_H
using namespace std;

vector<int> bubbleSort(vector<int> arr)
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


#endif // BUBBLESORT_H

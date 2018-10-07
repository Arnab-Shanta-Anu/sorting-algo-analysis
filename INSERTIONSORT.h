#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
using namespace std;

vector<int> insertionSort(vector<int> arr)
{
    int tmp,j,n=arr.size();
    for(int i=0;i<n;i++){
        j=i-1;
        tmp=arr[i];
        while(j>=0 && arr[j]>tmp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=tmp;
    }
    return arr;
}


#endif // INSERTIONSORT_H

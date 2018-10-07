#ifndef QUICKSORT_H
#define QUICKSORT_H
using namespace std;

int MedianOf3(int lo, int hi)
{
    if(lo>=hi)
        return lo;

    int a=lo+(rand()%(hi-lo+1));
    int b=lo+(rand()%(hi-lo+1));
    int c=lo+(rand()%(hi-lo+1));
    //cout<<"avg :"<<(a+b+c)/3<<" "<<endl;
    return (a+b+c)/3;
}

int Partition(vector<int> &arr,int lo,int hi)
{
    int pivot = MedianOf3(lo,hi);

    //cout<<"pivot = "<<pivot;
    //pivot = arr[pivot];
    //cout<<"arr[pivot] = "<<arr[pivot]<<"\t";
    //cout<<"before "<<arr[hi]<<" and "<<arr[pivot];
    swap(arr[hi],arr[pivot]);
    //cout<<"swapped "<<arr[hi]<<" and "<<arr[pivot]<<endl;
    pivot = arr[hi];
    int i=lo-1;
    for(int j=lo;j<=hi-1;j++){
        if(arr[j]<=pivot){
            swap(arr[++i],arr[j]);
        }
    }
    swap(arr[i+1],arr[hi]);
    return i+1;
}
void quickSort(vector<int> &arr,int lo, int hi)
{
    if(lo<hi){
        int q = Partition(arr,lo,hi);
        quickSort(arr,lo,q-1);
        quickSort(arr,q+1,hi);
    }
}


#endif // QUICKSORT_H

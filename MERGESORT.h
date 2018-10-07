#ifndef MERGESORT_H
#define MERGESORT_H
using namespace std;

vector<int> Merge(vector<int>a,vector<int>b)
{
    int n1=a.size();
    int n2=b.size();

    vector<int> merged(n1+n2);

    int i,j,k;i=j=k=0;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            merged[k++]=a[i++];
        }
        else{
            merged[k++]=b[j++];
        }
    }
    while(i<n1){merged[k++] = a[i++];}
    while(j<n2){merged[k++] = b[j++];}

    return merged;
}

vector<int> mergeSort(vector<int> v)
{
    if(v.size()==1) return v;
    int n = v.size();

    int mid=n/2,j;

    vector<int> left,right;

    for(int i=0;i<mid;i++) left.push_back(v[i]);
    for(int i=mid;i<n;i++) right.push_back(v[i]);

    left=mergeSort(left);
    right=mergeSort(right);

    return Merge(left,right);
}

#endif

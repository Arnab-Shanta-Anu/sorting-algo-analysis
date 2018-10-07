#ifndef RANDOMINPUT_H
#define RANDOMINPUT_H

using namespace std;
//template <typename T>
vector<int> generateSerialized(int n)
{
    //srand(time(0));
    vector<int> series;
    for(int i=0;i<n;i++){
        series.push_back(i);
    }
    return series;
}

#endif // RANDOMINPUT_H

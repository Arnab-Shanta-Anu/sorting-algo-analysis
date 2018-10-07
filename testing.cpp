#include <iostream>
#include <chrono>
#include <vector>
#include <cstdlib>
#include <algorithm>

#include "BUBBLESORT.h"
#include "INSERTIONSORT.h"
#include "SELECTIONSORT.h"
#include "MERGESORT.h"
#include "QUICKSORT.h"
#include "printVec.h"
#include "randomInput.h"

using namespace std;

int main()
{
    freopen("bubblesort.txt","w",stdout);
    srand(time(0));
    int sz[] = {10,20,50,100,500,1000,2000,5000,10000};
    int n=0;
    for(; n<9; n++)
    {
        cout<<"Input Size: "<<sz[n]<<endl;

        //best case
        cout<<"Best Case ";
        vector<int> input=generateSerialized(sz[n]);
        auto start = std::chrono::steady_clock::now();

        bubbleSort(input);

        auto stop = std::chrono::steady_clock::now();

        double elapsed_time = double (std::chrono::duration_cast <std::chrono::nanoseconds> (stop-start).count());
        std::cout << "Time(ms) "<<elapsed_time/1e6 <<"\t";



        //worst case
        cout<<"Worst Case ";
        reverse(input.begin(),input.end());
        start = std::chrono::steady_clock::now();

        bubbleSort(input);

        stop = std::chrono::steady_clock::now();

        elapsed_time = double (std::chrono::duration_cast <std::chrono::nanoseconds> (stop-start).count());
        std::cout << "Time(ms) "<<elapsed_time/1e6 <<"\t";



        //avg case
        cout<<"Average Case ";
        random_shuffle(input.begin(),input.end());
        start = std::chrono::steady_clock::now();

        bubbleSort(input);

        stop = std::chrono::steady_clock::now();

        elapsed_time = double (std::chrono::duration_cast <std::chrono::nanoseconds> (stop-start).count());
        std::cout << "Time(ms) "<<elapsed_time/1e6 <<std::endl<<endl;



    }
    return 0;
}

#include "insertionsort.h"

void insertionsort(std::vector<int> &ar){
    int n = static_cast<int>(ar.size());
    int j;
    for(int i = 2; i != n; i++){
        int key = ar[i];
        //insert ar[i] into the sorted subarray a[1:i-1].
        j = i-1;
        while(j>=0 && ar[j] > key){
            ar[j+1] = ar[j];
            j = j-1;
        }
        ar[j+1] = key;
    }
}
#include "quicksort.hpp"
#include <algorithm>
int partition(std::vector<int> &ar, int p, int r){
    int x = ar[r];
    int i = p-1;
    for(int j = p; j <= r-1; j++){
        if(ar[j]<= x){
            i = i+1;
            std::swap(ar[i],ar[j]);
        }
        std::swap(ar[i+1],ar[r]);
    }
    return (i+1);
}
void quicksortHelper(std::vector<int> &ar, int p, int r){
    if(p<r){
        int q = partition(ar,p,r);
        quicksortHelper(ar,p,q-1);
        quicksortHelper(ar,q+1,r);
    }
}
/* for random p
int getRandomPivotIndex(const std::vector<int>& ar) {
    int low = 0;
    int high = ar.size() - 1;
    return low + std::rand() % (high - low + 1);
}
*/
void quicksort(std::vector<int> &ar){
    //int p = getRandomPivotIndex(ar);
    //quicksortHelper(ar,p,ar.size() - 1);
    quicksortHelper(ar,1,ar.size() - 1);
}
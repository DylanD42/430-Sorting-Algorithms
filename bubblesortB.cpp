#include "bubblesortB.h"

void bubblesortB(std::vector<int> &ar){
    int n = static_cast<int>(ar.size());
    bool swapped;
    do
    {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
            if (ar[i] > ar[i + 1]) {
                std::swap(ar[i], ar[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);
    
}
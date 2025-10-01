#include "bubblesortC.h"

void bubblesortC(std::vector<int> &ar){
    int n = static_cast<int>(ar.size());
    bool swapped;
    do
    {
        swapped = false;
        for (int i = n-1; i > 0; i--) {
            if (ar[i - 1] > ar[i]) {
                std::swap(ar[i - 1], ar[i]);
                swapped = true;
            }
        }
    } while (swapped);
    
}

/*
void bubblesortC(std::vector<int> &ar){
    int n = static_cast<int>(ar.size());
    bool swapped;
    do
    {
        swapped = false;
        for (int i = n; i < n; i++) {
            if (ar[i - 1] > ar[i]) {
                std::swap(ar[i - 1], ar[i]);
                swapped = true;
            }
        }
    } while (swapped);
    
}*/
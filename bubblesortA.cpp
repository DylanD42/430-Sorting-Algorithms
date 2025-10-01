#include "bubblesortA.h"

void bubblesortA(std::vector<int> &ar){
    int n = static_cast<int>(ar.size());
    for(int i = 0; i != n-1; i++){
        for(int j = 0; j != n-i-1; j++){
            if(ar[j] > ar[j+1]){
                std::swap(ar[j], ar[j+1]);
            }
        }
    }
}
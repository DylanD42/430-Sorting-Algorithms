#include "radixsort.h"

void radixsort(std::vector<int> &ar)  {

    int n = static_cast<int>(ar.size());
    std::vector<int> temp(n);

    
    for (int i = 0; i < n; ++i) {
        ar[i] ^= (1u << 31);
    }

    
    for (int bit = 0; bit < 32; ++bit) {
        int zeroCount = 0;

        
        for (int i = 0; i < n; ++i) {
            if (((ar[i] >> bit) & 1) == 0)
                ++zeroCount;
        }

        int zeroIndex = 0;
        int oneIndex = zeroCount;

        
        for (int i = 0; i < n; ++i) {
            if (((ar[i] >> bit) & 1) == 0)
                temp[zeroIndex++] = ar[i];
            else
                temp[oneIndex++] = ar[i];
        }

        std::swap(ar, temp);
    }

    
    for (int i = 0; i < n; ++i) {
        ar[i] ^= (1u << 31);
    }
}
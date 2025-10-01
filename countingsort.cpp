#include "countingsort.h"

#include "countingsort.h"

void countingsort(std::vector<int> &ar) {
    if (ar.empty()) return;

    int minVal = ar[0];
    int maxVal = ar[0];
    for (int val : ar) {
        if (val < minVal) minVal = val;
        if (val > maxVal) maxVal = val;
    }

    int range = maxVal - minVal + 1;
    std::vector<int> count(range, 0);

    for (int val : ar) {
        count[val - minVal]++;
    }

    size_t index = 0;
    for (int i = 0; i < range; ++i) {
        while (count[i]-- > 0) {
            ar[index++] = i + minVal;
        }
    }
}

#include "selectionSortA.h"

using namespace std;
void selectionSortA(vector<int> &ar){
    int n = static_cast<int>(ar.size());
    for(int i = 0; i != n; i++){
        for(int j = i+1; j != n; j++){
            if (ar[j] < ar[i]){
                swap(ar[j],ar[i]);
            }
        }

    }
}
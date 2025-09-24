#include "selectionSortB.hpp"
using namespace std;

void selectionSortB(vector<int> &ar){
    cout << "test" << endl;
    int n = static_cast<int>(ar.size());
    for(int i = 0; i != n-1; i++){\
        int min = i;
        for(int j = i+1; j != n; j++){
            if (ar[j] < ar[min]){
                min = j;
            }
        }
        swap(ar[min],ar[i]);
    }
}
#include <iostream>
#include <cstdlib> // for rand and srand
#include <ctime> // for time()
#include "selectionSortA.h"
#include "selectionSortB.h"
#include "mergesort.h"
#include "quicksort.h"
#include "insertionsort.h"
#include "bubblesortA.h"
#include "bubblesortB.h"
#include "bubblesortC.h"
#include "countingsort.h"
using namespace std;

void printVector(const std::vector<int>& vec);
std::vector<int> generateRandomVector(int size, int maxVal);

int main() {
    /*
    // Selection Sort A
    auto vec = generateRandomVector(100, 1000);
    selectionSortA(vec);
    cout << "Selection Sort A:\n";
    printVector(vec);

    // Selection Sort B
    vec = generateRandomVector(100, 1000);
    selectionSortB(vec);
    cout << "\nSelection Sort B:\n";
    printVector(vec);

    // Merge Sort
    vec = generateRandomVector(100, 1000);
    mergesort(vec);  // assuming mergesort takes just (vector<int>&)
    cout << "\nMerge Sort:\n";
    printVector(vec);

    // Quick Sort
    vec = generateRandomVector(100, 1000);
    quicksort(vec);  // assuming quicksort takes just (vector<int>&)
    cout << "\nQuick Sort:\n";
    printVector(vec);

*/
    // Insertion Sort
    auto vec = generateRandomVector(100, 1000);
    insertionsort(vec);  
    cout << "\nInsertion Sort:\n";
    printVector(vec);

    // Bubble Sort A
    vec = generateRandomVector(100, 1000);
    bubblesortA(vec);  
    cout << "\nBubble Sort A:\n";
    printVector(vec);

    // Bubble Sort B
    vec = generateRandomVector(100, 1000);
    bubblesortB(vec);  
    cout << "\nBubble Sort B:\n";
    printVector(vec);
    // Bubble Sort C
    vec = generateRandomVector(100, 1000);
    bubblesortC(vec);  
    cout << "\nBubble Sort C:\n";
    printVector(vec);
    // Counting Sort
    vec = generateRandomVector(100, 1000);
    countingsort(vec);  
    cout << "\nCounting Sort:\n";
    printVector(vec);
    return 0;
}//

std::vector<int> generateRandomVector(int size, int maxVal) {
   // Seed the RNG using current time + process clock for more uniqueness
    std::srand(static_cast<unsigned int>(std::time(nullptr)) + std::rand());

    std::vector<int> vec;
    vec.reserve(size);

    for (int i = 0; i < size; ++i) {
        vec.push_back(std::rand() % (maxVal + 1));
    }

    return vec;
}

void printVector(const std::vector<int>& vec) {
    std::cout << "[ ";
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << "]\n";
}

/*
Done    Insertion Sort
Done    Bubble Sort A - Bubble sort without swap detection.
Done    Bubble Sort B - Bubble sort with swap detection which starts at the beginning of the list and works to the end.
Done    Bubble Sort C - Bubble sort with swap detection whcih starts at the end of the list and works to the beginning.
Not Done    Counting Sort
Not Done    Radix Sort (using binary radix and bitwise counting)
*/

#include <iostream>
#include <cstdlib> // for rand and srand
#include <ctime> // for time()
#include "selectionSortA.hpp"
#include "selectionSortB.hpp"
#include "mergesort.hpp"
using namespace std;

void printVector(const std::vector<int>& vec);
std::vector<int> generateRandomVector(int size, int maxVal);

int main() {
    std::vector<int> numbers = generateRandomVector(10, 50);
    printVector(numbers);
    mergesort(numbers);
    printVector(numbers);

}

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
Algs to implement                               | Status
------------------------------------------------|--------------
void selectionSortA(std::vector<int> &ar);      |   Done
void selectionSortB(std::vector<int> &ar);      |   Done
void mergesort(std::vector<int> &ar);           |   Done
void quicksort(std::vector<int> &ar);           |   Pending

*/


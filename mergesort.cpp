#include "mergesort.hpp"
static void merge(std::vector<int>& ar, int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;

  // Create temp vectors
  std::vector<int> L(ar.begin() + p, ar.begin() + q + 1);
  std::vector<int> R(ar.begin() + q + 1, ar.begin() + r + 1);

  // Merge the temp vectors back into arr
  int i = 0, j = 0, k = p;
  while (i < n1 && j < n2) {
      if (L[i] <= R[j]) {
          ar[k] = L[i];
          ++i;
      } else {
          ar[k] = R[j];
          ++j;
      }
      ++k;
  }

  // Copy remaining elements of L[], if any
  while (i < n1) {
      ar[k] = L[i];
      ++i;
      ++k;
  }

  // Copy remaining elements of R[], if any
  while (j < n2) {
      ar[k] = R[j];
      ++j;
      ++k;
  }
}

static void mergesortHelper(std::vector<int> &ar, int p, int r) {
    if (p >= r) {
        return;
    }
    int q = p + (r - p) / 2;  // middle index
    mergesortHelper(ar, p, q);      // sort left half
    mergesortHelper(ar, q + 1, r);  // sort right half
    merge(ar, p, q, r);             // merge the sorted halves
}

void mergesort(std::vector<int> &ar){
    mergesortHelper(ar,0, (ar.size()-1));
}
/***
 * 
 * @brief [Task description](https://app.codility.com/programmers/lessons/6-sorting/max_product_of_three/)
 * 
 * A non-empty array A consisting of N integers is given. The product of triplet (P, Q, R) equates to A[P] * A[Q] * A[R] (0 ? P < Q < R < N).
 * 
 * @example Array A such that:
 *  A[0] = -3
 *  A[1] = 1
 *  A[2] = 2
 *  A[3] = -2
 *  A[4] = 5
 *  A[5] = 6
 * contains the following example triplets:
 * (0, 1, 2), product is ?3 * 1 * 2 = ?6
 * (1, 2, 4), product is 1 * 2 * 5 = 10
 * (2, 4, 5), product is 2 * 5 * 6 = 60
 * Your goal is to find the maximal product of any triplet.
 * 
 * Write a function:
 *  int solution(vector<int> &A);
 * that, given a non-empty array A, returns the value of the maximal product of any triplet.
 * 
 * @example Given array A such that:
 *  A[0] = -3
 *  A[1] = 1
 *  A[2] = 2
 *  A[3] = -2
 *  A[4] = 5
 *  A[5] = 6
 * the function should return 60, as the product of triplet (2, 4, 5) is maximal.
 * 
 * @note Assumptions:
 *  - N is an integer within the range [3..100,000];
 *  - each element of array A is an integer within the range [?1,000..1,000].
 * 
*/

#include <algorithm>

int solution(vector<int> &A) {
  /**
   * @note time complexity: O(N * log(N))
   * 
   */

  if (A.size() < 3) return 0;

  // Sort the array in ascending order
  sort(A.begin(), A.end());

  // The maximal product could be the product of the three largest elements or the product of two smallest and one largest
  int max_product_end = A[A.size() - 1] * A[A.size() - 2] * A[A.size() - 3];
  int max_product_start = A[0] * A[1] * A[A.size() - 1];

  return max(max_product_end, max_product_start);
}
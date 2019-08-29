Selection Sort
=============

#### Introduction

Selection sort is an in-place sorting algorithm with complexity O(n<sup>2</sup>). Selection sort generally performs worse than insertion sort which is also a O(n<sup>2</sup>) in-place algorithm.

Selection sort outperforms divide-and-conquer algorithms on small arrays and is easy to implement. This makes it a good choice alongside insertion sort in hybrid approaches to sorting.

#### Correctness Proof

I will prove the correctness of my implementation by a loop invariant proof using the following invariant:

**Loop Invariant:** At the start of the i<sup>th</sup> iteration of the loop, the array A[0:i-1], which does not include A[i], contains the smallest i-1 numbers in final sorted order. 

**Initialization:** At the start of the first loop the loop invariant states: "At the start of the first iteration of the loop, the array A[0:0], contains the smallest 0 numbers in final sorted order." Since this array is empty and an empty array is sorted by definition this step is proven.

**Maintenance:** Assume that the loop invariant holds at the start of the i<sup>th</sup> iteration. Then the array A[0:i-1] contains the smallest i-1 numbers in sorted order. In the body of the loop we add the next lowest number to the end of the sorted array resulting in the array A[0:i] containing the lowest i numbers in sorted order which is what we needed to show.

**Termination:** When the for loop terminates i = (n-1)+1 this means that A[0:n]=A is sorted. Since A is now sorted the algorithm is correct.

#### Run-time Analysis


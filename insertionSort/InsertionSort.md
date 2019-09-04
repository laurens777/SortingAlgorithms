Insertion Sort
====

#### Introduction

Insertion sort is an in-place sorting algorithm with complexity O(n<sup>2</sup>). Insertion sort generally performs better than selection sort which is also a O(n<sup>2</sup>) in-place algorithm.

Insertion sort outperforms divide-and-conquer algorithms on small arrays and is easy to implement. This makes it a good choice alongside insertion sort in hybrid approaches to sorting.

#### Correctness Proof

I will prove the correctness of my implementation by a loop invariant proof using the following invariant:

**Loop Invariant:** At the start of the i<sup>th</sup> iteration of the loop, the array A[0:i], which does not contain A[i], contains the first i elements of the original array in sorted order.

**Introduction:** At the start of the first loop the loop invariant states: "At the start of the first iteration of the loop, the array A[0:1], contains the first i elements of the original array in sorted order."

**Maintenance:** Assume that the loop invariant holds at the start of the i<sup>th</sup> iteration. Then the array A[0:i] contains the first i numbers of the original array in sorted order. In the body of the loop we insert the next number in the correct position and shift all numbers greater over by one place resulting in the array A[0:i+1] which contains the first i+1 numbers in sorted order.

**Termination:** When the for loop terminates i = (n-1)+1 this means that A[0:n] = A is in sorted order. Since A is now sorted the algorithm is correct.
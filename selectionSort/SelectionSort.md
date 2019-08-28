Selection Sort
=============

#### Introduction

Selection sort is an in-place sorting algorithm with complexity O(n<sup>2<sup>). Selection sort generally performs worse than insertion sort which is also a O(n<sup>2<sup>) in-place algorithm.

Selection sort outperforms divide-and-conquer algorithms on small arrays and is easy to implement. This makes it a good choice alongside insertion sort in hybrid approaches to sorting.

#### Correctness Proof

I will prove the correctness of my implementation by a loop invariant proof using the following invariant:

**Loop Invariant:** At the start of the i<sup>th<sup> iteration of the loop, the array A[0:i], which does not include A[i], contains the smallest i-1 numbers in final sorted order. 



#### Run-time Analysis


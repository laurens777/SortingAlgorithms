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

​		CODE										 COST				TIME

for(int i=0; i<n-1; i++) 						c<sub>1</sub>				$$\sum_{i=0}^{n-1} 1 = n$$
	min = i 											 c<sub>2</sub>				$$\sum_{i=0}^{n-2} 1 = n-1$$
	for(int j=i+1; j<n; j++)			    	 c<sub>3</sub>				$$\sum_{i=0}^{n-2}\sum_{j=i+1}^{n} 1 = \frac{n^2+n-2}{2}$$
		if(a[j]<a[min])			 		    	 c<sub>4</sub>				$$\sum_{i=0}^{n-2}\sum_{j=i+1}^{n-1} 1 = \frac{n^2-n}{2}$$
			min = j									  c<sub>5</sub>				$$\sum_{i=0}^{n-2}\sum_{j=i+1}^{n-1} 1 = \frac{n^2-n}{2}$$
	if(min != i)										c<sub>6</sub>				$$\sum_{i=0}^{n-2} 1 = n-1$$
		temp = a[i]								  c<sub>7</sub>				 $$\sum_{i=0}^{n-2} 1 = n-1$$
		a[i] = a[temp]   						  c<sub>8</sub>				 $$\sum_{i=0}^{n-2} 1 = n-1$$
		a[temp] = a[i]   						  c<sub>9</sub>				 $$\sum_{i=0}^{n-2} 1 = n-1$$

Multiplying COST x TIME and adding everything up we obtain the following:

c<sub>1</sub>(n) + c<sub>2</sub>(n-1) + c<sub>3</sub>( $$\frac{n^2+n-2}{2}$$ ) + c<sub>4</sub>($$\frac{n^2-n}{2}$$) + c<sub>5</sub>($$\frac{n^2-n}{2}$$) + c<sub>6</sub>(n-1) + c<sub>7</sub>(n-1) + c<sub>8</sub>(n-1) + c<sub>9</sub>(n-1)

=n<sup>2</sup>(c<sub>3</sub> + c<sub>4</sub> + c<sub>5</sub>) + n(c<sub>1</sub> + c<sub>2</sub> + $$\frac{c_3}{2}$$ + $$\frac{c_4}{2}$$ + $$\frac{c_5}{2}$$ + c<sub>6</sub> + c<sub>7</sub> + c<sub>8</sub> + c<sub>9</sub>) - (c<sub>2</sub> + c<sub>3</sub> + c<sub>6</sub> + c<sub>7</sub> + c<sub>8</sub> + c<sub>9</sub>)

This polynomial can be represented by an<sup>2</sup> + bn - c where a, b and c are defined in terms of the cost c<sub>i</sub>. This means that our implementation of Selection Sort runs in O(n<sup>2</sup>).
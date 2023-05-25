# 0x1E. C - Search Algorithms

## Learning Objectives

### General

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs

## Tasks

#### 0. Linear search

Write a function that searches for a value in an array of integers using the Linear search algorithm

Prototype : int linear_search(int array, size_t size, int value);

[solution](0-linear.c)

#### 1. Binary Search

Write a function that searches for a value in a sorted array of integers using 
the Binary search algorithm

Prototype : int binary_search(int array, size_t size, int value);

[solution](1-binary.c)

#### 2. Big O #0

* What is the time complexity (worst case) of a linear search in
an array of size n?

[solution](2-O)

* Time complexity(worst case) of a linear search algo in an array of
size n is O(n), meaning that the worst-case running time of the
algo grows linearly with the size of the input array.

* In a linear search algo, we traverse the array from the
begining until we find the target element or reach the end of the
array.

* In worst case scenario, the target element is not present in
the array, and we must traverse the entire array to confirm its
absence.

* Therefore, the number of comparisons required in the worst-case
scenario is proportional to the size of the input array n, resulting
in  a time complexity of O(n).

#### 3. Big O #1

What is the space complexity (worst case) of an iterative linear 
search algorithm in an array of size n?

[solution](3-O)

* The space complexity is O(1), meaning that the space required by
the algo does not depend on the size of the array.

* In an iterative algo, we traverse the array element by element,
checking if each element is equal to the target value until we find
it.The algorithm only requires a constant amount of space to store
the indices of the current element.

#### 4. Big O #2

What is the time complexity (worst case) of a binary search in an 
array of size n?

[solution](4-O)

* TC of a binary search in an array of size n is O(log(n)), meaning
that the worst-case running time of the algorithm grows logarithmically
with the size of the input array.

#### 5. Big O #3

What is the space complexity (worst case) of a binary search in an 
array of size n?

[solution](5-O)

* The SC is O(1), meaning that the space required by the algorithm
does not depend on the size of the input array.

* Hence the binary search algo has a constant space complexity,
regardless of the size of the input array.

#### 9. Interpolation search

Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm

* Prototype : int interpolation_search(int array, size_t size, int value);

[solution](102-interpolation.c)
* Interpolation search is an algorithm for searching for a key in an array
that has been ordered by numerical values assigned to the keys.

* Interpolation search resembles the method by which people search a telephone
dir for a name(the key value by which the book's entries are orderd): in
each step the algorithm calculates where in the remaining search space the
sought item might be, based on the key values at the bounds of the search
space and the value of the sought key, usually via a linear interpolation.

* The key value actually found at this estimated position is then compared
to the key value being sought.If it not equal, then depanding on the
comparison, the remaining search space is reduced to the part before or
after the estimated position.

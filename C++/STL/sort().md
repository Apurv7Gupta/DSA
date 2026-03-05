In C++, sort() is a built-in function used to sort the given range in desired order. 

but it only works on data structures that provide ==random access== to its elements such as vectors and arrays.

#### Working
The sort() function is implemented using the ==Intro Sort Algorithm==.

It is the combination of three standard sorting algorithms: ==insertion sort== , ==quick sort== and ==heap sort==. 

It automatically chooses the best algorithm that fits the given case.

As it uses the above sorting algorithms, its average time complexity turns out to be ==O(n log n)==.
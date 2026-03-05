==These are shared member functions that are shared across many of the elements of STL.==

##### `insert()` ^insert
- Takes a constructed object and inserts it.
- May cause an extra copy or move.

##### `begin()` ^begin

- Returns an iterator to the first element in the container.
- Lets you modify elements (if not const set).

##### `end()` ^end

Returns an iterator pointing to the beyond of the last element of the container.

##### `count()`  ^count

Returns 0 or 1 based on presence of element in brackets.

##### `erase()` ^erase

used to delete a specific element (at specific index)

##### `clear()` ^clear

 Deletes all the elements from the container.

##### `size()` ^size

Returns the number of elements in the container

##### `maxsize()` ^maxsize

returns the maximum size the vector can hold.

##### `empty()` ^empty

Returns whether the container is empty.

##### `find()` ^find

Returns an iterator to the element 'g' in the container if found, else returns the iterator to end.

##### `cbegin()` ^cbegin

- Return a const iterator pointing to the first element.
- Gives read-only access, even on non-const set.

##### `cend()` ^cend

Return a const iterator pointing to beyond the last element in the container.

##### `rbegin()` ^rbegin

Returns a reverse iterator pointing to the last element in the container.

##### `rend()` ^rend

Returns a reverse iterator pointing to the theoretical element right before the first element in the container.


##### `crbegin()` ^crbegin

Returns a constant reverse iterator pointing to the last element in the container.


##### `crend()` ^crend

Returns a constant reverse iterator pointing to the position just before the first element in the container.

# Reverse Array Problem

An **array** is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.

For arrays of a known size, use the following declaration:

```c
int arr[10]; // Declares an array named arr of size 10, i.e., you can store 10 integers.
````

> **Note:** Unlike C, C++ allows dynamic allocation of arrays at runtime without special calls like `malloc()`.
> For example, `int arr[n];` will create an array with space for `n` integers.

---

## Accessing Elements of an Array

* Indexing in arrays starts from **0**.
* The first element is stored at `arr[0]`, the second at `arr[1]`, and so on through `arr[9]`.

---

## Task

You will be given an array of `n` integers and you have to print the integers in **reverse order**.

---

## Input Format

* The first line of input contains `n`, the number of integers.
* The second line contains `n` space-separated integers.

---

## Constraints

* Each element in the array is an integer within the given range.

---

## Output Format

Print the `n` integers of the array in **reverse order**, space-separated on a single line.

---

## Sample Input

```
4
1 4 3 2
```

## Sample Output

```
2 3 4 1
```


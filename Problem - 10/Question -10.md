
# Variable Sized Arrays

## Problem Statement

Consider an **n-element array**, where each index in the array contains a reference to an array of integers (the value of each subarray can vary).

You are given `n` variable-length arrays. Then you must answer `q` queries. Each query is in the format:

```
i j
```

Where:

* `i` denotes the index of the main array, and
* `j` denotes the index in the subarray at position `i`.

For each query, print the value at that position.

---

## Input Format

* The first line contains two space-separated integers, `n` (number of arrays) and `q` (number of queries).
* Each of the next `n` lines begins with an integer `k` (number of elements in that array), followed by `k` space-separated integers.
* Each of the next `q` lines contains two space-separated integers, `i` and `j`, representing a query.

---

## Constraints

* All indices are **0-based**.
* `0 ≤ i < n`
* `0 ≤ j < size of array at arr[i]`
* All integers are non-negative.

---

## Output Format

For each query, print the value located at index `j` in the array referenced by `i`.
Each output should be on a **new line**.

---

## Sample Input

```
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
```

---

## Sample Output

```
5
9
```

---

## Explanation

The arrays are assembled as:

```
arr[0] = [1, 5, 4]
arr[1] = [1, 2, 8, 9, 3]
```

* Query `0 1`: Go to `arr[0]` → `[1, 5, 4]`, pick index `1` → `5`
* Query `1 3`: Go to `arr[1]` → `[1, 2, 8, 9, 3]`, pick index `3` → `9`

---

## Notes

* Each subarray can have a **different number of elements**.
* You may solve this using **vectors** or **dynamic memory allocation** in C++.
* Be careful with **zero-based indexing**.

Do you want me to do that too?


# Problem: Find the Maximum of Four Numbers

## Description

Write a function `int max_of_four(int a, int b, int c, int d)` which returns the greatest of the four integers it receives as arguments.

A function in C++ is a collection of statements grouped together to perform a task. Functions may take zero or more arguments and can either return a value or `void` (if nothing is returned).

### Function Syntax

```cpp
return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...) {
    // body of the function
    [if return_type is non-void]
        return something of type return_type;
}
```

### Example

A function that returns the sum of four integers:

```cpp
int sum_of_four(int a, int b, int c, int d) {
    int sum = 0;
    sum += a;
    sum += b;
    sum += c;
    sum += d;
    return sum;
}
```

Now, you need to implement a function that returns the maximum value among four integers.

---

## Input Format

* Input will contain **four integers**, one per line.

## Output Format

* Print the **greatest of the four integers**.

---

## Sample Input

```
3
4
6
5
```

## Sample Output

```
6
```

---

## Notes

* Use the `+=` operator for accumulation when needed.
* `a += b` is equivalent to `a = a + b;`.
* I/O will be automatically handled in the provided template.


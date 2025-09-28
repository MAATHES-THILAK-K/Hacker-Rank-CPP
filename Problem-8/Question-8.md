
# Pointer Update Function in C++

## Problem Description

A pointer in C++ is used to share a memory address among different contexts (primarily functions). They are used whenever a function needs to modify the content of a variable, but it does not have ownership.

In order to access the memory address of a variable, prepend it with the `&` sign. For example, `&val` returns the memory address of `val`.

This memory address is assigned to a pointer and can be shared among functions. To access the content of the memory pointed to, prepend the variable name with a `*`. For example, `*p` will return the value stored in `p`, and any modification to it will be performed on the original variable.

Example:

```cpp
void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}  
````

---

## Function Description

Complete the `update` function in the editor below.

### Parameters

* `int *a`: a pointer to an integer
* `int *b`: a pointer to an integer

### Returns

The function is declared with a `void` return type, so there is no value to return. Modify the values in memory so that:

* `*a` contains their **sum**
* `*b` contains their **absolute difference**

---

## Input Format

Input will contain two integers, `a` and `b`, separated by a newline.

### Sample Input

```
4
5
```

### Sample Output

```
9
1
```

---

## Notes

* You only need to modify the values using the pointers.
* Do not return any value from the function.
* Use the `*` operator to access or modify the values pointed to by the pointers.
* Use the `abs()` function to calculate the absolute difference if necessary.


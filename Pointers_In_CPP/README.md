# Static and Dynamic Memory Allocation in C++

## 📌 Introduction

Memory allocation is the process of reserving memory for variables, arrays, objects, and other data during program execution.

In C++, memory allocation is mainly classified into two types:

1. **Static Memory Allocation**
2. **Dynamic Memory Allocation**

Understanding these concepts helps us manage memory efficiently and write better C++ programs.

---

## 1. Static Memory Allocation

### Definition

Static memory allocation is the process of allocating memory at compile time or before the program starts executing, where the memory size or storage requirements are determined in advance.

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Value of a: " << a << endl;

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

### Characteristics

- Memory requirements are determined in advance.
- Ordinary local variables typically use automatic storage duration and are commonly stored on the stack.
- Fixed-size arrays have a size determined at compile time.
- Memory management is generally handled automatically.
- The size of a built-in array cannot be changed after its creation.

> **Note:** In C++, static storage duration and stack allocation are different concepts. Static memory allocation is often used informally to describe fixed-size allocation.

---

## 2. Dynamic Memory Allocation

### Definition

Dynamic memory allocation is the process of requesting memory during program execution according to the program's requirements.

In C++, dynamic memory allocation can be performed using `new` and `delete`.

### Example 1: Dynamic Allocation of a Variable

```cpp
#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;

    *ptr = 50;

    cout << "Value: " << *ptr << endl;

    delete ptr;
    ptr = nullptr;

    return 0;
}
```

### Explanation

- `new int` dynamically allocates memory for an integer.
- `ptr` stores the address of the allocated integer.
- `*ptr = 50` assigns a value to that memory.
- `delete ptr` releases the allocated memory.
- `ptr = nullptr` prevents the pointer from retaining the old address.

### Example 2: Dynamic Allocation of an Array

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size.";
        return 0;
    }

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
    arr = nullptr;

    return 0;
}
```

### Characteristics

- Memory is requested at runtime.
- The allocation size can depend on user input.
- Dynamically allocated objects remain allocated until released or otherwise managed.
- The programmer must manage memory when using raw `new` and `delete`.
- Failure to release allocated memory can cause memory leaks.
- Accessing memory after it has been released can cause undefined behavior.

---

## 3. Difference Between Static and Dynamic Memory Allocation

| Basis | Static Allocation | Dynamic Allocation |
|---|---|---|
| Allocation time | Usually determined in advance | Runtime |
| Size | Generally fixed | Can depend on runtime requirements |
| Memory management | Usually automatic | Manual with raw `new` and `delete` |
| Flexibility | Less flexible | More flexible |
| Resizing | Fixed-size arrays cannot be resized | New storage can be allocated when needed |
| Example | `int arr[5];` | `int* arr = new int[n];` |
| Typical use | Known-size data | Runtime-sized data |

---

## 4. Memory Allocation Diagram

```text
             Memory Allocation
                     |
          +----------+----------+
          |                     |
       Static                Dynamic
     Allocation            Allocation
          |                     |
   Fixed-size data        Runtime requests
          |                     |
      int arr[5];         new int[n]
                                |
                         Release memory
                                |
                            delete[]
```

---

## 5. Advantages and Disadvantages

### Static Memory Allocation
# C++ Macros — Purpose, Usage & Code Maintainability

## 1. What Is a Macro?

A **macro** in C++ is a preprocessor instruction that defines reusable text or code fragments. Macros are processed by the preprocessor before the actual compilation begins.

Macros are generally defined using the `#define` directive and can be removed using `#undef`.

### Basic Syntax

```cpp
#define MACRO_NAME replacement_value
```

Example:

```cpp
#include <iostream>
using namespace std;

#define PI 3.14159

int main() {
    double radius = 5;
    double area = PI * radius * radius;

    cout << "Area: " << area << endl;
    return 0;
}
```

Here, the preprocessor replaces `PI` with `3.14159` before compilation.

---

## 2. Why Do We Use Macros?

Macros can help make code more consistent, reduce repetitive definitions, and control compilation.

### A. Define Constants

Macros can provide a single definition for a value used throughout a program.

```cpp
#define MAX_SIZE 1000
#define COLLEGE_NAME "MUIT"
```

**Benefits:**
- Avoid repeatedly writing the same value.
- Update a definition from one place.
- Improve consistency across the codebase.

> In modern C++, prefer `constexpr` or `const` for typed constants when possible.

### B. Reduce Repetitive Code

Function-like macros can represent repeated code patterns.

```cpp
#define PRINT_LINE cout << "----------------\n"

PRINT_LINE;
```

This expands to the corresponding output statement wherever the macro is used.

**Benefits:**
- Less repetitive typing.
- Convenient for simple, frequently repeated preprocessor patterns.

However, ordinary functions or templates are generally safer for reusable logic.

### C. Create Shortcuts for Competitive Programming

Macros are sometimes used in competitive programming to reduce typing.

```cpp
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pb push_back

int main() {
    vi numbers;
    numbers.pb(10);
    numbers.pb(20);

    ll sum = 0;

    for (int x : numbers) {
        sum += x;
    }

    cout << sum << '\n';
    return 0;
}
```

Here:
- `ll` is replaced by `long long`.
- `vi` is replaced by `vector<int>`.
- `pb` is replaced by `push_back`.

**Note:** These are common competitive-programming shortcuts, not universally recommended production-code conventions. `using ll = long long;` and standard library operations are often clearer.

---

## 3. How Do Macros Help Maintain Code?

Code maintainability means making code easier to read, modify, debug, and extend.

Macros can support maintainability when used carefully.

### Example: Centralized Configuration

```cpp
#define MAX_USERS 500
#define APP_VERSION "1.0"

int users[MAX_USERS];
```

If the maximum user count changes, you can update the definition in one place.

### Example: Conditional Compilation

Macros can enable or disable debugging output without manually deleting debug statements.

```cpp
#include <iostream>
using namespace std;

#define DEBUG_MODE

#ifdef DEBUG_MODE
    #define DEBUG(x) cerr << "[DEBUG] " << x << '\n'
#else
    #define DEBUG(x) ((void)0)
#endif

int main() {
    int value = 25;

    DEBUG("Value = " << value);

    cout << "Program running" << '\n';
    return 0;
}
```

When `DEBUG_MODE` is defined, the debug message is printed to the error stream. When it is not defined, the debug macro expands to a no-op.

**Why this is useful:**
- Debug statements can be controlled centrally.
- Production builds can exclude debug output.
- Debugging code does not need to be manually removed.

For larger projects, a logging library or a dedicated logging function is often a better choice.

---

## 4. Types of Macros in C++

| Type | Example | Purpose |
|---|---|---|
| Object-like macro | `#define SIZE 100` | Defines a replacement value |
| Function-like macro | `#define SQUARE(x) ((x) * (x))` | Defines a parameterized replacement |
| Conditional macro | `#ifdef DEBUG` | Controls conditional compilation |
| Predefined macro | `__LINE__` | Provides the current source line number |
| Stringification | `#define STR(x) #x` | Converts a macro argument into a string |
| Token pasting | `#define JOIN(a,b) a##b` | Joins tokens during preprocessing |

### Function-Like Macro Example

```cpp
#define SQUARE(x) ((x) * (x))

int result = SQUARE(5);  // Expands to ((5) * (5))
```

Parentheses help avoid some operator-precedence problems.

However, function-like macros can evaluate arguments multiple times:

```cpp
int result = SQUARE(i++);  // Unsafe: i++ may be evaluated twice
```

Prefer a function or `constexpr` function for ordinary calculations.

---

## 5. Macros vs. Modern C++ Alternatives

| Requirement | Macro | Preferred alternative |
|---|---|---|
| Define a constant | `#define SIZE 100` | `constexpr int SIZE = 100;` |
| Create a type alias | `#define ll long long` | `using ll = long long;` |
| Perform calculations | `#define SQUARE(x) ...` | Function or `constexpr` function |
| Reuse logic | Code-generating macro | Function or template |
| Conditional compilation | `#ifdef DEBUG` | Still useful when compile-time selection is required |
| Prevent header duplication | Include guards
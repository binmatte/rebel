## REBEL Header Library

This header library provides a set of macros and type definitions designed to enhance the readability and efficiency of C programming. It aims to reduce boilerplate code, improve code organisation, and simplify common tasks.

### **KEY FEATURES:**

* **Type Definitions:** Provides aliases for common C data types (e.g., `BOOL`, `INT`, `FLOAT`, `CHAR`, etc.).
* **Pointer Type Definitions:** Defines convenient pointer types for the basic data types (e.g., `CHAR_PTR`, `INT_PTR`, etc.).
* **Struct & Union Macros:**  Streamlines the definition of structs and unions.
* **Control Flow Macros:** Simplifies control flow statements with intuitive macro names (e.g., `IF`, `ELSE`, `WHILE`, `FOR`, etc.).
* **Loop Control Macros:** Provides macros for controlling loop execution (e.g., `BREAK`, `CONTINUE`, `RETURN`).
* **Utility Macros:** Includes a collection of common utility macros for various operations (e.g., `MAX`, `MIN`, `ABS`, `CLAMP`, `ARRAY_SIZE`, etc.).
* **Collection Operation Macros:** Offers macros for operating on collections efficiently (e.g., `MAP`).
* **Casting and Null Macros:**  Provides macros for type casting and handling null pointers (e.g., `CAST`, `NULL`).

**Example Usage:**

```c
// Type Definitions
INT myInt = 10;
FLOAT myFloat = 3.14f;
BOOL isTrue = TRUE;
CHAR_PTR str = "Hello, World!";

// Struct Definition
STRUCT(Point, INT x; INT y;)
Point p = { .x = 5, .y = 10 };

// Control Flow
IF(isTrue) BEGIN
    // Do something
END

RANGE(0, 10, 1) BEGIN
    // Loop body
END

// Utility Macros
INT maxVal = MAX(5, 10);
FLOAT absVal = ABS(-3.14f);
```

**USAGE:**

1. **Download:** the source code.
2. **Include:** the header file (`rebel.h`) in your project.

**License:**

This library is licensed under the MIT License. See the [`LICENSE`](LICENSE) file for details.

**Contribution:**

Contributions are welcome! Please feel free to submit pull requests or open issues.
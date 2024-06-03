# REBEL HEADER LIBRARY

This **HEADER LIBRARY** provides a set of macros and type definitions designed to enhance the readability and efficiency of C programming. It aims to reduce boilerplate code, improve code organisation, and simplify common tasks.

## **KEY FEATURES:**

#### Type Definitions:
* Provides aliases for common C data types (e.g., `BOOL`, `INT`, `FLOAT`, `CHAR`, etc.).
#### Pointer Type Definitions:
* Defines convenient pointer types for the basic data types (e.g., `CHAR_PTR`, `INT_PTR`, etc.).
#### Struct & Union Macros:
* Streamlines the definition of structs and unions.
#### Control Flow Macros:
* Simplifies control flow statements with intuitive macro names (e.g., `IF`, `ELSE`, `WHILE`, `FOR`, etc.).
#### Loop Control Macros: 
* Provides macros for controlling loop execution (e.g., `BREAK`, `CONTINUE`, `RETURN`).
#### Utility Macros: 
* Includes a collection of common utility macros for various operations (e.g., `MAX`, `MIN`, `ABS`, `CLAMP`, `ARRAY_SIZE`, etc.).
#### Collection Operation Macros: 
* Offers macros for operating on collections efficiently (e.g., `MAP`).
#### Casting and Null Macros: 
* Provides macros for type casting and handling null pointers (e.g., `CAST`, `NULL`).

## EXAMPLE USAGE:

```c
// TYPE DEFINITION
INT age = 30;
FLOAT pi = 3.14f;
BOOL is_true = TRUE;
CHAR_PTR name = "John";

// STRUCT DEFINITION
STRUCT(Vec2, INT x; INT y;)
Vec2 p = { .x = 5, .y = 10 };

// CONTROL FLOW
IF(isMale) BEGIN
    // do something
ELSE
    // do something else
END

RANGE(0, 10, 1) BEGIN
    // loop body
END

// UTILITY MACROS
INT get_max = MAX(5, 10);
FLOAT abs_value = ABS(-3.14f);
```

## INSTALLATION:

1. **Download:** the source code.
    ```shell
        wget https://raw.githubusercontent.com/binmatte/rebel/main/rebel.h
    ```
2. **Include:** the header file (`rebel.h`) in your project.
   ```c
        #include "rebel.h"
    ```

## License:

This library is licensed under the MIT License. See the [`LICENSE`](LICENSE) file for details.

## Contribution:

Contributions are welcome! Please feel free to submit pull requests or open issues.
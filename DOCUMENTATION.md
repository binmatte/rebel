## REBEL Header Library: A Concise Guide to C Programming Enhancements

This document provides a comprehensive overview of the REBEL Header Library, a collection of macros and type definitions designed to streamline C programming by reducing boilerplate and enhancing readability.

### Key Features

* **Type Definitions:** Provides aliases for common C data types, promoting code readability and portability.
* **Pointer Type Definitions:** Defines convenient pointer types for the basic data types.
* **Struct & Union Macros:**  Streamlines the definition of structs and unions.
* **Control Flow Macros:** Simplifies control flow statements with intuitive macro names.
* **Loop Control Macros:** Provides macros for controlling loop execution.
* **Utility Macros:** Includes a collection of common utility macros for various operations.
* **Collection Operation Macros:**  Offers macros for operating on collections efficiently.
* **Casting and Null Macros:**  Provides macros for type casting and handling null pointers.

### Detailed Overview

#### Type Definitions

The REBEL Header Library defines aliases for common C data types:

| Alias      | Underlying Type   | Description                               |
|------------|-------------------|----------------------------------------|
| `BOOL`     | `int`             | Boolean type                              |
| `TRUE`     | `1`               | Boolean value "true"                      |
| `FALSE`    | `0`               | Boolean value "false"                     |
| `CHAR`     | `char`            | Character type                            |
| `BYTE`     | `unsigned char`  | Unsigned character type                   |
| `INT`     | `int`             | Integer type                              |
| `FLOAT`    | `float`           | Single-precision floating-point type     |
| `REAL`     | `double`          | Double-precision floating-point type    |
| `VOID`     | `void`            | Void type                                |

#### Pointer Type Definitions

Pointer type definitions for basic data types:

| Alias     | Underlying Type  | Description                         |
|-----------|-------------------|------------------------------------|
| `CHAR_PTR`| `char*`           | Pointer to `char`                 |
| `BYTE_PTR`| `unsigned char*` | Pointer to `unsigned char`          |
| `INT_PTR` | `int*`            | Pointer to `int`                   |
| `FLOAT_PTR`| `float*`          | Pointer to `float`                  |
| `REAL_PTR`| `double*`         | Pointer to `double`                 |
| `VOID_PTR`| `void*`           | Pointer to `void`                   |

#### Struct & Union Macros

Simplified definition of structs and unions using macros:

**`STRUCT(name, ...)`**

* Defines a struct with the specified name and members.

```c
STRUCT(Point, INT x; INT y;)
```

**`UNION(name, ...)`**

* Defines a union with the specified name and members.

```c
UNION(Value, INT i; FLOAT f;)
```

#### Control Flow Macros

Macros to simplify control flow statements:

| Macro               | Equivalent     | Description                                            |
|----------------------|---------------|-----------------------------------------------------|
| `IF(condition)`       | `if (condition)` | Conditional statement                                |
| `ELIF(condition)`    | `else if (condition)` | Alternative condition within an `if` statement        |
| `ELSE`              | `else`         | Default block in an `if` statement                     |
| `WHILE(condition)`    | `while (condition)` | Loop statement repeating as long as condition is true |
| `FOREVER`            | `for(;;)`      | Infinite loop                                         |
| `FOR(init, condition, increment)` | `for (init; condition; increment)` | Standard for loop                                  |
| `RANGE(start, end, step)` |  `for (int i = start; i < end; i += step)` | Loop iterating within a range with a step size     |
| `LOOP(condition)`     | `while (condition)` | Alias for `WHILE`                                 |
| `UNTIL(condition)`   | `while (!(condition))` | Loop repeating until condition is true              |
| `FOREACH(item, container)` |  | Iterates over each item in the container            |
| `FORIN(type, item, container)` | | Iterates over each item in the container with a type |

#### Loop Control Macros

Macros for controlling loop execution:

| Macro   | Description                     |
|---------|---------------------------------|
| `BREAK`  | Exits the current loop         |
| `CONTINUE`| Skips to the next iteration of the loop |
| `RETURN(value)` | Returns a value from a function |

#### Utility Macros

Collection of common utility macros:

| Macro        | Description                                                     |
|--------------|--------------------------------------------------------------|
| `MAX(a, b)`   | Returns the maximum of `a` and `b`                              |
| `MIN(a, b)`   | Returns the minimum of `a` and `b`                              |
| `ABS(x)`     | Returns the absolute value of `x`                              |
| `CLAMP(x, min, max)` | Clamps `x` to the range `[min, max]`                       |
| `ARRAY_SIZE(array)` | Returns the number of elements in an array                |
| `IN_RANGE(x, min, max)` | Checks if `x` is in the range `[min, max]`               |
| `SQR(x)`     | Returns the square of `x`                                      |
| `CBD(x)`     | Returns the cube of `x`                                       |
| `ROUND(x)`   | Rounds `x` to the nearest integer                             |
| `FLOOR(x)`   | Returns the largest integer less than or equal to `x`         |
| `CEIL(x)`    | Returns the smallest integer greater than or equal to `x`      |
| `SIGN(x)`    | Returns the sign of `x` (`-1` for negative, `1` for non-negative) |
| `IS_POWER_OF_2(x)` | Checks if `x` is a power of 2                                |
| `IS_ALIGNED(x, a)` | Checks if `x` is aligned to `a`                             |
| `ALIGN(x, a)` | Aligns `x` to `a`                                           |
| `ROUND_UP(x, a)` | Rounds `x` up to the nearest multiple of `a`                  |
| `ROUND_DOWN(x, a)` | Rounds `x` down to the nearest multiple of `a`                 |

#### Collection Operation Macros

Macros for operating on collections:

**`MAP(function, collection)`**

* Applies `function` to each element in `collection`.

```c
MAP(print, array);
```

#### Casting and Null Macros

Macros for type casting and null pointer handling:

**`CAST(type, value)`**

* Casts `value` to `type`.

```c
int x = CAST(int, 3.14);
```

**`NULL`**

* Null pointer (`((VOID_PTR)0)`)

### Example Usage

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

### Conclusion

The REBEL Header Library offers a powerful set of macros and type definitions that significantly improve the readability and efficiency of C code. Its extensive features provide a comprehensive solution for common programming tasks, enhancing developer productivity and code quality. 

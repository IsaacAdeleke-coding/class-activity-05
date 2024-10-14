# Class Activity 05 - Data Type Size and Limits

### Author: Isaac Adeleke  
### Date: 9/14/2024  

---

## Overview

This repository contains a simple C++ program that demonstrates how to retrieve and display the size, minimum, and maximum values of specific data types (`short` and `double`) using the standard libraries `limits.h` and `float.h`. 

---

## Features

- **Display Data Type Size:**
  - The program uses the `sizeof()` function to calculate and print the size (in bytes) of a `short` and a `double` data type.

- **Retrieve Minimum and Maximum Values:**
  - The program retrieves and displays the minimum and maximum values for `short` and `double` using constants like `SHRT_MIN`, `SHRT_MAX`, `DBL_MIN`, and `DBL_MAX`.

---

## Code Explanation

```cpp
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Signed short min: %d, max: %d\n", SHRT_MIN, SHRT_MAX);
    
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Double min: %e, max: %e\n", DBL_MIN, DBL_MAX);
    
    return 0;
}

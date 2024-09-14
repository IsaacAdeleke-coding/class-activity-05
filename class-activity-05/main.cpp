//
//  main.cpp
//  class-activity-05
//
//  Created by Isaac Adeleke on 9/14/24.
//

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


/*
 Size of short: 2 bytes
 Signed short min: -32768, max: 32767
 Size of double: 8 bytes
 Double min: 2.225074e-308, max: 1.797693e+308
 Program ended with exit code: 0
 */

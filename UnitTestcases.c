
/* --------------------OTee Task: 12 Dec 2023 --------------------------------
Program to compute the number of squares in the infinite lattice and value of n given.
For instance: for n = 1 we can see one square, for n
= 2 we can see 5 squares, and so on.
*/

#include <stdio.h>
#include "CompSq.h"

void testCompSquares(int n, unsigned long long expResult); 

/* Function testCompSquares for unit tests
IN: Value of n, TYPE: INT
    Expected Result value, TYPE UINT LONG LONG
OUT: Void - Function only prints the test failed/passed
*/
void testCompSquares(int n, unsigned long long expResult) 
{
    unsigned long long obResult;
    obResult = CompSquares(n);
    if (obResult == expResult) 
    {
        printf("Test Passed for n = %d, Expected Result: %llu, Obtained Result: %llu\n", n, expResult, obResult);
    } 
    else 
    {
        printf("Test Failed for n = %d, Expected Result: %llu, Obtained Result: %llu !!!! \n", n, expResult, obResult);
    }
}
int main() {
    // Test cases: 
    printf("Add test case for boundary conditions\n");
    testCompSquares(1, 1);
    testCompSquares(2, 5);
    testCompSquares(3, 14);
    testCompSquares(4, 30);
    return 0;
}
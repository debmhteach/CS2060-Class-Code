// Fig. 2.1: fig02_01.c
// A first program in C
#include <stdio.h>

// function main begins program execution
int main( void )
{
    int length = 0;
    int width = 0;
    int area = 0;
    int quotient = 0;

    puts("Enter the length:");
    scanf("%d", &length);
    puts("Enter the width:");
    scanf("%d", &width);

    area = length * width;

    printf("Length: %d, Width: %d, Area: %d\n", length, width, area);

    quotient = length / width;

    printf("Result of Length divided by Width: %d\n", quotient);
    return 0;
} // end function main


/**************************************************************************
 * (C) Copyright 1992-2015 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

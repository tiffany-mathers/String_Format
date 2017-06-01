
/* 
 * File:   stringFormat.cpp
 * Author: Tiffany Mathers
 * Class: SDEV 325
 * Purpose: mitigates CWE-134: Use of Externally-Controlled Format String
 * Created on November 25, 2016, 2:20 PM
 */

// headers
using namespace std;
#include <cstdlib>
#include<stdio.h>

main()
{
    // declare variables
    char userName[11];
    
    printf("***** Welcome to XYZ program *****");
    printf("\n\nPlease enter your name: ");
    
    // Assign user input to userName
    fgets(userName,11,stdin);
    
    // Display username by using conversion specifiers. 
    // The s in %s tells the application input is a string.
    printf("\nThank you! Your name is: \n %s ", userName);
    
    // printf(userName); -- incorrect code displayed the unaltered user input.    
    /**
     * Displaying unaltered user input could disrupt the functionality of the 
     * application. 
     * 
     *  Ex: entering a username of "%s%s%s%s" would not be printed to the console.
     */
    
    // Print success if username is displayed.
    printf("\nSuccess!");
    printf("\nThe user's name was displayed");
}

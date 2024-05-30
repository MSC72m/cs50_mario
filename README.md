# Pyramid Height Program

## Project Description
This project prompts the user to input a height between 1 and 8, and then prints a pyramid of that height using hashes (`#`). The program ensures the input is within the specified range and constructs the pyramid accordingly.

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Algorithm Explanation](#algorithm-explanation)
- [Code Explanation](#code-explanation)

## Installation
No special installation is required for this project. 

## Usage
To compile and run the project, use the following commands:
```sh
make pyramid
./pyramid
```
You will be prompted to enter the height of the pyramid.

Algorithm Explanation
The algorithm works as follows:

Prompt the user to enter the height of the pyramid.
Ensure the height is between 1 and 8 (inclusive).
Print the pyramid with the specified height:
Print spaces for alignment.
Print hashes (#) for the blocks of the pyramid.
## Code Explanation
Including Libraries and Main Function
``` C
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter the height of Pyramid (between 1 && 8): ");
    }
    while (height < 1 || height > 8);

    for (int rows = 0; rows < height; rows++)
    {
        // Print spaces
        for (int spaces = height - rows - 1; spaces > 0; spaces--)
        {
            printf(" ");
        }

        // Print each block
        for (int blocks = 0; blocks < rows; blocks++)
        {
            printf("#");
        }
        printf("\n");
    }
}
```
Explanation:
Including Libraries:

```C
#include <cs50.h>
#include <stdio.h>
```
#include <cs50.h>: Includes the CS50 library for simplified input functions.
#include <stdio.h>: Includes the standard input/output library.
Main Function:

```C
int main(void)
{
    int height;
    do
    {
        height = get_int("Enter the height of Pyramid (between 1 && 8): ");
    }
    while (height < 1 || height > 8);

    for (int rows = 0; rows < height; rows++)
    {
        // Print spaces
        for (int spaces = height - rows - 1; spaces > 0; spaces--)
        {
            printf(" ");
        }

        // Print each block
        for (int blocks = 0; blocks < rows; blocks++)
        {
            printf("#");
        }
        printf("\n");
    }
}
```
Variable Declaration:

```C
int height;
```
Declares the height variable to store the user input.

Input Validation Loop:

```C
do
{
    height = get_int("Enter the height of Pyramid (between 1 && 8): ");
}
while (height < 1 || height > 8);
```
Prompts the user to input a height between 1 and 8. The loop ensures the input is valid.

Outer Loop for Rows:

```C
for (int rows = 0; rows < height; rows++)
{
```
Iterates over each row of the pyramid.

Inner Loop for Spaces:

``` C
for (int spaces = height - rows - 1; spaces > 0; spaces--)
{
    printf(" ");
}
```
Prints the appropriate number of spaces before the hashes on each row to align the pyramid.

Inner Loop for Blocks:

```C
for (int blocks = 0; blocks < rows; blocks++)
{
    printf("#");
}
```
Prints the hashes (#) that form the blocks of the pyramid.

New Line:

```C
printf("\n");
```
Moves to the next line after printing each row of the pyramid.

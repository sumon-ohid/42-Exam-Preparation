/* Assignment name  : swap_bits
Expected files   : swap_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, swaps its halves (like the example) and
returns the result.

Your function must be declared as follows:

unsigned char	swap_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100 | 0001
     \ /
     / \
 0001 | 0100 */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}

// int main() 
// {
//     unsigned char octet = 0100;

//     printf("Original octet: 0x%02X\n", octet);
//     unsigned char swapped = swap_bits(octet);
//     printf("Swapped octet: 0x%02X\n", swapped);

//     return 0;
// }
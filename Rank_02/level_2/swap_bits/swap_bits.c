unsigned char	swap_bits(unsigned char octet)
{
    return (octet >> 4) | (octet << 4);
}

#include <stdio.h>

int main() {
    unsigned char originalValue = 0b10011111; //9f
    unsigned char swappedValue = swap_bits(originalValue);

    printf("Original Value: %x\n", originalValue);
    printf("Swapped Value:  %x\n", swappedValue);
    return 0;
}


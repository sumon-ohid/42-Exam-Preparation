#include <unistd.h>
#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
    int i = 0;
    unsigned char result = octet;

    while (i < 8)
    {
        result = (result << 1) | (octet >> i & 1);
        i++;
    }
    return result;
}

// int main(void)
// {
//     unsigned char n = 100;
//     unsigned char x = reverse_bits(n);
//     printf("%u\n", x);
//     return 0;
// }

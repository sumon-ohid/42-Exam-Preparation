#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;

    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);        
    }
}

// int main(void)
// {
//     unsigned char n = 100;
//     print_bits(n);
//     write(1, "\n", 1);
//     return (0);
// }
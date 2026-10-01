//Macro to byteswap a 16bit integer 
#include <stdio.h>
#include <stdint.h>

// Macro to swap the two bytes of a 16-bit integer
#define BYTE_SWAP16(x) \
    (uint16_t)((((x) & 0x00FF) << 8) | (((x) & 0xFF00) >> 8))


int main()
{
    uint16_t num = 0x1234;

    // Perform byte swap
    uint16_t result = BYTE_SWAP16(num);

    printf("Original number : 0x%04X\n", num);
    printf("After byte swap : 0x%04X\n", result);

    return 0;
}

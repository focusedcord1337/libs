
#ifndef BITWISE_H
#define BITWISE_H

#include <stdint.h>

#define BW_INSPECT_BYTE(x) ((int8_t *)&x)
#define BW_INSPECT_UBYTE(x) ((uint8_t *)&x)

#define BW_NOT(x) (~x)
#define BW_OR(x, y) (x | y)
#define BW_AND(x, y) (x & y)
#define BW_XOR(x, y) (x ^ y)

#define BW_NAND(x, y) (~(x & y))
#define BW_NOR(x, y) (~(x | y))
#define BW_XNOR(x, y) (~(x ^ y))

#define BW_LSHIFT(x, y) (x << y)
#define BW_RSHIFT(x, y) (x >> y)

#endif /* BITWISE_H  */

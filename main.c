
#include <gb/gb.h>
#include <stdint.h>
#include <rand.h>
#include <gb/drawing.h>
#include <stdio.h>
#include <string.h>

void main(void)
{
    uint8_t r = 0, s = 0, pOne = 0, pTwo = 0;

    do
    {
        pOne = pOne + 2;
        color(LTGREY, LTGREY, SOLID);
        box(0, 0, pOne + 1, 9, M_FILL);

        pTwo = pTwo + 2;
        color(DKGREY, DKGREY, SOLID);
        box(0, 10, pTwo + 1, 19, M_FILL);

    } while (pOne < 158 && pTwo < 158);
}

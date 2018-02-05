

/*
 * BMP image as 4bpp (16 colour index) data
 */

#include <stdint.h>
#include "Animation.h"

const uint16_t m_squint_pal[] = {
0,65535,38918,62943,950,1375,26207,2440,48893,59358,38905,34615,30260,40922,51196,21485
};

const uint8_t m_squint[] = {
24,16,
17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,25,153,17,17,17,17,17,
17,17,17,17,134,85,85,86,129,17,17,17,17,17,17,134,85,85,85,85,86,129,17,17,
17,17,24,85,85,85,85,85,85,88,17,17,17,17,133,85,85,85,85,85,85,85,129,17,
17,25,85,85,85,85,85,85,85,85,89,17,17,22,85,85,85,104,134,101,85,85,86,17,
17,149,85,85,88,17,17,22,85,85,85,145,17,133,85,85,145,17,17,17,101,85,85,129,
17,101,85,86,17,17,17,17,149,85,85,97,17,101,85,88,17,17,17,17,22,85,85,97,
17,101,85,88,17,17,17,17,22,85,85,97,17,101,85,86,17,17,17,17,149,85,85,97,
17,25,153,145,17,17,17,17,25,153,153,17,17,17,17,17,17,17,17,17,17,17,17,17,

};

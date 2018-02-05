

/*
 * BMP image as 4bpp (16 colour index) data
 */

#include <stdint.h>
#include "Animation.h"

const uint16_t m_anim_pal[] = {
0,65535,38918,62943,950,1375,26207,2440,48893,59358,38905,34615,30260,40922,51196,21485
};

const uint8_t m_cheeks[] = {
104,16,
170,170,170,170,170,170,170,170,170,170,170,170,216,136,141,170,170,174,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,173,136,136,218,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,173,131,51,51,51,141,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,216,51,51,51,56,218,170,170,170,170,170,170,170,170,170,170,170,170,
170,170,170,170,170,170,170,170,170,170,211,51,51,51,51,51,138,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,173,51,51,51,51,51,56,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,173,51,51,51,51,51,51,56,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,211,51,51,51,51,51,51,138,170,170,170,170,170,170,170,170,170,170,170,
170,170,170,170,170,170,170,170,170,211,51,51,51,51,51,51,51,138,170,170,170,170,170,170,170,170,170,170,170,170,170,170,173,51,51,51,51,51,51,51,56,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,131,51,51,51,51,51,51,51,61,170,170,170,170,170,170,170,170,170,170,170,170,170,170,168,51,51,51,51,51,51,51,51,218,170,170,170,170,170,170,170,170,170,170,
170,170,170,170,170,170,170,170,170,51,51,51,51,51,51,51,51,56,170,170,170,170,170,170,170,170,170,170,170,170,170,170,163,51,51,51,51,51,51,51,51,138,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,173,51,51,51,51,51,51,51,51,56,170,170,170,170,170,170,170,170,170,170,170,170,170,170,211,51,51,51,51,51,51,51,51,138,170,170,170,170,170,170,170,170,170,170,
170,170,170,170,170,170,170,170,173,51,51,51,51,51,51,51,51,56,170,170,170,170,170,170,170,170,170,170,170,170,170,170,211,51,51,51,51,51,51,51,51,138,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,51,51,51,51,51,51,51,51,56,170,170,170,170,170,170,170,170,170,170,170,170,170,170,163,51,51,51,51,51,51,51,51,138,170,170,170,170,170,170,170,170,170,170,
170,170,170,170,170,170,170,170,170,131,51,51,51,51,51,51,51,61,170,170,170,170,170,170,170,170,170,170,170,170,170,170,168,51,51,51,51,51,51,51,51,218,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,211,51,51,51,51,51,51,51,138,170,170,170,170,170,170,170,170,170,170,170,170,170,170,173,51,51,51,51,51,51,51,56,170,170,170,170,170,170,170,170,170,170,170,
170,170,170,170,170,170,170,170,170,168,51,51,51,51,51,51,51,218,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,131,51,51,51,51,51,51,61,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,131,51,51,51,51,51,61,173,218,170,170,170,170,170,170,170,170,170,170,170,170,170,173,168,51,51,51,51,51,51,218,170,170,170,170,170,170,170,170,170,170,170,
170,170,170,170,170,170,170,170,170,170,168,51,51,51,51,56,218,218,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,131,51,51,51,51,141,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,216,131,51,56,218,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,170,173,136,51,51,141,170,170,170,170,170,170,170,170,170,170,170,170,170,

};

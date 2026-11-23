#pragma once

// ESD discharge blew the input pin on the leftmost thumb colum on the left half
// of the unit.  If you are copying my config, be sure to remove these macros.

#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS {GP27, GP28, GP21, GP6, GP7, GP8}
#define MATRIX_COL_PINS_RIGHT {GP27, GP28, GP21, GP22, GP7, GP8}

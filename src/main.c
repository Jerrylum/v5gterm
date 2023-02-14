/* Graphical Terminal library for PROS V5
 * Copyright (c) 2022 Andrew Palardy
 * This code is subject to the BSD 2-clause 'Simplified' license
 * See the LICENSE file for complete terms
 */

/* Include our own header */
#include "pal/gterm.h"

void something() {
  /* Another line after the long one, this time in green */
  gterm_print("#00ff00 This is fun#");

  /* Include some numbers here, using printf syntax */
  double distance = 6.06;
  int state = 3;
  gterm_print("The distance was %03.3f, state is %2d", distance, state);
}

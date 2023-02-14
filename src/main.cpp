#include "main.h"

#define GTERM_IMPL
#include "pal/gterm.h"

extern "C" {
void something();
};

void initialize() {
  /* Initialize with NULL to use the default screen
   * Using pages should be supported but is untested
   */
  gterm_init(NULL);

  /* Basic print */
  gterm_print("Hello, World!");

  /* Recolor a line of text as RED:
   * Use # as an escape character
   * followed by 6 hex digits (the color)
   * then a space (it will be removed)
   * End the recoloring with a # (no space required)
   *
   * Note that due to recoloring, you cannot use '#' in your text!
   */
  gterm_print("Motor 1 has #ff0000 failed!#");

  /* Long text example - the line is truncated to fit on the screen */
  gterm_print(
      "According to all known laws of aviation, there is no way that a bee should be able to fly. Its wings are too "
      "small to get its fat little body off the ground. The bee, of course, flies anyway because bees don't care what "
      "humans think is impossible.");

  something();
}

#include "chal.h"
#include "lib/mruntime.h"
#include "lib/mstdlib.h"

// Dispatcher of character input -> group
int loadl(struct reg_t *reg) {
  if (reg->r[STATE_REG] == VERIFY_FOUND_KEY) {
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[GROUP_REG] == 0) {
    CALL_ENCODED(reg, 0x3031696f62);
  }
  /*  */
  if (reg->r[GROUP_REG] == 1) {
    CALL_ENCODED(reg, 0x3131696f62);
  }
  /*  */
  if (reg->r[GROUP_REG] == 2) {
    CALL_ENCODED(reg, 0x3231696f62);
  }
  /*  */
  if (reg->r[GROUP_REG] == 3) {
    CALL_ENCODED(reg, 0x3331696f62);
  }
  /*  */
  if (reg->r[GROUP_REG] == 4) {
    CALL_ENCODED(reg, 0x3431696f62);
  }
  /*  */
  if (reg->r[GROUP_REG] == 5) {
    CALL_ENCODED(reg, 0x3531696f62);
  }
  /*  */
  if (reg->r[GROUP_REG] == 6) {
    CALL_ENCODED(reg, 0x3631696f62);
  }
  /*  */
  if (reg->r[GROUP_REG] == 7) {
    CALL_ENCODED(reg, 0x3731696f62);
  }
  /*  */
  if (reg->r[GROUP_REG] == 8) {
    CALL_ENCODED(reg, 0x3831696f62);
  }
  /*  */
  if (reg->r[GROUP_REG] == 9) {
    CALL_ENCODED(reg, 0x3931696f62);
  }
  /*  */
  if (reg->r[GROUP_REG] == 10) {
    CALL_ENCODED(reg, 0x3032696f62);
  }
  /*  */
  if (reg->r[GROUP_REG] == 11) {
    CALL_ENCODED(reg, 0x3132696f62);
  }
  /*  */

  reg->r[STATE_REG] = FAIL_VERIFY;
  RETURN_ENCODED(reg);
}

#include "chal.h"
#include "lib/mruntime.h"
#include "lib/mstdlib.h"
#include "lib/mstring.h"

int load1(struct reg_t *reg) {
  /*  */
  if (reg->r[CHECKER_REG] == 0) {
    if (reg->r[POP_REG] == 'i') {
      reg->r[GROUP_MATCH_REG] = 11;
      reg->r[STATE_REG] = VERIFY_FOUND_KEY;
      RETURN_ENCODED(reg);
    }
    reg->r[CHECKER_REG]++;
    JUMP_ENCODED(0x3331696f62);
  }
  /*  */
  if (reg->r[CHECKER_REG] == 1) {
    if (reg->r[POP_REG] == '1') {
      reg->r[GROUP_MATCH_REG] = 12;
      reg->r[STATE_REG] = VERIFY_FOUND_KEY;
      RETURN_ENCODED(reg);
    }
    reg->r[CHECKER_REG]++;
    JUMP_ENCODED(0x3331696f62);
  }
  /*  */
  if (reg->r[CHECKER_REG] == 2) {
    if (reg->r[POP_REG] == 'b') {
      reg->r[GROUP_MATCH_REG] = 13;
      reg->r[STATE_REG] = VERIFY_FOUND_KEY;
      RETURN_ENCODED(reg);
    }
    reg->r[CHECKER_REG]++;
    JUMP_ENCODED(0x3331696f62);
  }
  /*  */
  if (reg->r[CHECKER_REG] == 3) {
    if (reg->r[POP_REG] == '2') {
      reg->r[GROUP_MATCH_REG] = 14;
      reg->r[STATE_REG] = VERIFY_FOUND_KEY;
      RETURN_ENCODED(reg);
    }
    reg->r[CHECKER_REG]++;
    JUMP_ENCODED(0x3331696f62);
  }
  /*  */
  if (reg->r[CHECKER_REG] == 4) {
    if (reg->r[POP_REG] == '7') {
      reg->r[GROUP_MATCH_REG] = 15;
      reg->r[STATE_REG] = VERIFY_FOUND_KEY;
      RETURN_ENCODED(reg);
    }
    reg->r[CHECKER_REG]++;
    JUMP_ENCODED(0x3331696f62);
  }
  /*  */
  if (reg->r[CHECKER_REG] == 5) {
    if (reg->r[POP_REG] == 'm') {
      reg->r[GROUP_MATCH_REG] = 16;
      reg->r[STATE_REG] = VERIFY_FOUND_KEY;
      RETURN_ENCODED(reg);
    }
    reg->r[CHECKER_REG]++;
    JUMP_ENCODED(0x3331696f62);
  }
  /*  */

  reg->r[CHECKER_REG] = 0;
  reg->r[GROUP_REG]++;
  RETURN_ENCODED(reg);
}
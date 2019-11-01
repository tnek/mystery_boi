#include "chal.h"
#include "lib/mruntime.h"
#include "lib/mstdlib.h"

int loadl(struct reg_t *reg) {
  /*  */
  if (reg->r[LEN_REG] == 0 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 32) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 1 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 20) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 2 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 30) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 3 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 36) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 4 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 15) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 5 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 33) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 6 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 12) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 7 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 4) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 8 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 37) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 9 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 23) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 10 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 31) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 11 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 28) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 12 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 31) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 13 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 4) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 14 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 6) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 15 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 30) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 16 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 5) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 17 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 4) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 18 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 3) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 19 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 14) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 20 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 4) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 21 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 29) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 22 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 25) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 23 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 5) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 24 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 37) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 25 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 31) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 26 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 28) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 27 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 25) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  if (reg->r[LEN_REG] == 28 + 1) {
    if (reg->r[GROUP_MATCH_REG] == 16) {
      reg->r[STATE_REG] = CORRECT_CHECKER;
      RETURN_ENCODED(reg);
    }
    reg->r[STATE_REG] = FAIL_VERIFY;
    RETURN_ENCODED(reg);
  }
  /*  */
  RETURN_ENCODED(reg);
}

#include "kitty_behavior.h"

int feed_commits(int commit_count) {
  if (commit_count <= 0)
    return -1;
  else if (commit_count < 5)
    return 0;
  else // commit_count >= 5
    return 1;
}

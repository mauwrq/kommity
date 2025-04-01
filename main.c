#include <stdio.h>
#include "git_handler.h"
#include <unistd.h>
#include "kitty_state.h"

int main () {
  int commit_count = get_commits();
  
  /*time_t time_last_fed = set_time_last_fed();*/
  time_t time_last_fed = 1743050552;
  printf("%d\n", get_hungry(time_last_fed));
}

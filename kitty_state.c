
#include <time.h>
#include "kitty_state.h"

int SECONDS_PER_DAY = 86400;

time_t set_time_last_fed() {
  return time(NULL);
}

time_t get_time_since_fed(time_t time_last_fed) {
  return time(NULL) - time_last_fed;
}

int get_days_since_fed(time_t time_last_fed) {
  return (get_time_since_fed(time_last_fed) / SECONDS_PER_DAY);
}

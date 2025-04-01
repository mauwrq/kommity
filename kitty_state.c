
#include <time.h>
#include <stdbool.h>
#include "kitty_state.h"

const int SECONDS_PER_DAY = 86400;
const int DAYS_TO_HUNGRY = 1;

time_t set_time_last_fed() {
  return time(NULL);
}

time_t get_time_since_fed(time_t time_last_fed) {
  return time(NULL) - time_last_fed;
}

int get_days_since_fed(time_t time_last_fed) {
  return (get_time_since_fed(time_last_fed) / SECONDS_PER_DAY);
}

bool get_hungry(time_t time_last_fed) {
  int days_since_fed = get_days_since_fed(time_last_fed);
  if (days_since_fed >= DAYS_TO_HUNGRY)
    return true;
  else
    return false;
}


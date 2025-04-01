#ifndef KITTY_STATE
#define KITTY_STATE

#include <time.h>

time_t set_time_last_fed();
time_t get_time_since_fed(time_t time_last_fed);
int get_days_since_fed(time_t time_last_fed);

#endif // !KITTY_STATE

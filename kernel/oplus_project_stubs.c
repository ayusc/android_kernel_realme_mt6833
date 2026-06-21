#include <linux/export.h>

#pragma GCC diagnostic ignored "-Wstrict-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-prototypes"

long get_project(void) { return 0; }
EXPORT_SYMBOL(get_project);

long is_project(void) { return 0; }
EXPORT_SYMBOL(is_project);

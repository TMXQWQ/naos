#include <libs/aether/task.h>
#include <mod/dlinker.h>

#if defined(__x86_64__)
EXPORT_SYMBOL(lapic_id);
#endif

EXPORT_SYMBOL(arch_yield);
EXPORT_SYMBOL(arch_get_current);

EXPORT_SYMBOL(task_block);
EXPORT_SYMBOL(task_unblock);

EXPORT_SYMBOL(task_create);
EXPORT_SYMBOL(task_exit);

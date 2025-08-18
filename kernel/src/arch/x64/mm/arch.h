#pragma once

#define ARCH_MAX_PT_LEVEL 4

#define ARCH_PT_OFFSET_BASE 12
#define ARCH_PT_OFFSET_PER_LEVEL 9

#include <mm/page_table.h>

#define ARCH_PT_FLAG_VALID (0x1UL << 0)
#define ARCH_PT_FLAG_WRITEABLE (0x1UL << 1)
#define ARCH_PT_FLAG_USER (0x1UL << 2)
#define ARCH_PT_FLAG_HUGE (0x1UL << 7)
#define ARCH_PT_FLAG_NX (0x1UL << 63)
#define ARCH_ADDR_MASK 0x00007FFFFFFFF000

#define ARCH_PT_TABLE_FLAGS (ARCH_PT_FLAG_VALID | ARCH_PT_FLAG_WRITEABLE)

#define ARCH_PT_IS_TABLE(x) (((x) & (ARCH_PT_FLAG_VALID | ARCH_PT_FLAG_WRITEABLE)) == (ARCH_PT_FLAG_VALID | ARCH_PT_FLAG_WRITEABLE))
#define ARCH_PT_IS_LARGE(x) (((x) & (ARCH_PT_FLAG_VALID | ARCH_PT_FLAG_HUGE)) == (ARCH_PT_FLAG_VALID | ARCH_PT_FLAG_HUGE))

uint64_t get_arch_page_table_flags(uint64_t flags);
void arch_flush_tlb(uint64_t vaddr);

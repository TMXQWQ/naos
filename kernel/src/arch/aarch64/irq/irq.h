#pragma once

#include "ptrace.h"
#include "esr.h"
#include "arch/aarch64/acpi/gic.h"

#define ARCH_TIMER_IRQ TIMER_IRQ

void arch_enable_interrupt();
void arch_disable_interrupt();

void irq_init();

void timer_handler(uint64_t irq_num, void *parameter, struct pt_regs *regs);

extern void setup_vectors();

extern uint64_t nanoTime();

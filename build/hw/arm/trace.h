/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_ARM_GENERATED_TRACERS_H
#define TRACE_HW_ARM_GENERATED_TRACERS_H

#include "qemu-common.h"
#include "trace/control.h"

extern TraceEvent _TRACE_VIRT_ACPI_SETUP_EVENT;
extern uint16_t _TRACE_VIRT_ACPI_SETUP_DSTATE;
#define TRACE_VIRT_ACPI_SETUP_ENABLED 1
#include "qemu/log-for-trace.h"


#define TRACE_VIRT_ACPI_SETUP_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_VIRT_ACPI_SETUP) || \
    false)

static inline void _nocheck__trace_virt_acpi_setup(void)
{
    if (trace_event_get_state(TRACE_VIRT_ACPI_SETUP) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:virt_acpi_setup " "No fw cfg or ACPI disabled. Bailing out." "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_virt_acpi_setup(void)
{
    if (true) {
        _nocheck__trace_virt_acpi_setup();
    }
}
#endif /* TRACE_HW_ARM_GENERATED_TRACERS_H */

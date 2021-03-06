/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_TARGET_S390X_GENERATED_TRACERS_H
#define TRACE_TARGET_S390X_GENERATED_TRACERS_H

#include "qemu-common.h"
#include "trace/control.h"

extern TraceEvent _TRACE_GET_SKEYS_NONZERO_EVENT;
extern TraceEvent _TRACE_SET_SKEYS_NONZERO_EVENT;
extern TraceEvent _TRACE_IOINST_EVENT;
extern TraceEvent _TRACE_IOINST_SCH_ID_EVENT;
extern TraceEvent _TRACE_IOINST_CHP_ID_EVENT;
extern TraceEvent _TRACE_IOINST_CHSC_CMD_EVENT;
extern TraceEvent _TRACE_KVM_ENABLE_CMMA_EVENT;
extern TraceEvent _TRACE_KVM_CLEAR_CMMA_EVENT;
extern TraceEvent _TRACE_KVM_FAILED_CPU_STATE_SET_EVENT;
extern TraceEvent _TRACE_CPU_SET_STATE_EVENT;
extern TraceEvent _TRACE_CPU_HALT_EVENT;
extern TraceEvent _TRACE_CPU_UNHALT_EVENT;
extern TraceEvent _TRACE_SIGP_FINISHED_EVENT;
extern uint16_t _TRACE_GET_SKEYS_NONZERO_DSTATE;
extern uint16_t _TRACE_SET_SKEYS_NONZERO_DSTATE;
extern uint16_t _TRACE_IOINST_DSTATE;
extern uint16_t _TRACE_IOINST_SCH_ID_DSTATE;
extern uint16_t _TRACE_IOINST_CHP_ID_DSTATE;
extern uint16_t _TRACE_IOINST_CHSC_CMD_DSTATE;
extern uint16_t _TRACE_KVM_ENABLE_CMMA_DSTATE;
extern uint16_t _TRACE_KVM_CLEAR_CMMA_DSTATE;
extern uint16_t _TRACE_KVM_FAILED_CPU_STATE_SET_DSTATE;
extern uint16_t _TRACE_CPU_SET_STATE_DSTATE;
extern uint16_t _TRACE_CPU_HALT_DSTATE;
extern uint16_t _TRACE_CPU_UNHALT_DSTATE;
extern uint16_t _TRACE_SIGP_FINISHED_DSTATE;
#define TRACE_GET_SKEYS_NONZERO_ENABLED 1
#define TRACE_SET_SKEYS_NONZERO_ENABLED 1
#define TRACE_IOINST_ENABLED 1
#define TRACE_IOINST_SCH_ID_ENABLED 1
#define TRACE_IOINST_CHP_ID_ENABLED 1
#define TRACE_IOINST_CHSC_CMD_ENABLED 1
#define TRACE_KVM_ENABLE_CMMA_ENABLED 1
#define TRACE_KVM_CLEAR_CMMA_ENABLED 1
#define TRACE_KVM_FAILED_CPU_STATE_SET_ENABLED 1
#define TRACE_CPU_SET_STATE_ENABLED 1
#define TRACE_CPU_HALT_ENABLED 1
#define TRACE_CPU_UNHALT_ENABLED 1
#define TRACE_SIGP_FINISHED_ENABLED 1
#include "qemu/log-for-trace.h"


#define TRACE_GET_SKEYS_NONZERO_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_GET_SKEYS_NONZERO) || \
    false)

static inline void _nocheck__trace_get_skeys_nonzero(int rc)
{
    if (trace_event_get_state(TRACE_GET_SKEYS_NONZERO) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:get_skeys_nonzero " "SKEY: Call to get_skeys unexpectedly returned %d" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , rc);
    }
}

static inline void trace_get_skeys_nonzero(int rc)
{
    if (true) {
        _nocheck__trace_get_skeys_nonzero(rc);
    }
}

#define TRACE_SET_SKEYS_NONZERO_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SET_SKEYS_NONZERO) || \
    false)

static inline void _nocheck__trace_set_skeys_nonzero(int rc)
{
    if (trace_event_get_state(TRACE_SET_SKEYS_NONZERO) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:set_skeys_nonzero " "SKEY: Call to set_skeys unexpectedly returned %d" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , rc);
    }
}

static inline void trace_set_skeys_nonzero(int rc)
{
    if (true) {
        _nocheck__trace_set_skeys_nonzero(rc);
    }
}

#define TRACE_IOINST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_IOINST) || \
    false)

static inline void _nocheck__trace_ioinst(const char * insn)
{
    if (trace_event_get_state(TRACE_IOINST) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:ioinst " "IOINST: %s" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , insn);
    }
}

static inline void trace_ioinst(const char * insn)
{
    if (true) {
        _nocheck__trace_ioinst(insn);
    }
}

#define TRACE_IOINST_SCH_ID_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_IOINST_SCH_ID) || \
    false)

static inline void _nocheck__trace_ioinst_sch_id(const char * insn, int cssid, int ssid, int schid)
{
    if (trace_event_get_state(TRACE_IOINST_SCH_ID) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:ioinst_sch_id " "IOINST: %s (%x.%x.%04x)" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , insn, cssid, ssid, schid);
    }
}

static inline void trace_ioinst_sch_id(const char * insn, int cssid, int ssid, int schid)
{
    if (true) {
        _nocheck__trace_ioinst_sch_id(insn, cssid, ssid, schid);
    }
}

#define TRACE_IOINST_CHP_ID_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_IOINST_CHP_ID) || \
    false)

static inline void _nocheck__trace_ioinst_chp_id(const char * insn, int cssid, int chpid)
{
    if (trace_event_get_state(TRACE_IOINST_CHP_ID) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:ioinst_chp_id " "IOINST: %s (%x.%02x)" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , insn, cssid, chpid);
    }
}

static inline void trace_ioinst_chp_id(const char * insn, int cssid, int chpid)
{
    if (true) {
        _nocheck__trace_ioinst_chp_id(insn, cssid, chpid);
    }
}

#define TRACE_IOINST_CHSC_CMD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_IOINST_CHSC_CMD) || \
    false)

static inline void _nocheck__trace_ioinst_chsc_cmd(uint16_t cmd, uint16_t len)
{
    if (trace_event_get_state(TRACE_IOINST_CHSC_CMD) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:ioinst_chsc_cmd " "IOINST: chsc command 0x%04x, len 0x%04x" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , cmd, len);
    }
}

static inline void trace_ioinst_chsc_cmd(uint16_t cmd, uint16_t len)
{
    if (true) {
        _nocheck__trace_ioinst_chsc_cmd(cmd, len);
    }
}

#define TRACE_KVM_ENABLE_CMMA_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_ENABLE_CMMA) || \
    false)

static inline void _nocheck__trace_kvm_enable_cmma(int rc)
{
    if (trace_event_get_state(TRACE_KVM_ENABLE_CMMA) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:kvm_enable_cmma " "CMMA: enabling with result code %d" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , rc);
    }
}

static inline void trace_kvm_enable_cmma(int rc)
{
    if (true) {
        _nocheck__trace_kvm_enable_cmma(rc);
    }
}

#define TRACE_KVM_CLEAR_CMMA_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_CLEAR_CMMA) || \
    false)

static inline void _nocheck__trace_kvm_clear_cmma(int rc)
{
    if (trace_event_get_state(TRACE_KVM_CLEAR_CMMA) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:kvm_clear_cmma " "CMMA: clearing with result code %d" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , rc);
    }
}

static inline void trace_kvm_clear_cmma(int rc)
{
    if (true) {
        _nocheck__trace_kvm_clear_cmma(rc);
    }
}

#define TRACE_KVM_FAILED_CPU_STATE_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_KVM_FAILED_CPU_STATE_SET) || \
    false)

static inline void _nocheck__trace_kvm_failed_cpu_state_set(int cpu_index, uint8_t state, const char * msg)
{
    if (trace_event_get_state(TRACE_KVM_FAILED_CPU_STATE_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:kvm_failed_cpu_state_set " "Warning: Unable to set cpu %d state %" PRIu8 " to KVM: %s" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , cpu_index, state, msg);
    }
}

static inline void trace_kvm_failed_cpu_state_set(int cpu_index, uint8_t state, const char * msg)
{
    if (true) {
        _nocheck__trace_kvm_failed_cpu_state_set(cpu_index, state, msg);
    }
}

#define TRACE_CPU_SET_STATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CPU_SET_STATE) || \
    false)

static inline void _nocheck__trace_cpu_set_state(int cpu_index, uint8_t state)
{
    if (trace_event_get_state(TRACE_CPU_SET_STATE) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:cpu_set_state " "setting cpu %d state to %" PRIu8 "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , cpu_index, state);
    }
}

static inline void trace_cpu_set_state(int cpu_index, uint8_t state)
{
    if (true) {
        _nocheck__trace_cpu_set_state(cpu_index, state);
    }
}

#define TRACE_CPU_HALT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CPU_HALT) || \
    false)

static inline void _nocheck__trace_cpu_halt(int cpu_index)
{
    if (trace_event_get_state(TRACE_CPU_HALT) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:cpu_halt " "halting cpu %d" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , cpu_index);
    }
}

static inline void trace_cpu_halt(int cpu_index)
{
    if (true) {
        _nocheck__trace_cpu_halt(cpu_index);
    }
}

#define TRACE_CPU_UNHALT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CPU_UNHALT) || \
    false)

static inline void _nocheck__trace_cpu_unhalt(int cpu_index)
{
    if (trace_event_get_state(TRACE_CPU_UNHALT) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:cpu_unhalt " "unhalting cpu %d" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , cpu_index);
    }
}

static inline void trace_cpu_unhalt(int cpu_index)
{
    if (true) {
        _nocheck__trace_cpu_unhalt(cpu_index);
    }
}

#define TRACE_SIGP_FINISHED_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SIGP_FINISHED) || \
    false)

static inline void _nocheck__trace_sigp_finished(uint8_t order, int cpu_index, int dst_index, int cc)
{
    if (trace_event_get_state(TRACE_SIGP_FINISHED) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:sigp_finished " "SIGP: Finished order %u on cpu %d -> cpu %d with cc=%d" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , order, cpu_index, dst_index, cc);
    }
}

static inline void trace_sigp_finished(uint8_t order, int cpu_index, int dst_index, int cc)
{
    if (true) {
        _nocheck__trace_sigp_finished(order, cpu_index, dst_index, cc);
    }
}
#endif /* TRACE_TARGET_S390X_GENERATED_TRACERS_H */

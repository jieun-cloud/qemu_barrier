/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_QOM_GENERATED_TRACERS_H
#define TRACE_QOM_GENERATED_TRACERS_H

#include "qemu-common.h"
#include "trace/control.h"

extern TraceEvent _TRACE_OBJECT_DYNAMIC_CAST_ASSERT_EVENT;
extern TraceEvent _TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT_EVENT;
extern uint16_t _TRACE_OBJECT_DYNAMIC_CAST_ASSERT_DSTATE;
extern uint16_t _TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT_DSTATE;
#define TRACE_OBJECT_DYNAMIC_CAST_ASSERT_ENABLED 1
#define TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT_ENABLED 1
#include "qemu/log-for-trace.h"


#define TRACE_OBJECT_DYNAMIC_CAST_ASSERT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_OBJECT_DYNAMIC_CAST_ASSERT) || \
    false)

static inline void _nocheck__trace_object_dynamic_cast_assert(const char * type, const char * target, const char * file, int line, const char * func)
{
    if (trace_event_get_state(TRACE_OBJECT_DYNAMIC_CAST_ASSERT) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:object_dynamic_cast_assert " "%s->%s (%s:%d:%s)" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , type, target, file, line, func);
    }
}

static inline void trace_object_dynamic_cast_assert(const char * type, const char * target, const char * file, int line, const char * func)
{
    if (true) {
        _nocheck__trace_object_dynamic_cast_assert(type, target, file, line, func);
    }
}

#define TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT) || \
    false)

static inline void _nocheck__trace_object_class_dynamic_cast_assert(const char * type, const char * target, const char * file, int line, const char * func)
{
    if (trace_event_get_state(TRACE_OBJECT_CLASS_DYNAMIC_CAST_ASSERT) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:object_class_dynamic_cast_assert " "%s->%s (%s:%d:%s)" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , type, target, file, line, func);
    }
}

static inline void trace_object_class_dynamic_cast_assert(const char * type, const char * target, const char * file, int line, const char * func)
{
    if (true) {
        _nocheck__trace_object_class_dynamic_cast_assert(type, target, file, line, func);
    }
}
#endif /* TRACE_QOM_GENERATED_TRACERS_H */
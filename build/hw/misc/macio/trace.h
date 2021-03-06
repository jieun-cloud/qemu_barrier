/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_MISC_MACIO_GENERATED_TRACERS_H
#define TRACE_HW_MISC_MACIO_GENERATED_TRACERS_H

#include "qemu-common.h"
#include "trace/control.h"

extern TraceEvent _TRACE_CUDA_DELAY_SET_SR_INT_EVENT;
extern TraceEvent _TRACE_CUDA_DATA_SEND_EVENT;
extern TraceEvent _TRACE_CUDA_DATA_RECV_EVENT;
extern TraceEvent _TRACE_CUDA_RECEIVE_PACKET_CMD_EVENT;
extern TraceEvent _TRACE_CUDA_PACKET_RECEIVE_EVENT;
extern TraceEvent _TRACE_CUDA_PACKET_RECEIVE_DATA_EVENT;
extern TraceEvent _TRACE_CUDA_PACKET_SEND_EVENT;
extern TraceEvent _TRACE_CUDA_PACKET_SEND_DATA_EVENT;
extern uint16_t _TRACE_CUDA_DELAY_SET_SR_INT_DSTATE;
extern uint16_t _TRACE_CUDA_DATA_SEND_DSTATE;
extern uint16_t _TRACE_CUDA_DATA_RECV_DSTATE;
extern uint16_t _TRACE_CUDA_RECEIVE_PACKET_CMD_DSTATE;
extern uint16_t _TRACE_CUDA_PACKET_RECEIVE_DSTATE;
extern uint16_t _TRACE_CUDA_PACKET_RECEIVE_DATA_DSTATE;
extern uint16_t _TRACE_CUDA_PACKET_SEND_DSTATE;
extern uint16_t _TRACE_CUDA_PACKET_SEND_DATA_DSTATE;
#define TRACE_CUDA_DELAY_SET_SR_INT_ENABLED 1
#define TRACE_CUDA_DATA_SEND_ENABLED 1
#define TRACE_CUDA_DATA_RECV_ENABLED 1
#define TRACE_CUDA_RECEIVE_PACKET_CMD_ENABLED 1
#define TRACE_CUDA_PACKET_RECEIVE_ENABLED 1
#define TRACE_CUDA_PACKET_RECEIVE_DATA_ENABLED 1
#define TRACE_CUDA_PACKET_SEND_ENABLED 1
#define TRACE_CUDA_PACKET_SEND_DATA_ENABLED 1
#include "qemu/log-for-trace.h"


#define TRACE_CUDA_DELAY_SET_SR_INT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CUDA_DELAY_SET_SR_INT) || \
    false)

static inline void _nocheck__trace_cuda_delay_set_sr_int(void)
{
    if (trace_event_get_state(TRACE_CUDA_DELAY_SET_SR_INT) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:cuda_delay_set_sr_int " "" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 );
    }
}

static inline void trace_cuda_delay_set_sr_int(void)
{
    if (true) {
        _nocheck__trace_cuda_delay_set_sr_int();
    }
}

#define TRACE_CUDA_DATA_SEND_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CUDA_DATA_SEND) || \
    false)

static inline void _nocheck__trace_cuda_data_send(uint8_t data)
{
    if (trace_event_get_state(TRACE_CUDA_DATA_SEND) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:cuda_data_send " "send: 0x%02x" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , data);
    }
}

static inline void trace_cuda_data_send(uint8_t data)
{
    if (true) {
        _nocheck__trace_cuda_data_send(data);
    }
}

#define TRACE_CUDA_DATA_RECV_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CUDA_DATA_RECV) || \
    false)

static inline void _nocheck__trace_cuda_data_recv(uint8_t data)
{
    if (trace_event_get_state(TRACE_CUDA_DATA_RECV) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:cuda_data_recv " "recv: 0x%02x" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , data);
    }
}

static inline void trace_cuda_data_recv(uint8_t data)
{
    if (true) {
        _nocheck__trace_cuda_data_recv(data);
    }
}

#define TRACE_CUDA_RECEIVE_PACKET_CMD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CUDA_RECEIVE_PACKET_CMD) || \
    false)

static inline void _nocheck__trace_cuda_receive_packet_cmd(const char * cmd)
{
    if (trace_event_get_state(TRACE_CUDA_RECEIVE_PACKET_CMD) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:cuda_receive_packet_cmd " "handling command %s" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , cmd);
    }
}

static inline void trace_cuda_receive_packet_cmd(const char * cmd)
{
    if (true) {
        _nocheck__trace_cuda_receive_packet_cmd(cmd);
    }
}

#define TRACE_CUDA_PACKET_RECEIVE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CUDA_PACKET_RECEIVE) || \
    false)

static inline void _nocheck__trace_cuda_packet_receive(int len)
{
    if (trace_event_get_state(TRACE_CUDA_PACKET_RECEIVE) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:cuda_packet_receive " "length %d" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , len);
    }
}

static inline void trace_cuda_packet_receive(int len)
{
    if (true) {
        _nocheck__trace_cuda_packet_receive(len);
    }
}

#define TRACE_CUDA_PACKET_RECEIVE_DATA_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CUDA_PACKET_RECEIVE_DATA) || \
    false)

static inline void _nocheck__trace_cuda_packet_receive_data(int i, const uint8_t data)
{
    if (trace_event_get_state(TRACE_CUDA_PACKET_RECEIVE_DATA) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:cuda_packet_receive_data " "[%d] 0x%02x" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , i, data);
    }
}

static inline void trace_cuda_packet_receive_data(int i, const uint8_t data)
{
    if (true) {
        _nocheck__trace_cuda_packet_receive_data(i, data);
    }
}

#define TRACE_CUDA_PACKET_SEND_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CUDA_PACKET_SEND) || \
    false)

static inline void _nocheck__trace_cuda_packet_send(int len)
{
    if (trace_event_get_state(TRACE_CUDA_PACKET_SEND) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:cuda_packet_send " "length %d" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , len);
    }
}

static inline void trace_cuda_packet_send(int len)
{
    if (true) {
        _nocheck__trace_cuda_packet_send(len);
    }
}

#define TRACE_CUDA_PACKET_SEND_DATA_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CUDA_PACKET_SEND_DATA) || \
    false)

static inline void _nocheck__trace_cuda_packet_send_data(int i, const uint8_t data)
{
    if (trace_event_get_state(TRACE_CUDA_PACKET_SEND_DATA) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:cuda_packet_send_data " "[%d] 0x%02x" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , i, data);
    }
}

static inline void trace_cuda_packet_send_data(int i, const uint8_t data)
{
    if (true) {
        _nocheck__trace_cuda_packet_send_data(i, data);
    }
}
#endif /* TRACE_HW_MISC_MACIO_GENERATED_TRACERS_H */

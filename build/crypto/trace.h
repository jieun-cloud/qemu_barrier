/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_CRYPTO_GENERATED_TRACERS_H
#define TRACE_CRYPTO_GENERATED_TRACERS_H

#include "qemu-common.h"
#include "trace/control.h"

extern TraceEvent _TRACE_QCRYPTO_TLS_CREDS_LOAD_DH_EVENT;
extern TraceEvent _TRACE_QCRYPTO_TLS_CREDS_GET_PATH_EVENT;
extern TraceEvent _TRACE_QCRYPTO_TLS_CREDS_ANON_LOAD_EVENT;
extern TraceEvent _TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_EVENT;
extern TraceEvent _TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_BASIC_CONSTRAINTS_EVENT;
extern TraceEvent _TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_KEY_USAGE_EVENT;
extern TraceEvent _TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_KEY_PURPOSE_EVENT;
extern TraceEvent _TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_CERT_EVENT;
extern TraceEvent _TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_CERT_LIST_EVENT;
extern TraceEvent _TRACE_QCRYPTO_TLS_SESSION_NEW_EVENT;
extern TraceEvent _TRACE_QCRYPTO_TLS_SESSION_CHECK_CREDS_EVENT;
extern uint16_t _TRACE_QCRYPTO_TLS_CREDS_LOAD_DH_DSTATE;
extern uint16_t _TRACE_QCRYPTO_TLS_CREDS_GET_PATH_DSTATE;
extern uint16_t _TRACE_QCRYPTO_TLS_CREDS_ANON_LOAD_DSTATE;
extern uint16_t _TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_DSTATE;
extern uint16_t _TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_BASIC_CONSTRAINTS_DSTATE;
extern uint16_t _TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_KEY_USAGE_DSTATE;
extern uint16_t _TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_KEY_PURPOSE_DSTATE;
extern uint16_t _TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_CERT_DSTATE;
extern uint16_t _TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_CERT_LIST_DSTATE;
extern uint16_t _TRACE_QCRYPTO_TLS_SESSION_NEW_DSTATE;
extern uint16_t _TRACE_QCRYPTO_TLS_SESSION_CHECK_CREDS_DSTATE;
#define TRACE_QCRYPTO_TLS_CREDS_LOAD_DH_ENABLED 1
#define TRACE_QCRYPTO_TLS_CREDS_GET_PATH_ENABLED 1
#define TRACE_QCRYPTO_TLS_CREDS_ANON_LOAD_ENABLED 1
#define TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_ENABLED 1
#define TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_BASIC_CONSTRAINTS_ENABLED 1
#define TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_KEY_USAGE_ENABLED 1
#define TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_KEY_PURPOSE_ENABLED 1
#define TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_CERT_ENABLED 1
#define TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_CERT_LIST_ENABLED 1
#define TRACE_QCRYPTO_TLS_SESSION_NEW_ENABLED 1
#define TRACE_QCRYPTO_TLS_SESSION_CHECK_CREDS_ENABLED 1
#include "qemu/log-for-trace.h"


#define TRACE_QCRYPTO_TLS_CREDS_LOAD_DH_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QCRYPTO_TLS_CREDS_LOAD_DH) || \
    false)

static inline void _nocheck__trace_qcrypto_tls_creds_load_dh(void * creds, const char * filename)
{
    if (trace_event_get_state(TRACE_QCRYPTO_TLS_CREDS_LOAD_DH) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:qcrypto_tls_creds_load_dh " "TLS creds load DH creds=%p filename=%s" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , creds, filename);
    }
}

static inline void trace_qcrypto_tls_creds_load_dh(void * creds, const char * filename)
{
    if (true) {
        _nocheck__trace_qcrypto_tls_creds_load_dh(creds, filename);
    }
}

#define TRACE_QCRYPTO_TLS_CREDS_GET_PATH_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QCRYPTO_TLS_CREDS_GET_PATH) || \
    false)

static inline void _nocheck__trace_qcrypto_tls_creds_get_path(void * creds, const char * filename, const char * path)
{
    if (trace_event_get_state(TRACE_QCRYPTO_TLS_CREDS_GET_PATH) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:qcrypto_tls_creds_get_path " "TLS creds path creds=%p filename=%s path=%s" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , creds, filename, path);
    }
}

static inline void trace_qcrypto_tls_creds_get_path(void * creds, const char * filename, const char * path)
{
    if (true) {
        _nocheck__trace_qcrypto_tls_creds_get_path(creds, filename, path);
    }
}

#define TRACE_QCRYPTO_TLS_CREDS_ANON_LOAD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QCRYPTO_TLS_CREDS_ANON_LOAD) || \
    false)

static inline void _nocheck__trace_qcrypto_tls_creds_anon_load(void * creds, const char * dir)
{
    if (trace_event_get_state(TRACE_QCRYPTO_TLS_CREDS_ANON_LOAD) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:qcrypto_tls_creds_anon_load " "TLS creds anon load creds=%p dir=%s" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , creds, dir);
    }
}

static inline void trace_qcrypto_tls_creds_anon_load(void * creds, const char * dir)
{
    if (true) {
        _nocheck__trace_qcrypto_tls_creds_anon_load(creds, dir);
    }
}

#define TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QCRYPTO_TLS_CREDS_X509_LOAD) || \
    false)

static inline void _nocheck__trace_qcrypto_tls_creds_x509_load(void * creds, const char * dir)
{
    if (trace_event_get_state(TRACE_QCRYPTO_TLS_CREDS_X509_LOAD) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:qcrypto_tls_creds_x509_load " "TLS creds x509 load creds=%p dir=%s" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , creds, dir);
    }
}

static inline void trace_qcrypto_tls_creds_x509_load(void * creds, const char * dir)
{
    if (true) {
        _nocheck__trace_qcrypto_tls_creds_x509_load(creds, dir);
    }
}

#define TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_BASIC_CONSTRAINTS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_BASIC_CONSTRAINTS) || \
    false)

static inline void _nocheck__trace_qcrypto_tls_creds_x509_check_basic_constraints(void * creds, const char * file, int status)
{
    if (trace_event_get_state(TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_BASIC_CONSTRAINTS) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:qcrypto_tls_creds_x509_check_basic_constraints " "TLS creds x509 check basic constraints creds=%p file=%s status=%d" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , creds, file, status);
    }
}

static inline void trace_qcrypto_tls_creds_x509_check_basic_constraints(void * creds, const char * file, int status)
{
    if (true) {
        _nocheck__trace_qcrypto_tls_creds_x509_check_basic_constraints(creds, file, status);
    }
}

#define TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_KEY_USAGE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_KEY_USAGE) || \
    false)

static inline void _nocheck__trace_qcrypto_tls_creds_x509_check_key_usage(void * creds, const char * file, int status, int usage, int critical)
{
    if (trace_event_get_state(TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_KEY_USAGE) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:qcrypto_tls_creds_x509_check_key_usage " "TLS creds x509 check key usage creds=%p file=%s status=%d usage=%d critical=%d" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , creds, file, status, usage, critical);
    }
}

static inline void trace_qcrypto_tls_creds_x509_check_key_usage(void * creds, const char * file, int status, int usage, int critical)
{
    if (true) {
        _nocheck__trace_qcrypto_tls_creds_x509_check_key_usage(creds, file, status, usage, critical);
    }
}

#define TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_KEY_PURPOSE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_KEY_PURPOSE) || \
    false)

static inline void _nocheck__trace_qcrypto_tls_creds_x509_check_key_purpose(void * creds, const char * file, int status, const char * usage, int critical)
{
    if (trace_event_get_state(TRACE_QCRYPTO_TLS_CREDS_X509_CHECK_KEY_PURPOSE) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:qcrypto_tls_creds_x509_check_key_purpose " "TLS creds x509 check key usage creds=%p file=%s status=%d usage=%s critical=%d" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , creds, file, status, usage, critical);
    }
}

static inline void trace_qcrypto_tls_creds_x509_check_key_purpose(void * creds, const char * file, int status, const char * usage, int critical)
{
    if (true) {
        _nocheck__trace_qcrypto_tls_creds_x509_check_key_purpose(creds, file, status, usage, critical);
    }
}

#define TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_CERT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_CERT) || \
    false)

static inline void _nocheck__trace_qcrypto_tls_creds_x509_load_cert(void * creds, int isServer, const char * file)
{
    if (trace_event_get_state(TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_CERT) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:qcrypto_tls_creds_x509_load_cert " "TLS creds x509 load cert creds=%p isServer=%d file=%s" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , creds, isServer, file);
    }
}

static inline void trace_qcrypto_tls_creds_x509_load_cert(void * creds, int isServer, const char * file)
{
    if (true) {
        _nocheck__trace_qcrypto_tls_creds_x509_load_cert(creds, isServer, file);
    }
}

#define TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_CERT_LIST_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_CERT_LIST) || \
    false)

static inline void _nocheck__trace_qcrypto_tls_creds_x509_load_cert_list(void * creds, const char * file)
{
    if (trace_event_get_state(TRACE_QCRYPTO_TLS_CREDS_X509_LOAD_CERT_LIST) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:qcrypto_tls_creds_x509_load_cert_list " "TLS creds x509 load cert list creds=%p file=%s" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , creds, file);
    }
}

static inline void trace_qcrypto_tls_creds_x509_load_cert_list(void * creds, const char * file)
{
    if (true) {
        _nocheck__trace_qcrypto_tls_creds_x509_load_cert_list(creds, file);
    }
}

#define TRACE_QCRYPTO_TLS_SESSION_NEW_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QCRYPTO_TLS_SESSION_NEW) || \
    false)

static inline void _nocheck__trace_qcrypto_tls_session_new(void * session, void * creds, const char * hostname, const char * aclname, int endpoint)
{
    if (trace_event_get_state(TRACE_QCRYPTO_TLS_SESSION_NEW) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:qcrypto_tls_session_new " "TLS session new session=%p creds=%p hostname=%s aclname=%s endpoint=%d" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , session, creds, hostname, aclname, endpoint);
    }
}

static inline void trace_qcrypto_tls_session_new(void * session, void * creds, const char * hostname, const char * aclname, int endpoint)
{
    if (true) {
        _nocheck__trace_qcrypto_tls_session_new(session, creds, hostname, aclname, endpoint);
    }
}

#define TRACE_QCRYPTO_TLS_SESSION_CHECK_CREDS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QCRYPTO_TLS_SESSION_CHECK_CREDS) || \
    false)

static inline void _nocheck__trace_qcrypto_tls_session_check_creds(void * session, const char * status)
{
    if (trace_event_get_state(TRACE_QCRYPTO_TLS_SESSION_CHECK_CREDS) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zd.%06zd:qcrypto_tls_session_check_creds " "TLS session check creds session=%p status=%s" "\n",
                 getpid(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , session, status);
    }
}

static inline void trace_qcrypto_tls_session_check_creds(void * session, const char * status)
{
    if (true) {
        _nocheck__trace_qcrypto_tls_session_check_creds(session, status);
    }
}
#endif /* TRACE_CRYPTO_GENERATED_TRACERS_H */

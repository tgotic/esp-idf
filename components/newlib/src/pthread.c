/*
 * SPDX-FileCopyrightText: 2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#include <pthread.h>
#include <signal.h>
#include "esp_log.h"

const static char *TAG = "esp32_asio_pthread";

int pthread_setcancelstate(int state, int *oldstate)
{
    return 0;
}

//  This functions (pthread_sigmask(), sigfillset) are called from ASIO::signal_blocker to temporarily silence signals
//  Since signals are not yet supported in ESP pthread these functions serve as no-ops
//
int pthread_sigmask(int how, const sigset_t *restrict set, sigset_t *restrict oset)
{
    ESP_LOGD(TAG, "%s: Signals not supported in ESP pthread", __func__);
    return 0;
}

// picolibc has sigfillset macro in signal.h
#if !CONFIG_LIBC_PICOLIBC
int sigfillset(sigset_t *what)
{
    ESP_LOGD(TAG, "%s: Signals not supported in ESP pthread", __func__);
    if (what != NULL) {
        *what = ~0;
    }
    return 0;
}
#endif /* !CONFIG_LIBC_PICOLIBC */

void esp_libc_include_pthread_impl(void)
{
    // Linker hook, exists for no other purpose
}

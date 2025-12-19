/*
 * SPDX-FileCopyrightText: 2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

// #pragma once

// #include <esp_err.h>

// #ifdef __cplusplus
// extern "C"
// {
// #endif

// esp_err_t StartWebServer(void);

// #ifdef __cplusplus
// }
// #endif

#pragma once

#include <esp_err.h>
#include "esp_http_server.h"     // <-- add this

#ifdef __cplusplus
extern "C" {
#endif

esp_err_t StartWebServer(void);

httpd_handle_t web_server_get_handle(void);   // <-- add this

#ifdef __cplusplus
}
#endif
 

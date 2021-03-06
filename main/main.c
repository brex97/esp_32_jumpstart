/**
 * @file main.c
 * @author brex97 (github)
 * @brief 
 * @date 2021-11-22
 *
 */

//--------------------------------- INCLUDES ----------------------------------
#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"

//---------------------------------- MACROS -----------------------------------
//-------------------------------- DATA TYPES ---------------------------------
//---------------------- PRIVATE FUNCTION PROTOTYPES --------------------------
//------------------------- STATIC DATA & CONSTANTS ---------------------------
//------------------------------- GLOBAL DATA ---------------------------------
//------------------------------ PUBLIC FUNCTIONS -----------------------------
void app_main(void)
{
    printf("Hello world!\n");

    /* Print chip information */
    esp_chip_info_t chip_info;
    esp_chip_info(&chip_info);
    printf("This is %s chip with %d CPU core(s), WiFi%s%s, ",
            CONFIG_IDF_TARGET,
            chip_info.cores,
            (chip_info.features & CHIP_FEATURE_BT) ? "/BT" : "",
            (chip_info.features & CHIP_FEATURE_BLE) ? "/BLE" : "");

    printf("silicon revision %d, ", chip_info.revision);

    for (;;)
    {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}

//---------------------------- PRIVATE FUNCTIONS ------------------------------

//---------------------------- INTERRUPT HANDLERS -----------------------------

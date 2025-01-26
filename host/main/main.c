#include <pthread.h>
#include "esp_system.h"  // Include the header for esp_restart
#include "esp_log.h"     // Include the header for ESP logging

static const char *TAG = "main";  // Define a tag for logging

// Function to be executed by the new thread
void* print_message(void* arg) {
    ESP_LOGI(TAG, "Hello, Host!");
    return NULL;
}

int app_main() {
    pthread_t thread;

    // Create a new thread that runs the print_message function
    pthread_create(&thread, NULL, print_message, NULL);

    // Wait for the created thread to terminate
    pthread_join(thread, NULL);

    // Restart the ESP32 chip
    esp_restart();

    return 0;  // This line will not be reached
}
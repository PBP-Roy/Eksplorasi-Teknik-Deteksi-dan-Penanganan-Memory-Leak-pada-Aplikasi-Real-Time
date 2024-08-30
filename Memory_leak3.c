#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void read_sensor() {
    // Simulasi pembacaan data sensor
    int *data = (int *)malloc(sizeof(int) * 100);  // Potensi memory leak
    if (data == NULL) {
        perror("Gagal mengalokasikan memori");
        exit(1);
    }
    // Simulasi pengolahan data
    for (int i = 0; i < 100; i++) {
        data[i] = i;
    }
    // Memori tidak dibebaskan
    // free(data); // Baris ini di-comment untuk mensimulasikan memory leak
}

int main() {
    printf("Program monitoring sensor\n");
    while (1) {
        read_sensor();
        // Simulasi delay untuk real-time
        // Sleep(100);  // 100ms
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main() {
    int *ptr;

    // Allocate memory
    for (size_t i = 0; i < 5000; i++)
    {
       ptr = (int *)malloc(sizeof(int) * 1000);
    }
    
    

    printf("Memory allocated and filled with garbage value\n");
    
    // Forget to free allocated memory
    // free(ptr);
    Sleep(5000);  // Delay for 1 second
    // Program ends without freeing memory
    return 0;
}

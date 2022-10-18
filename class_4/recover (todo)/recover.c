#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint8_t BYTE:

int main(int argc, char *argv[])
{
    // Command line checker
    if (argc != 2) {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }
    // Open file
    FILE *input_file = fopen(argv[1], "r");

    // Check if file is valid

    if (input_file == NULL) {
        printf("Can't open file");
        return 2;
    }
    
    
    // Store chucnks of 512 bytes inside array
    
    unsigned char buffer[512];
    
    //track images generated
    
    int count_image = 0;
    
    // File pointer for recovered images 
    
    FILE *output_file = NULL;
    
    // char filename[8]
    
    char *filename = malloc(8 * sizeof(char));
}
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int main(void) {
  int start_size;
  int end_size;
  // START AND END SIZE
  int valid_input = 1;
  while (valid_input != 0) {
    start_size = get_int("Start size: ");
    if (start_size >= 9) {
      valid_input = 0;
      int valid_input_end = 1;
      while (valid_input_end != 0) {
        end_size = get_int("End size: ");
        int years = 0;
        if (end_size >= start_size) {
          valid_input_end = 0;
        }
      }
    }
  }

  int years = 0;

  while (start_size < end_size) {
    start_size = start_size + (start_size / 3) - (start_size / 4);
    years++;
  }

  printf("Years: %d\n", years);

}
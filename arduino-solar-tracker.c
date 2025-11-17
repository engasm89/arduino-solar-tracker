#include <stdio.h> // Include I/O for tracker logs

int main(void) { // Entry
  printf("Arduino Solar Tracker\n"); // Title
  printf("Read LDRs and adjust servo towards brighter side\n"); // Control
  printf("Periodically re-evaluate to track movement\n"); // Loop
  return 0; // Exit
} // End main

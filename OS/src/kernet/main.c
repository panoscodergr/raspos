#include "usb.h"
#include "file.h"

void kernel_main() {
    usb_initialize();       // Αρχικοποίηση USB
    file_system_init();     // Αρχικοποίηση συστήματος αρχείων
    terminal_initialize();  // Εκκίνηση τερματικού

    while (1) {
        terminal_run();     // Τρέξε τερματικό
    }
}

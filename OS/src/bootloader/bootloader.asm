.section .text
.global _start

_start:
    mov sp, #0x8000        ; Ρύθμιση στοίβας
    ldr r0, =kernel_main   ; Διεύθυνση του kernel_main
    bl kernel_main         ; Κλήση της κύριας συνάρτησης του πυρήνα
    b .                    ; Ατέρμονος βρόχος

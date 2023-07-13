#include "mbed.h"

// main() runs in its own thread in the OS
int main()
{#include "mbed.h"

// Create a DigitalOut object for the LED. LED1 is typically the built-in LED for an mbed board.
DigitalOut myled(LED1);

// Set up the serial connection with a baud rate of 9600
Serial pc(USBTX, USBRX);
 
int main() {
    pc.baud(9600);  // Set baud rate for serial communication
    while(1) {
        myled = 1; // LED is ON
        pc.printf("Green LED is ON\r\n"); // Send data to CoolTerm
        wait(1); // Wait for one second
        myled = 0; // LED is OFF
        pc.printf("Green LED is OFF\r\n"); // Send data to CoolTerm
        wait(1); // Wait for one second
    }
}

    while (true) {

    }
}


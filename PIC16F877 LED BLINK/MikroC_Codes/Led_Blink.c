/*
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
                            LED FLASH Program
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
This program flashes an LED connected with pin RBO of PORTB with 
one second intervals.
Coded by        : Golam Mostofa
Date            : 18.03.2005
MCU             : 16F877A @ 4.00 MHz
Compiler        : MikroC pro for PIC (Vr. 6.0)
File name       : LED.c
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
void main() {
     TRISB = 0b00000000; // 0B11111110;     // Declaring Input Output of PORTB
     PORTB = 0x00;  // PORT Refreshing intensionally
     TRISD = 0b00000000;
       while(1){
          // PORTB.B0 = 1;             // RB0 High
          PORTB = 0b00000001;          // RB0 High
          Delay_ms (1000);             // Delay One Second
          PORTB = 0b00000000;          // RB0 Low
          Delay_ms (1000);             // Delay One Second

          PORTD = 0b00100000;          // RB0 High
          Delay_ms (1000);             // Delay One Second
          PORTD = 0b00000000;          // RB0 Low
          Delay_ms (1000);             // Delay One Second

        }
 }

//#include "LCD_HD44780.c"

unsigned int temp_c = 32;


 // Function Declarations
void WriteCommandToLCD(unsigned char);
void WriteDataToLCD(char);
void InitLCD(void);
void WriteStringToLCD(const char*);
void ClearLCDScreen(void);
void GotoYXPositionOnLCD(unsigned char,unsigned char);
void WriteLCDLine1(const char*);
void WriteLCDLine2(const char*);
void WriteLCDLine3(const char*);
void WriteLCDLine4(const char*);
void ToggleEpinOfLCD(void);

void welcome_msg(void);






/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
void  init_main(){
//     ADCON1      = 0X06;
     TRISB       = 0x00;
     TRISC       = 0x00;
     TRISE       = 0x00;
     TRISA       = 0x01;
     TRISD       = 0x00;
     PORTA       = 0;  //
     PORTB       = 0;
     PORTC       = 0;

    }
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/






void main() {
     init_main();
     InitLCD();
     welcome_msg();
     ClearLCDScreen();               // Clear display  +++++++++++++++++|||||

     WriteLCDLine1("Temp. C =");
     GotoYXPositionOnLCD(1, 10);
     WriteDataToLCD((temp_c/10)%10 + 48);
     WriteDataToLCD(temp_c%10 + 48);


     while(1);

}
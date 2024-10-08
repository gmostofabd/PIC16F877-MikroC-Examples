

/*##############################################################################
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
##############################################################################*/
// Define which port is being used for data bus
#define LCD_PORT      PORTD
#define LCD_RS        PORTC.B0
#define LCD_EN        PORTC.B1
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// Constants
#define E_Delay       100
#define LCD_LINE1     0
#define LCD_LINE2     1
#define LCD_LINE3     2
#define LCD_LINE4     3
/*##############################################################################
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
##############################################################################*/



/*##############################################################################
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
##############################################################################*/
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
/*##############################################################################
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
##############################################################################*/
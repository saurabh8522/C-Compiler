/* ANSI colour library codes
* {@link https://github.com/shiena/ansicolor/blob/master/README.md}
*
* Usage: printf(FORE_BLU "This is blue text" RESET);
*        printf(FORE_RED "This is %s text" RESET, "red");
*
*/

// Resets All colour attributes to initial terminal state
#define RESET  "\x1B[0m"

// Foreground Colours
#define FORE_RED  "\x1B[31m"
#define FORE_GRN  "\x1B[93m"
#define FORE_YEL  "\x1B[94m"
#define FORE_BLU  "\x1B[95m"
#define FORE_MAG  "\x1B[96m"
#define FORE_CYN  "\x1B[97m"
#define FORE_WHT  "\x1B[98m"

// Background Colours
#define BACK_YEL "\x1b[43m"

// Other Attributes
#define ATTR_BOLD "\x1b[1m"

// Symbols
#define SYMBOL_TICK "\xE2\x9C\x93"

#define DASHES "======================================================================================\n"

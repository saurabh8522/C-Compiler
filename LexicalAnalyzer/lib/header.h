#include<stdbool.h>

#ifndef _SYMBOL_TABLE
#define _SYMBOL_TABLE
typedef struct symbol_node symbol_node;
// All colours
#define RESET  "\x1B[0m"
#define COL_RED  "\x1B[31m"
#define COL_GRN  "\x1B[93m"
#define COL_YEL  "\x1B[94m"
#define COL_BLU  "\x1B[95m"
#define COL_MAG  "\x1B[96m"
#define COL_CYN  "\x1B[97m"
#define COL_WHT  "\x1B[98m"

// Background Colours
#define BACK_YEL "\x1b[43m"

// Other Attributes
#define ATTR_BOLD "\x1b[1m"

// Symbols
#define SYMBOL_TICK "\xE2\x9C\x93"

#define DASHES "================================================================================================================================\n"

struct symbol_node {
  char *symbol;
  char *type;
  int line_number;
  symbol_node *next;
};

#define TABLE_SIZE 100

// Function declarations

void insert(symbol_node **symbol_table, const char* symbol, const char *type, const int line_number);

bool lookup(symbol_node **symbol_table, const char* symbol);

void print(symbol_node **symbol_table, const char *table_name);

#endif

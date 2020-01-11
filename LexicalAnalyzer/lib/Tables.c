#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "header.h"

int hash(const char *symbol){

   return ((int)symbol[0]) % TABLE_SIZE;      // find appropriate index
}

symbol_node *create_node(const char* symbol, const char *type, const int line_number){

   symbol_node *node = malloc(sizeof(symbol_node));
   node->symbol = malloc(sizeof(char) * (strlen(symbol) +1));
   strcpy(node->symbol, symbol);
   node->type = (char*)type;
   node->line_number = line_number;
   node->next = NULL;
   return node;
}

void insert(symbol_node **symbol_table, const char* symbol, const char *type, const int line_number){
   if(lookup(symbol_table, symbol)){
     return;                       // if symbol found return
   }
   int hash_index = hash(symbol);
   symbol_node *node = create_node(symbol, type, line_number);
   symbol_node *curr = symbol_table[hash_index];
   while(curr != NULL && curr->next != NULL){
      curr = curr->next;                      // traverse till end of linked list
   }
   if(curr == NULL){
      symbol_table[hash_index] = node;
   }
   else{
      curr->next= node;
   }
}

bool lookup(symbol_node **symbol_table, const char* symbol){
   int hash_index = hash(symbol);
   for(symbol_node *curr = symbol_table[hash_index]; curr != NULL; curr = curr->next){
      if(!strcmp(curr->symbol, symbol)){
         return true;   // if found return true
      }
   }
   return false;        // not found return false
}

void print(symbol_node **symbol_table, const char *table_name){
   printf("\n\n" COL_MAG DASHES RESET);
   printf(COL_CYN "\t\t\t\t\t\t\t%s\t\n" RESET, table_name);
   printf(COL_YEL DASHES RESET);

   printf(COL_GRN "|\t%-20s" "|\t%-20s" "|\t%-20s|" "\n" RESET, "Symbol", "Type", "Line Number");
   printf(COL_YEL DASHES RESET);

   for(int i=0; i< TABLE_SIZE; ++i){
      for(symbol_node *curr = symbol_table[i]; curr != NULL; curr = curr->next){
         printf(COL_GRN "|\t%-20s" "|\t%-20s" ATTR_BOLD "|\t%-20d|" "\n" RESET, curr->symbol, curr->type, curr->line_number);
      }
   }

   printf(COL_MAG DASHES RESET "\n\n");
}

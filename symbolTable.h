#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100

int is_func = 0;
int arr[5];

typedef struct TableEntry {
    char name[SIZE];
    char* type;
    int line;
    int col;
} TableEntry;

typedef struct ListNode {
    TableEntry entry;
    struct ListNode* next;
} ListNode;

ListNode* sym_tbl[SIZE];
void nullify_sym_tbl() {
    for (int i = 0; i < SIZE; i++) {
        sym_tbl[i] = NULL;
    }
}
 
int hash(char name[]) {
    int k = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        k += name[i];
    }
    return (k % SIZE);
}
 
ListNode* search(char name[]) {
    int idx = hash(name);
    for (ListNode* node = sym_tbl[idx]; node != NULL; node = node->next) {
        if (strcmp(name, node->entry.name) == 0) {
            return node;
        }
    }
    return NULL;
}

void insert(char name[], char* type, int line, int col) {

	if (search(name) != NULL) {
		return;
	}
	if ((strcmp(name, " ") == 0) || (strcmp(name, "\t") == 0) || (strcmp(name, "\n") == 0)) {
		return;
	}
    int idx = hash(name);
    ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
    int i;
    for (i = 0; name[i] != '\0'; i++) {
        new_node->entry.name[i] = name[i];
    }
    new_node->entry.name[i] = name[i];
    new_node->entry.type = type;
    new_node->entry.line = line;
    new_node->entry.col = col;
    new_node->next = NULL;
   
    if (sym_tbl[idx] == NULL) {
        sym_tbl[idx] = new_node;
        return;
    }
    ListNode* node = NULL;
    for (node = sym_tbl[idx]; node->next != NULL; node = node->next);
    node->next = new_node;
}
 
void print_sym_tbl() {
    FILE* st = fopen("symbolTable.output", "w");
    
	fprintf(st, "|%-3s|%-15s|%-18s|%-5s|%-5s|\n", "IDX", "NAME", "TYPE", "LINE", "COL");
    for (int i = 0; i < SIZE; i++) {
        if (sym_tbl[i] != NULL) {
            for (ListNode* node = sym_tbl[i]; node != NULL; node = node->next) {
                fprintf(st, "|%-3d|%-15s|%-18s|%-5d|%-5d|\n", i, node->entry.name, node->entry.type, node->entry.line, node->entry.col);
            }
        }
    }
}
 
#ifndef LIST_CONFIG_H
#define LIST_CONFIG_H

#include <cstdint>

#define LIST_ANTI_FOOL
#define LIST_EXTENSIBLE
#define LIST_LOGIC_INDEX

#define LIST_ITEM_SPECIFIER "lg"

typedef double  list_item_t;
typedef ssize_t list_index_t;

const list_index_t LIST_MAX_CAPACITY   = SSIZE_MAX >> 1;
const char         LIST_DUMP_PATH[100] = "list_dump.html";

#endif // LIST_CONFIG_H

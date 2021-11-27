//
// Created by User on 12.11.2021.
//

#ifndef LIST_DUMP_H
#define LIST_DUMP_H

#include "list.h"

const char LIST_DOTFILE_PATH[100] = "dotfile.txt";

void list_dump_init();

void list_dump(const List *const p_list);

#endif // LIST_DUMP_H

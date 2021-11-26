//
// Created by User on 12.11.2021.
//

#ifndef LIST_H
#define LIST_H

#include <cstddef>
#include <cassert>
#include <cstdio>
#include "config.h"

const list_index_t LIST_FAULT = -1;
         
struct ListNode
{
   list_item_t  item;
   list_index_t prev;
   list_index_t next;
};

struct List
{
   #ifdef    LIST_LOGIC_INDEX
   list_index_t  shift;
   #endif // LIST_LOGIC_INDEX
   
   list_index_t  capacity;
   list_index_t  size;
   list_index_t  free;
   ListNode     *nodes;
};

list_index_t list_construct(List *const p_list, const list_index_t n_items);

void         list_destruct(List *const p_list);


list_index_t list_insertAfter(List *const p_list, const list_item_t item, const list_index_t index);

list_index_t list_insertBefore(List *const p_list, const list_item_t item, const list_index_t index);

list_index_t list_pushBack(List *const p_list, const list_item_t item);

list_index_t list_pushFront(List *const p_list, const list_item_t item);


list_index_t list_extract(List *const p_list, list_item_t *const p_output, const list_index_t index);

list_index_t list_popBack(List *const p_list, list_item_t *const p_output);

list_index_t list_popFront(List *const p_list, list_item_t *const p_output);

#ifdef    LIST_LOGIC_INDEX
list_index_t list_sort_XXX_THE_FASTEST_SORT_IN_THE_WORLD(List *const p_list);

list_index_t list_find_physIndex(const List *const p_list, const list_index_t logicIndex);
#endif // LIST_LOGIC_INDEX
#endif // LIST_H

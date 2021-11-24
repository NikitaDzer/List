#include "./include/list.h"
#include "include/dump.h"

int main()
{
   list_dump_init();
   
   list_item_t item = 0;
   List list        = {0};
   
   list_construct(&list, 8);

   list_pushBack(&list, 100);
   list_pushBack(&list, 200);
   list_pushBack(&list, 300);
   
   list_extract(&list, &item, 2);
   list_extract(&list, &item, 1);
   
   list_pushBack(&list,  400);
   list_pushFront(&list, 500);
   
   list_popBack(&list, &item);
   list_extract(&list, &item, 1);
   
   list_pushBack(&list, 600);
   list_pushFront(&list, 700);
   
   list_dump(&list);
   
   list_destruct(&list);
   
   return 0;
}

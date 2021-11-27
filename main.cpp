#include "./include/list.h"
#include "include/dump.h"

int main()
{
   list_dump_init();
   
   list_item_t item = 0;
   List list        = {0};
   
   list_pushBack(&list, 100);
   list_construct(&list, 8);
   
   list_pushBack(&list, 100);
   list_pushFront(&list, 90);
   list_pushBack(&list, 200);

   list_popFront(&list, &item);
   list_extract(&list, &item, 1);

   list_insertBefore(&list, 0, 300);
   list_pushBack(&list, 400);
   list_pushFront(&list, 80);
   
   list_dump(&list);
   
//   list_pushFront(&list, 70);
   list_sort_XXX_THE_FASTEST_SORT_IN_THE_WORLD(&list);
   list_dump(&list);
   
   list_destruct(&list);
   
   return 0;
}

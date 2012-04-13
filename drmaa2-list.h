#ifndef DRMAA2_LIST_H
#define DRMAA2_LIST_H

#include "drmaa2.h"


typedef struct drmaa2_list_item_s {
	void *data;
	struct drmaa2_list_item_s *next;
} drmaa2_list_item_s;
typedef drmaa2_list_item_s *drmaa2_list_item;

typedef struct drmaa2_list_s {
  drmaa2_listtype type;
  int size;
  void * head;
} drmaa2_list_s;



char **stringlist_get_array(drmaa2_list l);
void stringlist_free_array(char **array);


#endif DRMAA2_LIST_H

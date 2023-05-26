
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include "list.h"

int count = 0;

void list(char* input)
{
    int i = 1;
    char *ptr = strtok(input, " _");
    char list_input[10][10] = {'\0',};
    strcpy(list_input[0], ptr);
    while (1)
    {
        ptr = strtok(NULL, " _");
        if (ptr == NULL) break;
        strcpy(list_input[i], ptr);
        i++;
    }
    if (!strcmp(list_input[1], "push") && !strcmp(list_input[2], "front"))
    {
    
        int i;
            for (i = 0; i < 20; i++)
            {
                if (strcmp(list_input[3], node_list[i].name)==0) break;
            }
            struct list_item *item = (struct list_item*)malloc(sizeof(struct list_item));
            
          
        
            //item = list_entry(&(item->elem),struct list_item,elem);
        
            item->data = atoi(list_input[4]);
        
        list_push_front(node_list[i].list, &item->elem);
    }
    else if (!strcmp(list_input[1], "push") && !strcmp(list_input[2], "back"))
    {
        int i;
        for (i = 0; i < 20; i++)
        {
            if (strcmp(list_input[3], node_list[i].name) == 0) break;
        }
        struct list_item *item = (struct list_item*)malloc(sizeof(struct list_item));

        
      //  item = list_entry(&(item->elem),struct list_item,elem);
        item->data = atoi(list_input[4]);
        
        list_push_back(node_list[i].list, &item->elem);
    }
    else if (!strcmp(list_input[1], "pop") && !strcmp(list_input[2], "front"))
    {
        int i;
        for (i = 0; i < 20; i++)
        {
            if (strcmp(list_input[3], node_list[i].name) == 0) break;
        }
        list_pop_front(node_list[i].list);
    }
    else if (!strcmp(list_input[1], "pop") && !strcmp(list_input[2], "back"))
    {
        int i;
        for (i = 0; i < 20; i++)
        {
            if (strcmp(list_input[3], node_list[i].name) == 0) break;
        }
        list_pop_back(node_list[i].list);
    }
}
void create(char* input)
{

    int i = 1;
    char *ptr = strtok(input, " ");
    char list_create[10][10] = {'\0',};
    strcpy(list_create[0], ptr);
    while (1)
    {
        if (ptr == NULL) break;
        ptr = strtok(NULL, " ");
        strcpy(list_create[i], ptr);
        i++;
    }
    if (strcmp(list_create[1], "list") == 0)
    {
        
        if (strncmp(list_create[2], "list", 4)==0)
        {
            node_list[count].list = (struct list*)malloc(sizeof(struct list));
            list_init(node_list[count].list);
            strcpy(node_list[count].name, list_create[2]);
            count++;
        }
        
    }
}

int main() {
    
    
    while (1) {
        char input[100];
        fgets(input, 100,stdin);
        //scanf("%[^\n]s",input);
        input[strlen(input)]='\0';
        if (strcmp(input, "quit")==0) return 0;
        else if (!strncmp(input, "create", 6)) create(input);
    //    else if (!strncmp(input, "dumpdata", 8)) dumpdata(input);
    //    else if (!strncmp(input, "delete", 6)) delete(input);
      //  else if (!strncmp(input, "list", 4)) list(input);
    }

}







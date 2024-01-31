#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#define offsetof(struct_name, field_name)(unsigned int)&((struct_name *)0)->field_name

typedef struct emp_ {
    char name[30];
    unsigned int salary;
    char designation[30];
    unsigned int emp_id;
} empt_t;

void main()
{

    int n = offsetof(empt_t, emp_id);

    printf("offset %d\n",n);

}

Doubly Linked List Implementation
Overview
This project provides a simple implementation of a doubly linked list in C using the dlistint_t data structure. It includes basic operations such as initialization, insertion, deletion, and traversal.

Data Structure
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

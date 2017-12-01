# Linked List

## Structure

Each node conains data and **the address of the next node**
```
struct Node {string info; Node * next};

Node *ptr1 = NULL, *ptr2 = NULL;
ptr1 = new Node; ptr2 = new Node;

ptr1->info = "1";
ptr2->info = "2";

ptr1->next = ptr2;
ptr2->next = NULL;
```

## Operations

```
class Node{
public:
    /* data */
    Node *next;
};
```

### Insertion at the head

1. new node
2. (node) point to the list
3. (list) point to the node
```
Node *p = new Node;
/* save data in the node */
p->next = plist;
plist = p;
```

### Deletion at the head

1. temporary pointer point to the first node
2. (list) point to the second node
3. delete the first node
```
Node *p = plist;
plist = plist->next;
delete p;
```

### Traversing a list

```
Node *t = plist;
while (t != NULL){
    /* access the data */
    t = t->next;
}
```

# Recursive Function
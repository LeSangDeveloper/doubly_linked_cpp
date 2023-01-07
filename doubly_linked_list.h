#ifndef __DOUBLY_LINKED_LIST_H__
#define __DOUBLY_LINKED_LIST_H__

template<typename E>
class DLinkedList;

template<typename E>
class DNode {
    private:
        E elem;
        DNode* prev;
        DNode* next;
        friend class DLinkedList<E>;
};

template<typename E>
class DLinkedList {
    
};

#endif
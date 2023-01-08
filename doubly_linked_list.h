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
    private:
        DNode<E>* header;
        DNode<E>* trailer;
    protected:
        void add(DNode<E>* v, const E&e);
        void remove(DNode<E>* v);
    public:
        DLinkedList();
        ~DLinkedList();
        bool empty() const;
        const E& front() const;
        const E& back() const;
        void addFront(const E& e);
        void addBack(const E& e);
        void removeFront();
        void removeBack();
};

#endif
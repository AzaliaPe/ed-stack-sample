#include "Node.hh"

class Stack
{
    private:
        Node* first{}; //La cabeza de la pila
    public:
        Stack();
        ~Stack();
        void Pop();
        Book* Peek() const;
        void Add(Book*); //Push
        bool IsEmpty() const;
        void Print();
};
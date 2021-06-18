#include "Forward_List.h"

template <typename T>
Flist<T>::Flist():head{nullptr}{}

template <typename T>
Flist<T>::~Flist(){
    // to be implemented
}

template <typename T>
void Flist<T>::push_back(const T& elem){
    Node<T>* tmp = new Node<T>(elem);
    tmp->next = nullptr;
    if(head == nullptr){
       
        head=tmp;
    }
    else{
       Node <T>* t = head;
        while(t->next! = nullptr){
            t = t->next; 
        }
        t->next = tmp;
    }
    ++size;
}

template<typename T>
void Flist<T>::push_front(const T& elem){
    Node<T>* tmp=new Node<T>(elem);
    
    if(head == nullptr){
        head = tmp;
        tmp->next = nullptr;
    }
    else{
        tmp = head;
        head = tmp;
    }
    ++siza;
}

template<typename T>
void Flist<T>::insert(size_t idx, const T& elem){
     Node<T>* tmp = new Node<T>(elem);
    if(idx == 0 && head == nullptr){
        tmp->next = nullptr;
        head = tmp;
    }
    else if(idx = 0){
        tmp = head;
        head = tmp;
    }
    else{
        Node <T>* t = head;
        int count = 0;
        while(count<idx){
            t = t->next; 
            ++count;
        }
        tmp->next = t;
        t->next = tmp;
    }
    ++size;
}
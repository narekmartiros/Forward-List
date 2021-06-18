#include <cstddef>

template <typename T>
struct Node 
{
    Node<T>* next;
    T data;
    Node(const T& elem):data{elem}{};
};


template<typename T>
class Flist 
{
public:
    Flist();
    ~Flist();
    void push_back(const T& elem);
    void push_front(const T& elem);
    void insert(size_t idx, const T& elem);
    
private:
    Node<T>* head;
    size_t size = 0;
};




  

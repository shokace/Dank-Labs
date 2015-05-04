 #ifndef QUEUE_H
#define QUEUE_H

template <class DataType>
struct Node
{
    DataType info;
    Node<DataType> *next;
};

template <class DataType>
class Queue
{
private:
    Node<DataType> *front;
    Node<DataType> *back;
    Node<DataType> header;
    inline void deepCopy(const Queue<DataType> & original);

public:
    Queue();
    Queue(const Queue<DataType> & apqueue);
    ~Queue();
    Queue<DataType> & operator=(const Queue<DataType> &rqueue);
    void enqueue(const DataType & element);
    bool dequeue(DataType & deqElement);
    bool peek(DataType & frontElement);
    bool isEmpty() const;
    void makeEmpty();
};

template <class DataType>
Queue<DataType>::Queue()
{
    front = back = &header;
}

template <class DataType>
Queue<DataType>::Queue(const Queue<DataType> & apqueue)
{
    deepCopy(apqueue);
}

template <class DataType>
Queue<DataType>::~Queue()
{
    makeEmpty();
}

template <class DataType>
Queue<DataType> & Queue<DataType>::operator=(const Queue<DataType> & rqueue)
{
    if (this == &rqueue)
    {
        return *this;
    }
    makeEmpty();
    deepCopy(rqueue);
    return *this;
}

template <class DataType>
void Queue<DataType>::enqueue(const DataType & element)
{
    Node<DataType> *ptr = new Node <DataType>;
    ptr->info = element;
    back->next = ptr;
    back = ptr;
}

template <class DataType>
bool Queue<DataType>::dequeue(DataType & deqElement)
{
    if (front == back)
    {
        return false;
    }

    Node<DataType> *ptr = front->next;
    deqElement = ptr->info;
    front->next = ptr->next;
    if (back == ptr)
        back = front;
    delete ptr;

    return true;
}


template <class DataType>
bool Queue<DataType>::peek(DataType & frontElement)
{
    if (front == back)
        return false;
    frontElement = front->next->info;
}

template <class DataType>
void Queue<DataType>::makeEmpty()
{
    DataType temp;
    while (dequeue(temp));
}

template <class DataType>
bool Queue<DataType>::isEmpty() const
{

    if (front == back)
    {
        return true;
    }
    else return false;
}

template <class DataType>
inline void Queue<DataType>::deepCopy(const Queue<DataType> &original)
{
    Node<DataType> *copyptr = front = &header;
    Node<DataType> *originalptr = &original.front;
    while (originalptr != original.back)
    {
        originalptr = originalptr->next;
        copyptr->next = new Node < DataType >;
        copyptr = copyptr->next;
        copyptr->info = originalptr->info;

    }
    back = copyptr;


}


#endif

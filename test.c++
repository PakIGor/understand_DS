#include<iostream>
#include<string>
using namespace std;

template<typename T>//list is shablone, type data which we get
class List{
public:
        List();
        ~List();

        void push_back(T data);// add in end of list
private:

    template<typename T>//shablon чтобы жестко не привязывать какойто конкретный элемент
    class Node{
    public:
        Node *pNext;//указатель на сл эл
        T data;// info
        Node(T data = T(), Node *pNext = nullptr){// by def pNext is null pointer in list
            this->data = data;
            this->pNext = pNext;
        }
    };

    int Size;// count el and return it and update it after add or del el in list
    Node<T> head;// head of list

};
 
template<typename T>
List<T>::List()
{
    Size = 0;
    head = nullptr;// our list is empty in present time
}
template<typename T>
List<T>::~List()
{
}

template <typename T>
void List<T>::push_back(T data)
{

}

int main(){
    setlocale(LC_ALL,"ru");//include russian lang
    cout<<"\n\n\nGod bless!"<<endl;


    return 0;
}
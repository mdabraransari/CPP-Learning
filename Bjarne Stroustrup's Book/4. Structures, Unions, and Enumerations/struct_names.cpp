struct List;

struct Link 
{
    Link* pre;
    Link* suc;
    List* memeber_of;
    int data;
};
struct List {
    Link* head;
};
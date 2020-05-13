#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

void display(Node *node);
Node *addAtBeg(Node *node, int num);

int main()
{
    Node *start = NULL;
    int select, num;
    bool runApp = true;

    do
    {
        system("cls");
        cout << "1. Display\n";
        cout << "1. Add node at begining of list (first input)\n";
        cout << "9. Exit\n";
        cout << "Masukan Pilihan = ";
        cin >> select;

        switch (select)
        {
        case 1:
            display(start);
            break;
        case 2:
            system("cls");
            cout << "Enter number to be inserted = ";
            cin >> num;
            start = addAtBeg(start, num);
            break;
        case 9:
            runApp = false;
            break;
        default:
            cout << "Invalid Selection";
        }

    } while (runApp);

    system("pause");
    return 0;
}

void display(Node *node)
{
    Node *p;
    if (node == NULL)
    {
        cout << "List Kosong" << endl;
        system("pause");
        return;
    }
    p = node;

    while (p != NULL)
    {
        cout << p->data << endl;

        p = p->link;
    }
    system("pause");
}

Node *addAtBeg(Node *node, int num)
{
    Node *temp;
    temp = (Node *)malloc(sizeof(Node));
    temp -> data = num;
    temp -> link = node;
    node = temp;
    return node;
}
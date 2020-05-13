#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

Node *head, *tail, *newNode, *del, *temp;

bool isEmpty();
void tambahDepan(int newData);
void tambahBelakang(int newData);
void display();

int main()
{
    bool runApp = true;
    int selection, inpNum;
    head = new Node;
    head = NULL;
    do
    {
        system("cls");
        cout << "1. Display\n";
        cout << "2. Shift Data\n";
        cout << "3. Push Data\n";
        cout << "4. Exit\n";
        cout << "Select = ";
        cin >> selection;

        switch (selection)
        {
        case 1:
            display();
            break;
        case 2:
            system("cls");
            cout << "Input Data = ";
            cin >> inpNum;
            tambahDepan(inpNum);
            break;
        case 3:
            system("cls");
            cout << "Input Data = ";
            cin >> inpNum;
            tambahBelakang(inpNum);
            break;
        case 4:
            runApp = false;
            break;
        default:
            system("cls");
            cout << "Invalid Select";
            system("pause");
            break;
        }
    } while (runApp);

    system("pause");
    return 0;
}

bool isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void tambahDepan(int newData)
{
    newNode = new Node;
    newNode->data = newData;
    newNode->link = newNode;

    if (isEmpty())
    {
        head = tail = newNode;
        head->link = head;
        tail->link = tail;
    }
    else
    {
        newNode->link = head;
        head = newNode;
        tail->link = head;
    }

    cout << "Data telah dimasukan pada bagian depan utas" << endl;
    system("pause");
}

void tambahBelakang(int newData)
{
    newNode = new Node;
    newNode->data = newData;
    newNode->link = newNode;

    if (isEmpty())
    {
        head = tail = newNode;
        head->link = head;
        tail->link = tail;
    }
    else
    {
        tail->link = newNode;
        tail = newNode;
        tail->link = head;
    }

    cout << "Data telah dimasukan pada bagian belakang utas" << endl;
    system("pause");
}

void display()
{
    if (!isEmpty())
    {
        temp = head;
        cout << temp->data << endl;
        temp = temp->link;
        while (temp != head)
        {
            cout << temp->data << endl;
            temp = temp->link;
        }
        printf("\n");
    }
    else
    {
        cout << "Data Kosong!" << endl;
    }
    system("pause");
}
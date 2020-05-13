#include <iostream>
#define max 99
using namespace std;



struct NodeBuku
{
    int noBuku, harga;
    char judul[max];
    NodeBuku *link;
};

NodeBuku *head, *tail, *temp;

bool isEmpty();
void tambahData();
void edit();
void display();

int main()
{
    bool runApp = true;
    int selection, inpNumber;
    head = new NodeBuku;
    head = NULL;

    do
    {
        system("cls");
        cout << "1. Display\n";
        cout << "2. Input Data\n";
        cout << "3. Edit Harga\n";
        cout << "4. Exit\n";
        cout << "Select = ";
        cin >> selection;

        switch (selection)
        {
        case 1:
            display();
            system("pause");
            break;
        case 2:
            system("cls");
            tambahData();
            break;
        case 3:
            edit();
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

    } while (selection != 4);
    system("cls");
    cout << "=====================" << endl;
    cout << "Aulia Ilham Zukri" << endl;
    cout << "20190801368" << endl;
    cout << "=====================" << endl;
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

void tambahData()
{
    temp = new NodeBuku;

    cout << "Masukan Nomor Buku = ";
    cin >> temp->noBuku;
    cout << "Masukan Judul Buku = ";
    cin.ignore(10, '\n');
    cin.getline(temp->judul, max);
    cout << "Masukan harga Buku = ";
    cin >> temp->harga;

    temp->link = temp;

    if (isEmpty())
    {
        head = tail = temp;
        head->link = head;
        tail->link = tail;
    }
    else
    {
        tail->link = temp;
        tail = temp;
        tail->link = head;
    }

    cout << "Data telah dimasukan pada bagian belakang utas" << endl;
    system("pause");
}

void display()
{
    system("cls");
    if (!isEmpty())
    {
        temp = head;
        cout << "------------------------------\n";
        cout << "No Buku        = " << temp->noBuku << endl;
        cout << "Judul Buku     = " << temp->judul << endl;
        cout << "Harga Buku     = " << temp->harga << endl;
        cout << "------------------------------\n";
        temp = temp->link;
        while (temp != head)
        {
            cout << "No Buku        = " << temp->noBuku << endl;
            cout << "Judul Buku     = " << temp->judul << endl;
            cout << "Harga Buku     = " << temp->harga << endl;
            cout << "------------------------------\n";
            temp = temp->link;
        }
        printf("\n");
    }
    else
    {
        cout << "Data Kosong!" << endl;
    }
}

void edit()
{
    int searchNo;
    display();
    cout << "Masukan Nomor Buku yang ingin diedit = ";
    cin >> searchNo;

    if (!isEmpty())
    {
        temp = head;
        if (searchNo == temp->noBuku)
        {
            cout << "---------------------------------" << endl;
            cout << "No." << searchNo << endl;
            cout << "Masukan harga baru = ";
            cin >> temp->harga;
            cout << "---------------------------------" << endl;
        }
        temp = temp->link;

        while (temp != head)
        {
            if (searchNo == temp->noBuku)
            {
                cout << "---------------------------------" << endl;
                cout << "No." << searchNo;
                cout << "Masukan harga baru = ";
                cin >> temp->harga;
                cout << "---------------------------------" << endl;
            }
            temp = temp->link;
        }
    }
}
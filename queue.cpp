#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *tail, *now, *head;
int filledQueue = 0;
int sum = 0;

void newQueue();
void enqueue();
void dequeue();
void print();
void total();
void average(int dataCount);
void maxVal();
void minVal();

main()
{
    bool runApp = true;
    int select, queueCount;
    newQueue();
    do
    {
        system("cls");
        cout << "========== Queue App ==========\n";
        cout << "1. Enqueue \n2. Dequeue \n3. New Queue \n4. Print Data \n5. Total \n6. Average \n7. Min Value \n8. Max Value \n9. Exit" << endl;
        cout << "Select = ";
        cin >> select;

        switch (select)
        {
        case 1:
            system("cls");

            if (filledQueue == 0)
            {
                cout << "Queue Count = ";
                cin >> queueCount;
                for (int i = 1; i <= queueCount; i++)
                {
                    system("cls");
                    cout << "Data " << i << endl;
                    enqueue();
                    filledQueue++;
                }
            }
            else
            {
                if (filledQueue < queueCount)
                {
                    filledQueue++;
                    enqueue();
                }
                else
                {
                    system("cls");
                    cout << "Antrean Penuh\n";
                    system("pause");
                }
            }

            break;
        case 2:
            dequeue();
            break;
        case 3:
            system("cls");
            newQueue();
            cout << "New queue has been created!!\n";
            system("pause");
            break;
        case 4:
            print();
            system("pause");
            break;
        case 5:
            total();
            cout << "Total Nilai = " << sum << endl;
            system("pause");
            break;
        case 6:
            average(queueCount);
            break;
        case 7:
            minVal();
            break;
        case 8:
            maxVal();
            break;
        case 9:
            runApp = false;
            break;

        default:
            cout << "INVALID SELECTION INPUT" << endl;
            system("pause");
            break;
        }

    } while (runApp);

    system("cls");
    cout << "Aulia Ilham Zukri\n";
    cout << "20190801368" << endl;
    system("pause");

    return 0;
}

void newQueue()
{
    tail = NULL;
    head = NULL;
    filledQueue = 0;
}

void push(int data)
{
    now = new Node;
    if (head == NULL)
    {
        now->data = data;
        now->next = NULL;
        tail = now;
        head = now;
    }
    else
    {
        now->data = data;
        now->next = NULL;
        tail->next = now;
        tail = now;
    }
}

void enqueue()
{
    int new_Data;
    cout << "Data : ";
    cin >> new_Data;
    push(new_Data);
}

void dequeue()
{
    system("cls");
    if (head == NULL)
    {
        cout << "QUEUE IS EMPTY!!";
    }
    else
    {
        filledQueue -= 1;
        Node *temp;
        temp = head;
        head = head->next;
        delete temp;
        cout << "Dequeue Complete \n";
    }
    system("pause");
}

void print()
{
    system("cls");
    if (head == NULL)
    {
        system("cls");
        cout << "QUEUE IS EMPTY!!\n";
    }
    else
    {
        now = head;
        cout << "\nData : \n";
        while (now != NULL)
        {
            cout << now->data << endl;
            now = now->next;
        }
    }
}

void total()
{
    print();
    if (head == NULL)
    {
        system("cls");
        cout << "QUEUE IS EMPTY!!\n";
    }
    else
    {
        now = head;
        while (now != NULL)
        {
            sum += now->data;
            now = now->next;
        }
    }
}

void average(int dataCount)
{
    float avg;
    if (sum != 0)
    {
        avg = (float)sum / (float)dataCount;
    }
    else
    {
        total();
        avg = (float)sum / (float)dataCount;
    }
    print();
    cout << "Total = " << sum << endl;
    cout << "Data Count = " << dataCount << endl;
    cout << "Average = " << avg << endl;
    system("pause");
}

void minVal()
{
    int minVal;
    if (head == NULL)
    {
        system("cls");
        cout << "QUEUE IS EMPTY!!\n";
    }
    else
    {
        now = head;
        minVal = now->data;
        while (now != NULL)
        {
            if (minVal > now->data)
            {
                minVal = now->data;
            }
            now = now->next;
        }
    }
    print();
    cout << "Min Value = " << minVal << endl;
    system("pause");
}
void maxVal()
{
    int maxVal;
    if (head == NULL)
    {
        system("cls");
        cout << "QUEUE IS EMPTY!!\n";
    }
    else
    {
        now = head;
        maxVal = now->data;
        while (now != NULL)
        {
            if (maxVal < now->data)
            {
                maxVal = now->data;
            }
            now = now->next;
        }
    }
    print();
    cout << "Max Value = " << maxVal << endl;
    system("pause");
}
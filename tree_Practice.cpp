#include <bits/stdc++.h>

using namespace std;

struct Node
{
    char data;
    Node *kiri;
    Node *kanan;
};

Node *akar = NULL;

Node *addNode(Node **akar, char isi)
{
    if (*akar == NULL)
    {
        Node *baru;
        baru = new Node;
        baru->data = isi;
        baru->kiri = NULL;
        baru->kanan = NULL;
        *akar = baru;
    }
}

Node *preOrder(Node *akar)
{
    if (akar != NULL)
    {
        cout << " " << akar->data;
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}

Node *inOrder(Node *akar)
{
    if (akar != NULL)
    {
        inOrder(akar->kiri);
        cout << " " << akar->data;
        inOrder(akar->kanan);
    }
}

Node *postOrder(Node *akar)
{
    if (akar != NULL)
    {
        postOrder(akar->kiri);
        postOrder(akar->kanan);
        cout << " " << akar->data;
    }
}

int main()
{
    char abjad;
    cout << "\n\n\t Posisi Awal Tree:\n\n";
    cout << "\t       A\n\t      / \\\n\t     B   C\n\t    /\n\t    D\n\t   / \\\n\t  E   F\n\n";
    addNode(&akar, abjad = 'A');
    addNode(&akar->kiri, abjad = 'B');
    addNode(&akar->kanan, abjad = 'C');
    addNode(&akar->kiri->kiri, abjad = 'D');
    addNode(&akar->kiri->kiri->kiri, abjad = 'E');
    addNode(&akar->kiri->kiri->kanan, abjad = 'F');
    cout << "Tampilan PreOrder      : ";
    preOrder(akar);
    cout << endl;
    cout << "Tampilan inOrder       : ";
    inOrder(akar);
    cout << endl;
    cout << "Tampilan postOrder     : ";
    postOrder(akar);
    cout << endl;
    //system("pause");
    return 0;
}



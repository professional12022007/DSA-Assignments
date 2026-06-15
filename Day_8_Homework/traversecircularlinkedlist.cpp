#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
class CircularLinkedList
{
private:
    Node *head;

public:
    CircularLinkedList()
    {
        head = NULL;
    }
    void InsertList(int x)
    {
        Node *node = new Node(x);
        if (head == NULL)
        {
            head = node;
            node->next = head;
            return;
        }
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = node;
        node->next = head;
    }
    void TraverseList()
    {
        if (head == NULL)
            return;
        cout << head->data << " ";
        Node *temp = head->next;
        while (temp != head)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    CircularLinkedList cll;
    cll.InsertList(10);
    cll.InsertList(20);
    cll.InsertList(30);
    cll.InsertList(40);
    cll.TraverseList();
    return 0;
}
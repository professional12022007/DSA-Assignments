#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLinkedList
{
private:
    Node *head;

public:
    DoublyLinkedList()
    {
        head = NULL;
    }
    void InsertatFront(int x)
    {
        Node *node = new Node(x);
        node->next = head;
        if (head != NULL)
        {
            head->prev = node;
        }
        head = node;
    }
    void InsertatEnd(int x)
    {
        Node *node = new Node(x);
        if (head == NULL)
        {
            head = node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node;
        node->prev = temp;
    }
    void DeleteNode(int val)
    {
        Node *temp = head;
        while (temp != NULL && temp->data != val)
        {
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        if (temp == head)
        {
            head = temp->next;
        }
        if (temp->prev != NULL)
        {
            temp->prev->next = temp->next;
        }
        if (temp->next != NULL)
        {
            temp->next->prev = temp->prev;
        }
        delete temp;
    }
    void ReverseList()
    {
        Node *curr = head;
        Node *temp = NULL;
        while (curr != NULL)
        {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            curr = curr->prev;
        }
        if (temp != NULL)
        {
            head = temp->prev;
        }
    }
    void PrintList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    DoublyLinkedList ll;
    ll.InsertatEnd(20);
    ll.InsertatEnd(30);
    ll.InsertatFront(10);
    ll.PrintList();
    ll.DeleteNode(20);
    ll.PrintList();
    ll.ReverseList();
    ll.PrintList();
    return 0;
}
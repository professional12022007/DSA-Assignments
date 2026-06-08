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

class List
{
private:
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    void insertFront(int x)
    {
        Node *newnode = new Node(x);
        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void insertBack(int x)
    {
        Node *newnode = new Node(x);
        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void deleteFront()
    {
        if (head == NULL)
        {
            cout << "link list is empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void deleteEnd()
    {
        if (head == NULL)
        {
            cout << "link list is empty" << endl;
            return;
        }
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    void insert(int pos, int x)
    {

        if (pos < 0)
        {
            cout << "invalid position \n";
            return;
        }
        if (pos == 0)
        {
            insertFront(x);
            return;
        }

        Node *temp = head;
        Node *newnode = new Node(x);

        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "invalid position \n";
                return;
            }
            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "invalid position \n";
            return;
        }

        newnode->next = temp->next;
        temp->next = newnode;
        if (newnode->next == NULL)
        {
            tail = newnode;
        }
    }
    void search(int x)
    {
        if (head == NULL)
        {
            return;
        }
        Node *temp = head;
        for (int i = 0; temp->next != tail; i++)
        {
            if (temp->data == x)
            {
                cout << i << endl;
                return;
            }
            temp = temp->next;
        }
    }
    void len()
    {
        if (head == NULL)
        {
            cout << 0 << endl;
            return;
        }
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        cout << count << endl;
    }
};

int main()
{
    List ll;
    ll.insertFront(1);
    ll.insertFront(2);
    ll.insertFront(3);
    ll.insertFront(4);
    ll.insertFront(5);
    ll.insertBack(5);
    ll.insertBack(6);
    ll.display();
    ll.deleteFront();
    ll.display();
    ll.deleteEnd();
    ll.display();
    ll.insert(1, 0);
    ll.display();
    ll.search(3);
    ll.len();
    return 0;
}
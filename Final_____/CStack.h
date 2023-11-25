#pragma once
#include "_lib.h"
#include "_Struck.h"

template <typename T>
class Stack
{
private:
    struct Node
    {
        T data;
        Node* next;
        Node(const T& newData) : data(newData), next(nullptr) {}
    };

    Node* topNode;

public:
    Stack() : topNode(nullptr) {}

    ~Stack()
    {
        // Destructor to deallocate memory when the stack is destroyed
        while (!empty())
        {
            pop();
        }
    }

    void push(const T& element)
    {
        Node* newNode = new Node(element);
        newNode->next = topNode;
        topNode = newNode;
    }

    void pop()
    {
        if (!empty())
        {
            Node* temp = topNode;
            topNode = topNode->next;
            delete temp;
        }
        else
        {
            std::cerr << "Error: Stack is empty. Cannot pop." << std::endl;
        }
    }

    T top() const
    {
        if (!empty())
        {
            return topNode->data;
        }
        else
        {
            std::cerr << "Error: Stack is empty. No top element." << std::endl;
            return T(); // Return a default-constructed object for simplicity.
        }
    }

    bool empty() const
    {
        return topNode == nullptr;
    }

    size_t size() const
    {
        size_t count = 0;
        Node* current = topNode;
        while (current != nullptr)
        {
            ++count;
            current = current->next;
        }
        return count;
    }

    void display() const
    {
        if (empty())
        {
            std::cout << "Stack is empty." << std::endl;
        }
        else
        {
            std::cout << "Stack content: ";
            Node* current = topNode;
            while (current != nullptr)
            {
                std::cout << current->data << " ";
                current = current->next;
            }
            std::cout << std::endl;
        }
    }
    double getTotalProfit(int moth1, int moth2, int moth3) const
    {
        double totalProfit = 0.0;
        Node* current = topNode;
        while (current != nullptr)
        {
            if (current->data.mothT == moth1 || current->data.mothT == moth2 || current->data.mothT == moth3)
            {
                totalProfit += current->data.money;
                current = current->next;
            }
        }
        return totalProfit;
    }
    
};
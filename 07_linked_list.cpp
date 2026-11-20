#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    Node* first = new Node{10, nullptr};
    Node* second = new Node{20, nullptr};
    Node* third = new Node{30, nullptr};
    first->next = second;
    second->next = third;
    Node* temp = first;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    delete third;
    delete second;
    delete first;
    return 0;
}

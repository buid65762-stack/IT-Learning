#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};
typedef struct node node;

// Tạo một node mới
node* makeNode(int x) {
    node* newNode = new node();
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

// Duyệt danh sách liên kết
void duyet(node* head) {
    while (head != NULL) {
        cout << head->data << ' ';
        head = head->next;
    }
}

// Đếm số lượng node trong danh sách
int countNode(node* head) {
    int dem = 0;
    while (head != NULL) {
        ++dem;
        head = head->next;
    }
    return dem;
}

// Thêm vào đầu danh sách
void pushFront(node** head, int x) {
    node* newNode = makeNode(x);
    // Bước 1: phần next của newNode trỏ tới head hiện tại
    newNode->next = *head;
    // Bước 2: cập nhật head thành newNode
    *head = newNode;
}

int main() {
    node* head = NULL;
    for (int i = 1; i <= 5; i++) {
        pushFront(&head, i);
    }
    duyet(head);
    cout << endl;
    cout << countNode(head) << endl;
    return 0;
}
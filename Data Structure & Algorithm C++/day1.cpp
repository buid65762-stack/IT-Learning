//ngày 1 danh sách liên kết
#include <iostream>
using namespace std;

struct SinhVien{
    string name;    //char name[100]
    string lop;     //char lop [100]
    double gpa;
};

struct node{
    SinhVien data;
    struct node *next;
};

int main(){
    int a[1000000];
    return 0;
}
//
// Created by qms42 on 2020/7/5.
//

#include <string>

using namespace std;
#ifndef CPPSTUDY_ADDRESSBOOK_H
#define CPPSTUDY_ADDRESSBOOK_H
#define max 1000
#endif //CPPSTUDY_ADDRESSBOOK_H

struct Person{
    string name="";
    bool gender;
    int age;
    string phone;
    string addr;
};
struct addressBook{
    struct Person person[1000];
    int size;
};

void showMenu();
void add(addressBook *ab);
void list(addressBook *ab);
void deleteBook(addressBook *ab);
void searchBook(addressBook *ab);
void modifyBook(addressBook *ab);
void emptyBook(addressBook *ab);

void exit();

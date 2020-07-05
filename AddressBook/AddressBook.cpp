//
// Created by qms42 on 2020/7/5.
//

#include "AddressBook.h"
#include <iostream>
using namespace std;

void showMenu(){
    cout<<"1.添加联系人"<<endl;
    cout<<"2.显示联系人"<<endl;
    cout<<"3.删除联系人"<<endl;
    cout<<"4.查找联系人"<<endl;
    cout<<"5.修改联系人"<<endl;
    cout<<"6.清空联系人"<<endl;
    cout<<"0.退出通讯录"<<endl;
}

void add(addressBook *ab){
    if(ab->size==max){
        cout<<"通讯录已满";
    } else{
        string name;
        bool gender;
        int age;
        string phone;
        string addr;
        cout<<"请输入姓名：";
        cin >>name;
        cout<< "请选择性别：1.男 ，0.女";
        cin>> gender;
        cout<<"请输入年龄：";
        cin>>age;
        cout<<"请输入电话：";
        cin>> phone;
        cout<<"请输入住址：";
        cin >> addr;
        ab->person[ab->size].name = name;
        ab->person[ab->size].gender = gender;
        ab->person[ab->size].age = age;
        ab->person[ab->size].phone = phone;
        ab->person[ab->size].addr = addr;
        ab->size++;
        cout<<"添加完成！"<<endl;
    }
}

void list(addressBook *ab){
    for (int i = 0; i < ab->size; ++i) {
        cout<<"姓名："<<ab->person[i].name<<" ";
        cout<<"性别："<<(ab->person[i].gender ?"男":"女")<<" ";
        cout<<"年龄："<<ab->person[i].age<<" ";
        cout<<"电话："<<ab->person[i].phone<<" ";
        cout<<"住址："<<ab->person[i].addr<<endl;

    }
}

void deleteBook(addressBook *ab){
    string name;
    cout<< "请输入要删除联系人的姓名：";
    cin>>name;
    for (int i = 0; i < ab->size; ++i) {
        if(ab->person[i].name==name){
            if(i<ab->size){
                for (int j = i; j < ab->size; ++j) {
                    ab->person[j] = ab->person[j+1];

                }
                ab->size--;
            }

        }

    }
}

void searchBook(addressBook *ab){
    string name;
    cout<< "请输入要查找的联系人的姓名：";
    cin>>name;
    for (int i = 0; i < ab->size; ++i) {
        if(ab->person[i].name==name){
            cout<<"姓名："<<ab->person[i].name<<" ";
            cout<<"性别："<<(ab->person[i].gender ?"男":"女")<<" ";
            cout<<"年龄："<<ab->person[i].age<<" ";
            cout<<"电话："<<ab->person[i].phone<<" ";
            cout<<"住址："<<ab->person[i].addr<<endl;
        }

    }
}

void modifyBook(addressBook *ab){
    string name;
    string re_name;
    bool gender;
    int age;
    string phone;
    string addr;
    cout<< "请输入要修改的联系人的姓名：";
    cin>>name;
    for (int i = 0; i < ab->size; ++i) {
        if(ab->person[i].name==name){
            int proper;
            cout<<"输入要修改的属性：1.姓名，2.性别，3.年龄，4.电话，5.住址";

            cin>>proper;
            switch(proper){
                default:
                    break;
                case 1:
                    cout<<"输入姓名：";
                    cin>>re_name;
                    ab->person[i].name=re_name;
                    break;
                case 2:
                    cout<<"输入性别：";

                    cin>>gender;
                    ab->person[i].gender=gender;
                    break;
                case 3:
                    cout<<"输入年龄：";

                    cin>>age;
                    ab->person[i].age=age;
                    break;
                case 4:
                    cout<<"输入电话：";

                    cin>>phone;
                    ab->person[i].phone=phone;
                    break;
                case 5:
                    cout<<"输入住址：";

                    cin>>addr;
                    ab->person[i].addr=addr;
                    break;
            }
        }else{
            cout<<"不存在";
        }

    }

}

void emptyBook(addressBook *ab){
    ab->size = 0;
}

void exit(){
    cout<<"欢迎下次使用。。。"<<endl;
    system("pause");
}

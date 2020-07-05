//
// Created by qms42 on 2020/7/5.
//

#include "AddressBook.h"
#include <iostream>
using namespace std;

void showMenu(){
    cout<<"1.�����ϵ��"<<endl;
    cout<<"2.��ʾ��ϵ��"<<endl;
    cout<<"3.ɾ����ϵ��"<<endl;
    cout<<"4.������ϵ��"<<endl;
    cout<<"5.�޸���ϵ��"<<endl;
    cout<<"6.�����ϵ��"<<endl;
    cout<<"0.�˳�ͨѶ¼"<<endl;
}

void add(addressBook *ab){
    if(ab->size==max){
        cout<<"ͨѶ¼����";
    } else{
        string name;
        bool gender;
        int age;
        string phone;
        string addr;
        cout<<"������������";
        cin >>name;
        cout<< "��ѡ���Ա�1.�� ��0.Ů";
        cin>> gender;
        cout<<"���������䣺";
        cin>>age;
        cout<<"������绰��";
        cin>> phone;
        cout<<"������סַ��";
        cin >> addr;
        ab->person[ab->size].name = name;
        ab->person[ab->size].gender = gender;
        ab->person[ab->size].age = age;
        ab->person[ab->size].phone = phone;
        ab->person[ab->size].addr = addr;
        ab->size++;
        cout<<"�����ɣ�"<<endl;
    }
}

void list(addressBook *ab){
    for (int i = 0; i < ab->size; ++i) {
        cout<<"������"<<ab->person[i].name<<" ";
        cout<<"�Ա�"<<(ab->person[i].gender ?"��":"Ů")<<" ";
        cout<<"���䣺"<<ab->person[i].age<<" ";
        cout<<"�绰��"<<ab->person[i].phone<<" ";
        cout<<"סַ��"<<ab->person[i].addr<<endl;

    }
}

void deleteBook(addressBook *ab){
    string name;
    cout<< "������Ҫɾ����ϵ�˵�������";
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
    cout<< "������Ҫ���ҵ���ϵ�˵�������";
    cin>>name;
    for (int i = 0; i < ab->size; ++i) {
        if(ab->person[i].name==name){
            cout<<"������"<<ab->person[i].name<<" ";
            cout<<"�Ա�"<<(ab->person[i].gender ?"��":"Ů")<<" ";
            cout<<"���䣺"<<ab->person[i].age<<" ";
            cout<<"�绰��"<<ab->person[i].phone<<" ";
            cout<<"סַ��"<<ab->person[i].addr<<endl;
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
    cout<< "������Ҫ�޸ĵ���ϵ�˵�������";
    cin>>name;
    for (int i = 0; i < ab->size; ++i) {
        if(ab->person[i].name==name){
            int proper;
            cout<<"����Ҫ�޸ĵ����ԣ�1.������2.�Ա�3.���䣬4.�绰��5.סַ";

            cin>>proper;
            switch(proper){
                default:
                    break;
                case 1:
                    cout<<"����������";
                    cin>>re_name;
                    ab->person[i].name=re_name;
                    break;
                case 2:
                    cout<<"�����Ա�";

                    cin>>gender;
                    ab->person[i].gender=gender;
                    break;
                case 3:
                    cout<<"�������䣺";

                    cin>>age;
                    ab->person[i].age=age;
                    break;
                case 4:
                    cout<<"����绰��";

                    cin>>phone;
                    ab->person[i].phone=phone;
                    break;
                case 5:
                    cout<<"����סַ��";

                    cin>>addr;
                    ab->person[i].addr=addr;
                    break;
            }
        }else{
            cout<<"������";
        }

    }

}

void emptyBook(addressBook *ab){
    ab->size = 0;
}

void exit(){
    cout<<"��ӭ�´�ʹ�á�����"<<endl;
    system("pause");
}

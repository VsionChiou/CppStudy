#include <iostream>
//#include "structure/bubbleSort.h"
#include "AddressBook/AddressBook.h"
using namespace std;

int main() {

    addressBook abs;
    abs.size=0;

    while (true){
        showMenu();
        int select;
        cout<<"ÇëÑ¡Ôñ²Ù×÷£º";
        cin>>select;
        switch(select){
            case 1:
                add(&abs);
                break;
            case 2:
                list(&abs);
                break;
            case 3:
                deleteBook(&abs);
                break;
            case 4:
                searchBook(&abs);
                break;
            case 5:
                modifyBook(&abs);
                break;
            case 6:
                emptyBook(&abs);
                break;
            case 0:
                exit();
                return 0;
                break;
        }
    }
}

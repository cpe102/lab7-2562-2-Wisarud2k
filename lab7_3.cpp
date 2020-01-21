#include<iostream>
#include<string>
using namespace std;

int main(){
    int age,tall,money;
    string status;
    cout << "Input your age: ";
    cin >> age;
    if(age<=20){
        cout << "Input your Height: ";
        cin >> tall;
        if(tall<160){
            status = "UNFRIEND";
        }else if(tall<175){
            status = "FRIEND";
        }else{
            cout << "Input your money: ";
            cin >> money;
            if(money>69){
                status="MARRIED";
            }else{
                status="ONE-NIGHT-STAND";
            }
        }
    }else if(age<30){
        cout << "Input your money: ";
        cin >> money;
        if(money>10){
            status="BEST FRIEND";
        }else{
            status="UNFRIEND";
        }
    }else{
        status="UNFRIEND";
    }
    cout << "status = "<<status;
}

//status = "ONE-NIGHT-STAND";

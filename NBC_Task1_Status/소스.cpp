#include <string>
#include <vector>
#include <iostream>

using namespace std;
int status[] = { 0,0,0,0 };
//HP=status[0],MP=status[1],ATK=status[2],DEF=status[3]
int potion[] = { 5,5 };
int* p_HPPotion = potion;
int* p_MPPotion = potion + 1;
int select = 0;

void setPotion(int count, int* p_HPPotion, int* p_MPPotion)
{
    ;
    if (count == 1)
    {
        if (*p_HPPotion <= 0) {
            cout << "포션이 부족합니다!" << endl;
        }
        else {
        *p_HPPotion = *p_HPPotion - 1;
        status[0] += 20;
        cout << "HP가 20 회복되었습니다. 포션이 1개 차감됩니다." << endl;
        cout << "남은 HP포션 수:" << *p_HPPotion << endl;
        cout << "현재 HP:" << status[0] << endl;
    }
    }
    else if (count == 2) {
        if (*p_MPPotion <= 0) {
            cout << "포션이 부족합니다!" << endl;
        }
        else {
            *p_MPPotion = *p_MPPotion - 1;
            status[1] += 20;
            cout << "MP가 20 회복되었습니다. 포션이 1개 차감됩니다." << endl;
            cout << "남은 MP포션 수:" << *p_MPPotion << endl;
            cout << "현재 MP:" << status[1] << endl;
        }
    }
    else {

    }
    
   
}


int main() {
    
    
    cout << "HP와 MP를 입력해주세요 :";
    cin >> status[0];
    cin >> status[1];
    while (status[0] <= 50 || status[1] <= 50) {
        cout << "HP나 MP의 값이 너무 작습니다.다시 입력해주세요." << endl;
        cin >> status[0];
        cin >> status[1];
        
    }
    cout << "공격력과 방어력을 입력해주세요 :";
    cin >> status[2];
    cin >> status[3];
    while (status[2] <= 0 || status[3] <= 0) {
        cout << "공격력이나 방어력의 값이 너무 작습니다.다시 입력해주세요." << endl;
        cin >> status[2];
        cin >> status[3];
        
    }
    
    
    cout << "* 포션이 지급되었습니다. (HP, MP 포션 각 5개)" << endl;
    cout << "================================" << endl;
    while (true)
    {
        cout << endl;
        cout << "<스탯 관리 시스템>" << endl;
        cout << "1. HP 회복" << endl;
        cout << "2. MP 회복" << endl;
        cout << "3. HP 강화" << endl;
        cout << "4. MP 강화" << endl;
        cout << "5. 공격 스킬 사용" << endl;
        cout << "6. 필살기 사용" << endl;
        cout << "7. <스탯 관리 시스템> <종료>" << endl;
        cout << "번호를 선택해주세요:";
        cin >> select;
        
        cout << endl;
        if (select == 1) {
            setPotion(select, p_HPPotion, p_MPPotion);
        }
        else if (select == 2) {
            setPotion(select, p_HPPotion, p_MPPotion);
        }
        else if (select == 3) {
            status[0] += status[0];
            cout << "* HP가 2배로 증가되었습니다." << endl;
            cout << "현재 HP: "<<status[0] <<endl;
        }
        else if (select == 4) {
            status[1] = status[1] * 2;
            cout << "* MP가 2배로 증가되었습니다." << endl;
            cout << "현재 MP: " << status[1] << endl;
        }
        //mp소모
        else if (select == 5) {
            if (status[1] < 50) {
                cout << "스킬 사용이 불가합니다" << endl;
            }
            else {
                status[1] -= 50;
                cout << "* 스킬을 사용하여 MP가 50% 소모되었습니다" << endl;
                cout << "현재 MP: " << status[1] << endl;
                
            }
        }
        //필살기
        else if (select == 6) {
            status[1] = status[1] * 0.5;
            cout << "현재 MP: " << status[1] << endl;
        }
        else if (select == 7) {
            break;
        }
        else {
            cout << "1에서 7번까지만 입력 가능합니다" << endl;
        }
    }
    
}
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
            cout << "������ �����մϴ�!" << endl;
        }
        else {
        *p_HPPotion = *p_HPPotion - 1;
        status[0] += 20;
        cout << "HP�� 20 ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�." << endl;
        cout << "���� HP���� ��:" << *p_HPPotion << endl;
        cout << "���� HP:" << status[0] << endl;
    }
    }
    else if (count == 2) {
        if (*p_MPPotion <= 0) {
            cout << "������ �����մϴ�!" << endl;
        }
        else {
            *p_MPPotion = *p_MPPotion - 1;
            status[1] += 20;
            cout << "MP�� 20 ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�." << endl;
            cout << "���� MP���� ��:" << *p_MPPotion << endl;
            cout << "���� MP:" << status[1] << endl;
        }
    }
    else {

    }
    
   
}


int main() {
    
    
    cout << "HP�� MP�� �Է����ּ��� :";
    cin >> status[0];
    cin >> status[1];
    while (status[0] <= 50 || status[1] <= 50) {
        cout << "HP�� MP�� ���� �ʹ� �۽��ϴ�.�ٽ� �Է����ּ���." << endl;
        cin >> status[0];
        cin >> status[1];
        
    }
    cout << "���ݷ°� ������ �Է����ּ��� :";
    cin >> status[2];
    cin >> status[3];
    while (status[2] <= 0 || status[3] <= 0) {
        cout << "���ݷ��̳� ������ ���� �ʹ� �۽��ϴ�.�ٽ� �Է����ּ���." << endl;
        cin >> status[2];
        cin >> status[3];
        
    }
    
    
    cout << "* ������ ���޵Ǿ����ϴ�. (HP, MP ���� �� 5��)" << endl;
    cout << "================================" << endl;
    while (true)
    {
        cout << endl;
        cout << "<���� ���� �ý���>" << endl;
        cout << "1. HP ȸ��" << endl;
        cout << "2. MP ȸ��" << endl;
        cout << "3. HP ��ȭ" << endl;
        cout << "4. MP ��ȭ" << endl;
        cout << "5. ���� ��ų ���" << endl;
        cout << "6. �ʻ�� ���" << endl;
        cout << "7. <���� ���� �ý���> <����>" << endl;
        cout << "��ȣ�� �������ּ���:";
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
            cout << "* HP�� 2��� �����Ǿ����ϴ�." << endl;
            cout << "���� HP: "<<status[0] <<endl;
        }
        else if (select == 4) {
            status[1] = status[1] * 2;
            cout << "* MP�� 2��� �����Ǿ����ϴ�." << endl;
            cout << "���� MP: " << status[1] << endl;
        }
        //mp�Ҹ�
        else if (select == 5) {
            if (status[1] < 50) {
                cout << "��ų ����� �Ұ��մϴ�" << endl;
            }
            else {
                status[1] -= 50;
                cout << "* ��ų�� ����Ͽ� MP�� 50% �Ҹ�Ǿ����ϴ�" << endl;
                cout << "���� MP: " << status[1] << endl;
                
            }
        }
        //�ʻ��
        else if (select == 6) {
            status[1] = status[1] * 0.5;
            cout << "���� MP: " << status[1] << endl;
        }
        else if (select == 7) {
            break;
        }
        else {
            cout << "1���� 7�������� �Է� �����մϴ�" << endl;
        }
    }
    
}
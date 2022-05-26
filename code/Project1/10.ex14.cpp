/*
#include <iostream>
#include <map> // map 헤더파일 
using namespace std; // STL은 std 이름공간에 작성되었기에 using 지시어 필요

map<string, string> Program;  // 전역변수로 쓰여도 될 거 같아 이렇게 선언해봄
                              // 문자열 2개니까 <string,string> 으로 선언
                              // 맵 컨테이너 생성. key는 이름, value는 password
void insert() { // 삽입
    string Name, Password;
    cout << "이름 암호>> "; cin >> Name >> Password;
    Program.insert(make_pair(Name, Password)); // map의 insert 멤버 함수를 이용해
                                               // (Name, Password)를 pair로 저장
}

void examine() { // 검사
    string Name, Password;
    cout << "이름? "; cin >> Name;
    while (true) {
        cout << "암호? "; cin >> Password;
        if (Program.find(Name) == Program.end()) { // Key가 유효한지 확인
            cout << "Key를 찾을 수 없음" << endl;
        }
        else { // Key를 찾을 수 있다면,
            if (Program[Name] == Password) { // Key에 해당하는 Value가 Password와 동일하다면,
                cout << "통과!!" << endl;
                break; // 통과하였으면 break를 통해 while문 벗어남.
            }
            else {
                cout << "실패~~" << endl;
            }
        }
    }
}

int main() {
    int flag = 0; // while문을 벗어나기 위한 flag 변수
    cout << "***** 암호 관리 프로그램 WHO를 시작합니다 *****" << endl;
    while (true) {
        cout << "삽입:1, 검사:2, 종료3:>> ";
        int n; cin >> n;
        switch (n) {
        case 1:
            insert(); // n이 1이면 삽입
            break;
        case 2: // n이 2이면 검사
            examine();
            break;
        case 3: // n이 3이면 종료
            cout << "프로그램을 종료합니다..." << endl;
            flag = 1; // flag 변수를 1로 바꿔줌으로써 while문도 break할 수 있게 만듬
            break;
        default: // 1,2,3, 다 아니면,
            cout << "1,2,3 내에서 입력해주세요." << endl;
            break;
        }
        if (flag == 1) { // flag가 1이면 while문 break;
            break;
        }
    }
    return 0;
}
*/
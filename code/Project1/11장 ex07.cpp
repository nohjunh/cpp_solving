/*
#include <iostream>
#include <cctype> // 문제에서 주어진 헤더파일
#include <iomanip> // 매개변수를 가지는 조작자를 쓰기 위해 <iomanip> 헤더파일을 include
using namespace std;

int main() {
    cout.setf(ios::left); // 오른쪽 정렬이 디폴트이므로 왼쪽 맞춤으로 출력설정
    for (int i = 0; i < 4; i++) { // 총 4번 출력되게 해야 함
        cout << setw(7) << "dec"; // 7칸 너비에 "dec" 출력
        cout << setw(7) << "hexa"; // 7칸 너비에 "hexa" 출력
        cout << setw(7) << "char";// 7칸 너비에 "char" 출력
    }
    cout << endl;

    for (int i = 0; i < 4; i++) { // 총 4번 출력되게 해야 함
        cout << setw(7) << "____"; // 7칸 너비에 ____ 출력
        cout << setw(7) << "____";// 7칸 너비에 ____ 출력
        cout << setw(7) << "____";// 7칸 너비에 ____ 출력
    }
    cout << endl;

    for (int i = 0; i < 128; i++) { // 0 ~ 127번까지 ASCII 코드와 해당 문자를 출력 
        if (i != 0) { // i가 0인 경우 줄바꿈을 바꾸면 안됨.
            if ((i % 4) == 0) { // i가 4의 배수 단위마다 줄바꿈 (위에 for문에서 총 4set으로 구성했기 때문) 
                cout << endl;
            }
        }
        cout << setw(7) << dec << i; // i의 값을 10진수로 출력
        cout << setw(7) << hex << i; // i의 값을 16진수로 출력
        //char 같은 경우 출력불가능 ASCII코드 고려해야 한다.
        //문자가 출력 가능한지 알기 위해 bool isprint(int c); 함수 사용
        //isprint함수는 출력 문자의 아스키코드 판별 (출력 가능이면 0이 아닌수, 출력 불가능이면 0 리턴)
        if (isprint(i) == 0) {
            cout << setw(7) << '.'; // 출력 불가능이므로 . 출력
        }
        else { // 출력 가능이면
            cout << setw(7) << (char)i; // 정수형 char로 형변환
        }
    }
    cout << endl;
    return 0;
}
*/
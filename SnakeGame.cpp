#include "Global.h"
#include "View.h"
#include "Control.h"

char SNAKE[50];
int Length = 5;
int _X, _Y;
int xcu, ycu;
int _COMMAND;
int TRANGTHAI;
int pos;

void PrintSnake() {
    for (int i = 0; i < Length; i++) {
        GoTo(_X+i, _Y);
        cout << SNAKE[i];
    }
}

void PrintToRight() {
    
}

void PrintToLeft() {
    
}

void PrintToUp() {
    
}

void PrintToDown() {
    
}

void CreateSnake() {
    for (int i = 0; i < Length - 1; i++) {
        SNAKE[i] = '=';
    }
    SNAKE[Length - 1] = '0';
    
}

void MoveLeft() {
    
    _X--;
}

void MoveRight() {
    xcu = _X;
    _X++;
}

void MoveUp() {
    _Y--;
}

void MoveDown() {
    _Y++;
}

char waitKeyBoard() { // Nhập phím 
    _COMMAND = toupper(_getwch());
    return _COMMAND;
}

void DrawBoard() {

}

void main() {
    CreateSnake();
    _X = 30; _Y = 5;
    TRANGTHAI = 3;
    while (1) {
        system("cls");
        GoTo(_X, _Y);
        cout << SNAKE;
        if (_kbhit()) {
            char c = _getch();
            if (c == 27) break;
            else if (c == 'w') {
                TRANGTHAI = 0;
            }
            else if (c == 's') {
                TRANGTHAI = 1;
            }
            else if (c == 'a') {
                TRANGTHAI = 2;
            } 
            else if (c == 'd') {
                TRANGTHAI = 3;
            }
        }
        if (TRANGTHAI == 0) {
            _Y--;
        }
        else if (TRANGTHAI == 1) {
            _Y++;
        }
        else if (TRANGTHAI == 2) {
            _X--;
        }
        else if (TRANGTHAI == 3) {
            _X++;
        }
        if (_X == 100) TRANGTHAI = 2;
        else if (_X == 20) TRANGTHAI = 3;
        if (_Y == 28) TRANGTHAI = 0;
        else if (_Y == 0) TRANGTHAI = 1;
        Sleep(100);
    }
    return;
}

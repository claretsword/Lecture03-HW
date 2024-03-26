#include <iostream>

enum ForeColour {
    Default = 0,
    Black = 30,
    Red = 31,
    Green = 32,
    Yellow = 33,
    Blue = 34,
    Magenta = 35,
    Cyan = 36,
    White = 37,
};

int main()
{
    std::cout << "\x1b[033m" << "아름다운 색!! 우왕";

    std::cout << std::endl << std::endl;
    std::cout << "화면에 그림을 그리는 프로그램입니다." << std::endl;
    std::cout << "학번 : 202027037" << std::endl; 
    std::cout << "이름 : 조경호" << std::endl; 
    std::cout << std::endl;

    int objectCode;

    std::cout << "화면에 그릴 물체코드를 입력하세요 : ";

    while (true) {
        std::cin >> objectCode;

        switch (objectCode) {
        case 1:
            std::cout << "\x1b[" << White << "m■"; 
            break;
        case 2:
            std::cout << "\x1b[" << Red << "m■";
            break;
        case 4:
            std::cout << "\x1b[" << Green << "m■";
            break;
        case 8:
            std::cout << "\x1b[" << Yellow << "m■";
            break;
        case 16:
            std::cout << "\x1b[" << Cyan << "m■";
            break;
        case 32:
            std::cout << "\x1b[" << Magenta << "m■";
            break;
        case 64:
            std::cout << "프로그램을 종료합니다." << std::endl;
            return 0;
        default:
            std::cout << "잘못된 물체코드입니다." << std::endl;
        }

        std::cout << std::endl;
        std::cout << "화면에 그릴 물체코드를 입력하세요 : ";
    }

    return 0;
}
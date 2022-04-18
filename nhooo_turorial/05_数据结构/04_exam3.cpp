#include <iostream>
using namespace std;

enum suit
{
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

int main()
{
    card = club;
    cout << "enum变量的大小 " << sizeof(card) << " bytes.";
    return 0;
}
// enum变量的大小 4 bytes
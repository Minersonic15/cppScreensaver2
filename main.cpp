#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

std::vector<char> Make(int sizeX) {
    
    std::vector<char> row(sizeX);
    int Place = rand() % sizeX;
    std::cout << Place << "\n";
    return row;
}
int main() {
    srand(time(0));
    std::vector<std::vector<char>> Screen;
    std::string Phrase = "Hello";
    std::vector<char> VecPhrase(Phrase.begin(), Phrase.end());
    for (int i = 0; i < 10; i++) {
        Make(10);
    }

}
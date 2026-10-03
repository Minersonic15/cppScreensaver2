#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include <chrono>
#include <thread>

std::vector<char> Make(std::vector<char> row, int sizeX, std::vector<char> word) {
    int Place = rand() % (sizeX- word.size());
    for (int i = 0; i < word.size(); i++){
        row[i+Place] = word[i];
    }
    std::string stir(row.begin(), row.end());
    std::cout << stir << "\n";
    return row;
}
int main() {
    srand(time(0));
    int sizeX = 180;
    int sizeY = 50;
    std::vector<std::vector<char>> Screen(sizeY, std::vector<char>(sizeX, ' '));
    std::string Phrase = "Marko";
    std::vector<char> VecPhrase(Phrase.begin(), Phrase.end());
    
    while(true){
        int Row = rand() % (sizeY);
        Screen[Row] = Make(Screen[Row], sizeX, VecPhrase);
        std::cout << "\x1B[2J\x1B[H" << std::flush;
        for (int i = 0; i < Screen.size(); i++) {
            std::string stir(Screen[i].begin(), Screen[i].end());
            std::cout << stir << "\n";
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
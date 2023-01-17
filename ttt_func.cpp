#include <iostream>
#include "ttt_header.hpp"

// function definition

void draw(char board[]) {  // draw game board
    std::cout << "Player 1 (X)  -  Player 2 (O)\n";
    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[1] << "  |  " << board[2] << "  |  " << board[3] << "\n";
 
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[4] << "  |  " << board[5] << "  |  " << board[6] << "\n";
 
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[7] << "  |  " << board[8] << "  |  " << board[9] << "\n";
    std::cout << "     |     |      \n";
 
    std::cout << "\n";
}

int checkwin(char board[])  // 1 game over, -1 game in progress, O draw game
{
    if (board[1] == board[2] && board[2] == board[3])
      return 1;
    else if (board[4] == board[5] && board[5] == board[6])
      return 1;
    else if (board[7] == board[8] && board[8] == board[9])
      return 1;
    else if (board[1] == board[4] && board[4] == board[7])
      return 1;
    else if (board[2] == board[5] && board[5] == board[8])
      return 1;
    else if (board[3] == board[6] && board[6] == board[9])
      return 1;
    else if (board[1] == board[5] && board[5] == board[9])
      return 1;
    else if (board[3] == board[5] && board[5] == board[7])
      return 1;
    else if (board[1] != '1' && board[2] != '2' && board[3] != '3' && board[4] != '4' && board[5] != '5' && board[6] != '6' && board[7] != '7' && board[8] != '8' && board[9] != '9')
        return 0;
    else
        return -1;
}

int valid_test(int spot, int player_num, char board[]) {  // test to see if choice is from 1-9
  int ConvertedValue = board[spot] - '0';
  while (spot <= 0 || spot > 9 || spot != ConvertedValue) {
    std::cout << "Invaild Choice1!\n";
    std::cout << "Player " << player_num <<", choose your spot (#): \n";
    std::cin >> spot;
    ConvertedValue = board[spot] - '0';
    }
  return spot;
}
 



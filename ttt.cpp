#include <iostream>
#include <vector>
#include "ttt_header.hpp"

// will add features bellow later:
// program does not account for an invalid input of letters as a position
// no bounus - best 3 out of 3

  char board[10] = {'0','1','2','3','4','5','6','7','8','9'};
  int spot = 0;
  bool player = true; // true = player 1, false = player 2
  int player_num = 1; // will be 1 or 2
  bool win = false;

int main() {
  std::cout << "====================\n";
  std::cout << "== TicTacToe Game ==\n";
  std::cout << "====================\n\n";
   
  while (win == false) { 

    if (player == true){   //player 1's turn (X)
      draw(board);
      std::cout << "Player " << player_num <<", choose your spot (#): \n";
      std::cin >> spot;
      spot = valid_test(spot, player_num, board);
      board[spot] = 'X';   
      
      if (checkwin(board) == 1) {  
        draw(board);
        std::cout << "Player " << player_num << " WINS!\n";
        return 0;
      }
      else if (checkwin(board) == 0) {
        draw(board);
        std::cout << "Draw Game!\n";
        return 0;
      }     
    }
      player = false;
      player_num = 2;

    if (player == false){  //player 2's turn (O)
      draw(board);
      std::cout << "Player " << player_num <<", choose your spot (#): \n";
      std::cin >> spot;
      spot = valid_test(spot, player_num, board);
      board[spot] = 'O';
    
      if (checkwin(board) == 1) {  
        draw(board);
        std::cout << "Player " << player_num << " WINS!\n";
        return 0;
      }
      else if (checkwin(board) == 0) {
        draw(board);
        std::cout << "Draw Game!\n";
        return 0;
      }
      player = true;
      player_num = 1;
    }   
  }
  win == false;
}
# TicTacToe-2-player-game-cpp
Tic tac toe game, 2 players, in C++

This program represents the classic tic-tac-toe game that requiers 2 human players.

The game is played in the terminal, with the classic design of the board being filled as the players
write their inputs. For simplicity, the numbers of the rows and collums are from 1 to 3.

To test the implementation and to play the game, run in the terminal the following commands:
    make
    ./tictactoepvp
For the input to be valid, the player must write in the terminal in the following order:
    number_row number_collumn

If the input is not valid, an error message will appear, giving the player another chance to write where they want their symbol to be put.

After every players' turn, the program checks if the game is won by either of the players by checking if it is the same symbol on all 3 positions of any collumn, row or diagonal.

If all the positions of the matrix (the board) are filled but still no winner, then it's a draw.

For this program, I used a matrix / multidimensional array, an unordered map for the X and O symbols.

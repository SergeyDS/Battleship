#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include "Utils.h"


enum
{
	AIRCRAFT_CARRIER_SIZE = 5,
	BATTLESHIP_SIZE = 4,
	CRUISER_SIZE = 3,
	DESTROYER_SIZE = 3,
	SUBMARINE_SIZE = 2,

	BOARD_SIZE = 10,
	NUM_SHIPS = 5,
	PLAYER_NAME_SIZE = 8, //Player1, Player2
	MAX_SHIP_SIZE = AIRCRAFT_CARRIER_SIZE
};


enum ShipType
{
	ST_NONE = 0,
	ST_AIRCRAFT_CARRIER,
	ST_BATTLESHIP,
	ST_CRUISER,
	ST_DESTROYER,
	ST_SUBMARINE
};
enum ShipOrientationType
{
	SO_HORIZONTAL = 0,
	SO_VERTICAL
};
struct ShipPositionType
{
	int row;
	int col;
};
struct Ship
{
	ShipType shipType;
	int shipSize;
	ShipOrientationType orientation;
	ShipPositionType position;
};
enum GuessType
{
	GT_NONE = 0,
	GT_MISSED,
	GT_HIT
};
struct ShipPartType
{
	ShipType shipType;
	bool isHit;
};
enum PlayerType
{
	PT_HUMAN = 0,
	PT_AI
};

struct Player
{
	PlayerType playerType;
	char playerName[PLAYER_NAME_SIZE];
	Ship ships[NUM_SHIPS];
	GuessType guessBoard[BOARD_SIZE][BOARD_SIZE];
	ShipPartType shipBoard[BOARD_SIZE][BOARD_SIZE];
};

/*
Step 1

	InitPlayer(player1, "Player1");
	InitPlayer(player2, "Player2");

	do
	{
		PlayGame(player1, player2);

	}while(WantToPlayAgain());

	PlayGame
	--------

	SetupBoard(player1);
	SetupBoard(player2);

	do
	{
		DrawBoards(currentPlayer)

		do
		{
			Prompt the current player for a guess
			guess = GetGuess()

		}while(!IsGuessValid(guess, currentPlayer));


		UpdateBoards(guess, currentPlayer, otherPlayer);
		DrawBoard(currentPlayer); //to see the result of the guess

		if(a ship was sunk on currentPlayer's turn)
		{
			output that the current player sunk that ship
		}
		WaitForKeyPress

		SwitchPlayers()

	}while(!GameIsOver());

	DisplayWinner()


	SetupBoards(player)
	-------------------

	ClearBoards(player)

	for(all the ships)
	{
		DrawBoards(player)

		currentShip = Get the current ship

		do
		{
			position = Get Board Position for the head of the ship
			orientation = Get the ship orientation

			isValidPlacement = IsValidPlacement(currentShip, position, orientation, player)
			if(!isValidPlacement)
			{
				output to the player that it was not a valid placement
			}
		}while(!isValidPlacement)

		PlaceShipOnBoard(player, currentShip, position, orientation)
	}

	IsValidPlacement(player, currentShip, position, orientation)
	---------------------------------------

	if(orientation == HORIZONTAL)
	{
		for(all the columns the currentShip would take up)
		{
			if(ship will overlap another ship or the ship will be off the board horizontally)
			{
				return false
			}
		}
	}
	else
	{
		for(all the rows the currentShip would take up)
		{
			if(ship will overlap another ship or the ship will be off the board vertically)
			{
				 return false;
			}
		}
	}

	return true


	PlaceShipOnBoard(player, ship, position, orientation)
	-----------------------------------

	ship.position = position
	ship.orientation = orientation

	if( orientation == HORIZONTAL)
	{
		for(all the columns the ship would take up)
		{
			set the ship part on the board at position.row and current column
		}
	}
	else
	{
		for(all the rows that the ship would take up)
		{
			set the ship part on the board at current row and position.col
		}
	}

	UpdateBoards(guess, currentPlayer, otherPlayer)
	--------------------------------

	if(otherplayer's ship board at guess is a ship)
	{
		//hit
		 set hit on the currentPlayer's guess board
		 apply damage to the otherPlayer's shipBoard
		 return shipType
	}
	else
	{
		set miss on the currentPlayer's guess board

		return ST_NONE
	}

	IsGameOver(player1, player2)
	----------------------------

	return AreAllShipsSunk(player1) || AreAllShipsSunk(player2)


	AreAllShipsSunk(player)
	------------------------

	for(all the player's ships)
	{
		if(!IsSunk(player, currentShip))
		{
			return false
		}
	}
	return true


	IsSunk(player, ship)
	--------------------

	if(ship.orientation == HORIZONTAl)
	{
		for(columns that ship takes up)
		{
			if(currentPosition on the shipBoard is not hit)
			{
				return false
			}
		}
	}
	else
	{
		for(rows that the ship takes up)
		{
			if(currentPosition on the shipBoard is not hit)
			{
				return false
			}
		}
	}

	return true


*/



int main()
{
    
   return 0;
}


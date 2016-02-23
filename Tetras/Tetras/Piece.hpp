//
//  Piece.hpp
//  Tetras
//
//  Created by Ian Wilson on 12/30/15.
//  Copyright (c) 2015 APM. All rights reserved.
//

#ifndef __Tetras__Piece__
#define __Tetras__Piece__

#include <SFML/Graphics.hpp>

class Piece
{
public:
    static const unsigned short int NB_ROTATIONS = 4;
    static const unsigned short int MATRIX_SIZE = 4;
    static const unsigned int PIVOT_Y = 1;
    static const unsigned int PIVOT_X = 2;
    enum TetriminoTypes {O = 0, I, S, Z, L, J, T, SIZE};
    static const sf::Color TetriminoColors[TetriminoTypes::SIZE];
    static const char TetriminoPieces[TetriminoTypes::SIZE][NB_ROTATIONS][MATRIX_SIZE][MATRIX_SIZE];
    
    Piece(const Piece&) = delete;
    Piece& operator=(const Piece&);
    Piece(TetriminoTypes type, short int rotation);
    TetriminoTypes getType()const;
    void setRotation(short int rotation);
    short int getRotation()const;
    void setPosition(int x,int y);
    
    int getPosX()const;
    int getPosY()const;
    sf::Time getTimeSinceLastMove()const;
    
private:
    const TetriminoTypes _type; //< the piece type
    short int _rotation; //< the piece rotation
    int _positionX; //< position in the board
    int _positionY;//< position in the board
    sf::Clock _clockSinceLastMove;
};

#endif /* defined(__Tetras__Piece__) */

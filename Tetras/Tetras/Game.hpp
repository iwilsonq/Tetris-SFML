//
//  Game.h
//  Tetras
//
//  Created by Ian Wilson on 12/30/15.
//  Copyright (c) 2015 APM. All rights reserved.
//

#ifndef __Tetras__Game__
#define __Tetras__Game__

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include "Stats.hpp"
#include "Board.hpp"
#include "Piece.hpp"

class Piece;

class Game
{
public:
    Game(const Game&) = delete;
    Game& operator=(const Game&) = delete;
    Game();
    void run(int minimum_frame_per_second);
    
private:
    void processEvents();
    void update(sf::Time deltaTime);
    void render();
    void newPiece();
    
    sf::RenderWindow _window;
    std::unique_ptr<Piece> _currentPiece;
    Board _board;
    Stats _stats;
    sf::Time _nextFall;
    
    
};

#endif /* defined(__Tetras__Game__) */

#pragma once

#include "../utils/GameContext.h"
#include "../utils/GameState.h"
#include "../utils/Enums.h"
#include "../entities/Entities.h"
#include "BaseState.h"
#include "../arduboyTones/ArduboyTonesExt.h"

class PlayGameState : public BaseState { //GameState<GameContext, GameStateType> {

  private:
 
    Gorilla gorilla;
    Barrel barrels[6];
    Girder girders[2];
    Lever lever;
    Player player;
    Crane crane;
    bool playing = false;
    
  public:

    void activate(StateMachine & machine) override;
    void update(StateMachine & machine) override;
    void render(StateMachine & machine) override;

  private:

    uint8_t getActiveGirderCount();
    uint8_t getGirderMaxPosition();
    uint8_t getDisabledGirderIndex();

};
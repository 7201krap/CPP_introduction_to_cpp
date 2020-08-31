// 상수 : 변하지 않는 수
// 변수 : 변할 수 있는 수

#include <stdio.h>

enum EGame_state {
  GAMESTATE_MAINMENU,
  GAMESTATE_PLAY,
  GAMESTATE_PAUSED,
  GAMESTATE_GAMEOVER
};

int main(){
  int current_state = GAMESTATE_MAINMENU;

  while (true){
    switch (current_state){
    case GAMESTATE_MAINMENU:
      break;

    case GAMESTATE_PLAY:
      break;

    case GAMESTATE_PAUSED:
      break;

    case GAMESTATE_GAMEOVER:
      break;
    }
  }
}

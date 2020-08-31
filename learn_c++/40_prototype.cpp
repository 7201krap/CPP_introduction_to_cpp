// prototype : 원형, 시제품

#include <stdio.h>

void drawSquare();
void walk(int distance);
void rotate(int angle);

// // This is also possible
// void walk(int );
// void rotate(int );

int main(){
  drawSquare();
}

void walk(int distance){
  printf("Walked %d cm\n", distance);
}

void rotate(int angle){
  printf("Rotated %d-degree cm\n", angle);
}

void drawSquare(){
  for(int i=0; i<4; i++){
    walk(10);
    rotate(90);
    printf("\n");
  }
}

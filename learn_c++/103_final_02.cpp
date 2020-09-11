#include <iostream>

using namespace std;

class GameWindow{
public:
  GameWindow();
  GameWindow(const int , const int);

  void ResizeWindow(const int, const int);

  int GetWidth() const;
  int GetHeight() const;

private:
  int width;
  int height;
};

GameWindow::GameWindow() : width(800), height(800) { }
GameWindow::GameWindow(const int w, const int h) {
  ResizeWindow(w,h);
}

int GameWindow::GetWidth() const { return width; }
int GameWindow::GetHeight() const { return height; }
void GameWindow::ResizeWindow(const int a, const int b){

  if (a < 800){
    width = 800;
  } else width = a;

  if (b < 600){
    height = 600;
  } else height = b;

}

int main(){
  GameWindow mainWindow;
  GameWindow mainWindow2;
  GameWindow mainWindow3;
  GameWindow mainWindow4 = GameWindow(500,600);

  mainWindow.ResizeWindow(1366, 768);
  mainWindow2.ResizeWindow(400, 1000);
  mainWindow3.ResizeWindow(1000, 200);


  cout << mainWindow.GetWidth() << "x" << mainWindow.GetHeight() << endl;
  cout << mainWindow2.GetWidth() << "x" << mainWindow2.GetHeight() << endl;
  cout << mainWindow3.GetWidth() << "x" << mainWindow3.GetHeight() << endl;
  cout << mainWindow4.GetWidth() << "x" << mainWindow4.GetHeight() << endl;



}

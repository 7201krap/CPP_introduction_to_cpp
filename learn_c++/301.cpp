#include <iostream>
#include <string>

using namespace std;

class Image {
public:
	operator string() {
		return "사진";
	}
};

class Message {
public:
	Message(int sendTime, string sendName)
		: sendTime(sendTime), sendName(sendName) {}

	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }
  virtual string GetContent() const { return ""; }  // 가상함수 : 이 함수가 호출이 될수도 있고, 안 될수도 있다.

private:
	int sendTime;
	string sendName;
};

class TextMessage : public Message {
public:
	TextMessage(int sendTime, string sendName, string text)
		: Message(sendTime, sendName), text(text) {}

	string GetText() const { return text; }
  string GetContent() const { return text; }

private:
	string text;
};

class ImageMessage : public Message {
public:
	ImageMessage(int sendTime, string sendName, Image *image)
		: Message(sendTime, sendName), p_image(image) {}

	Image *GetImage() const { return p_image; }
  string GetContent() const { return (string)*p_image; }  // p_image 는 객체의 주소. *p_image 는 객체

private:
	Image *p_image;
};

void printMessage(const Message &m){  // 참조(reference)는 객체를 넘겨서 받아야 한다. m 은 객체 그 자체이다. m == *hello, m == *dog
  cout << "보낸 시간 : "  << m.GetSendTime() << endl;
	cout << "보낸 사람 : "  << m.GetSendName() << endl;
	cout << "  내 용   : " << m.GetContent()  << endl;
	cout << endl;
}

int main() {
	Image *p_dogImage  = new Image();

  // ** 부모의 포인터 변수 또는 레퍼런스 변수(m)는 자식(TextMessage, ImageMessage)을 가르킬 수 있다. **
  // 만약에 가르킬때 오버라이딩 된 함수가 있으면, 부모의 함수를 사용한다. *하지만* 만약에 부모의 함수에 virtual 이 되어 있을 경우, 자식의 함수를 사용한다.

  Message *messages[] = { // messages 는 이제 포인터 변수이므로, message[0], message[1], ... 는 주소값을 가지게 된다.
    new TextMessage(10, "두들", "안녕"),      // message[0] 에는 " new TextMessage(10, "두들", "안녕") " 의 객체의 주소가 담기게 된다.
                                            // 따라서 *message[0] 를 하면 객체 그 자체가 된다.
    new ImageMessage(20, "두들", p_dogImage) // message[1] 에는 " new ImageMessage(20, "두들", p_dogImage) " 의 객체의 주소가 담기게 된다.
                                            // // 따라서 *message[1] 를 하면 객체 그 자체가 된다.
  };

  for(Message *m : messages){ // m에는 messages[0], messages[1] 이 들어간다.
    printMessage(*m);
  }
  printf("===== THESE TWO VALUES SHOULD HAVE SAME OUTPUTS =====\n");
  for(int i=0; i < 2; i++){
    printMessage(*messages[i]);
    // 객체 그 자체를 레퍼런스 변수에 전달하여야 한다.
  }



	delete p_dogImage;
}

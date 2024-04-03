#include <SFML/Graphics.hpp>

using namespace sf;

int main() {
    // 창 생성
    RenderWindow window(VideoMode(1280, 720), "SFML 이미지 띄우기");

    // 이미지 로드
    Texture X_15Up, X_10Up, Random_10Up, Random_10Down, All_15Up, Button6, ButtonHover7, Button8, 
            ButtonHover9, Button10, ButtonHover11, Button12, ButtonHover13, Button14, ButtonHover15;
    if (!X_15Up.loadFromFile("C:/Users/beom7/OneDrive/바탕 화면/image/X_15Up.jpg") ||
        !X_10Up.loadFromFile("C:/Users/beom7/OneDrive/바탕 화면/image/X_10Up.jpg") ||
        !Random_10Up.loadFromFile("C:/Users/beom7/OneDrive/바탕 화면/image/Random_10Up.jpg") ||
        !Random_10Down.loadFromFile("C:/Users/beom7/OneDrive/바탕 화면/image/Random_10Down.jpg") ||
        !All_15Up.loadFromFile("C:/Users/beom7/OneDrive/바탕 화면/image/All_15Up.jpg") ||
        !Button6.loadFromFile("C:/Users/beom7/OneDrive/바탕 화면/image/Button.png") ||
        !ButtonHover7.loadFromFile("C:/Users/beom7/OneDrive/바탕 화면/image/ButtonHover.png") ||
        !Button8.loadFromFile("C:/Users/beom7/OneDrive/바탕 화면/image/Button.png") || 
        !ButtonHover9.loadFromFile("C:/Users/beom7/OneDrive/바탕 화면/image/ButtonHover.png") ||
        !Button10.loadFromFile("C:/Users/beom7/OneDrive/바탕 화면/image/Button.png") ||
        !ButtonHover11.loadFromFile("C:/Users/beom7/OneDrive/바탕 화면/image/ButtonHover.png") ||
        !Button12.loadFromFile("C:/Users/beom7/OneDrive/바탕 화면/image/Button.png") ||
        !ButtonHover13.loadFromFile("C:/Users/beom7/OneDrive/바탕 화면/image/ButtonHover.png") || 
        !Button14.loadFromFile("C:/Users/beom7/OneDrive/바탕 화면/image/Button.png") ||
        !ButtonHover15.loadFromFile("C:/Users/beom7/OneDrive/바탕 화면/image/ButtonHover.png"))
    {
        return -1;
    }

    // 이미지 스프라이트 생성
    Sprite X_15UpSprite(X_15Up), X_10UpSprite(X_10Up), Random_10UpSprite(Random_10Up), 
            Random_10DownSprite(Random_10Down), All_15UpSprite(All_15Up);

    // X_15Up Button, ButtonHover 스프라이트, 크기 설정
    Sprite sprite6(Button6); sprite6.setScale(0.25f, 0.25f); 
    Sprite sprite7(ButtonHover7); sprite7.setScale(0.25f, 0.25f); 

    // X_10Up Button, ButtonHover 스프라이트, 크기 설정 
    Sprite sprite8(Button8); sprite8.setScale(0.25f, 0.25f); 
    Sprite sprite9(ButtonHover9); sprite9.setScale(0.25f, 0.25f); 

    // Random_10Up Button, ButtonHover 스프라이트, 크기 설정 
    Sprite sprite10(Button10); sprite10.setScale(0.25f, 0.25f); 
    Sprite sprite11(ButtonHover11); sprite11.setScale(0.25f, 0.25f); 

    // Random_10Down Button, ButtonHover 스프라이트, 크기 설정 
    Sprite sprite12(Button12); sprite12.setScale(0.25f, 0.25f); 
    Sprite sprite13(ButtonHover13); sprite13.setScale(0.25f, 0.25f); 
    
    // All_15Up Button, ButtonHover 스프라이트, 크기 설정 
    Sprite sprite14(Button14); sprite14.setScale(0.25f, 0.25f); 
    Sprite sprite15(ButtonHover15); sprite15.setScale(0.25f, 0.25f); 

    // 스프라이트 위에 버튼 이미지 배치
    sprite6.setPosition(X_15UpSprite.getPosition()); sprite7.setPosition(X_15UpSprite.getPosition());
    sprite8.setPosition(X_10UpSprite.getPosition()); sprite9.setPosition(X_10UpSprite.getPosition());
    sprite10.setPosition(Random_10UpSprite.getPosition()); sprite11.setPosition(Random_10UpSprite.getPosition());
    sprite12.setPosition(Random_10DownSprite.getPosition()); sprite13.setPosition(Random_10DownSprite.getPosition());
    sprite14.setPosition(All_15UpSprite.getPosition()); sprite15.setPosition(All_15UpSprite.getPosition());
    
    // Button 위치 설정
    sprite6.setPosition(1050, 600); sprite7.setPosition(1050, 600); sprite8.setPosition(1050, 600); sprite9.setPosition(1050, 600); sprite10.setPosition(1050, 600);
    sprite11.setPosition(1050, 600); sprite12.setPosition(1050, 600); sprite13.setPosition(1050, 600); sprite14.setPosition(1050, 600); sprite15.setPosition(1050, 600);

    bool button1 = false;
    bool button2 = false;
    bool button3 = false;
    bool button4 = false;

    // 스프라이트의 크기를 윈도우의 크기에 맞게 조정
    Vector2u windowSize = window.getSize();
    X_15UpSprite.setScale((float)windowSize.x / X_15Up.getSize().x, (float)windowSize.y / X_15Up.getSize().y);

    // 이벤트 루프
    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();

            if (event.type == Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == Mouse::Left)
                {
                    if (sprite6.getGlobalBounds().contains(window.mapPixelToCoords(Mouse::getPosition(window)))) { button1 = true;}
                        if (button1 == true)
                        {
                            if (sprite8.getGlobalBounds().contains(window.mapPixelToCoords(Mouse::getPosition(window)))) { button2 = true;}
                        }
                        if (button2 == true)
                        {
                            if (sprite10.getGlobalBounds().contains(window.mapPixelToCoords(Mouse::getPosition(window)))) { button3 = true;}
                        }
                        if (button3 == true)
                        {
                            if (sprite12.getGlobalBounds().contains(window.mapPixelToCoords(Mouse::getPosition(window)))) { button4 = true;}
                        }
                        if (button4 == true)
                        {
                            if (sprite14.getGlobalBounds().contains(window.mapPixelToCoords(Mouse::getPosition(window))));
                        }
                }
            }

            window.clear();
            window.draw(X_15UpSprite); // 스프라이트 그리기
            window.draw(sprite6);

            if (button1 == true) {window.draw(X_10UpSprite); window.draw(sprite8);}
            if (button2 == true) {window.draw(Random_10UpSprite); window.draw(sprite10);}
            if (button3 == true) {window.draw(Random_10DownSprite); window.draw(sprite12);}
            if (button4 == true) {window.draw(All_15UpSprite); window.draw(sprite14);}

            window.display();
        }     
    }
    return 0;
}

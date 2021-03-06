// MenuBSFML.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include <Windows.h>
#include "Function.h"
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
using namespace sf;

int main()
{
	Image Backround,
		Exit1,
		Exit2,
		Turn,
		MainButton1,//241 69
		MainButton2,
		qwest1,
		qwest2,
		autor[6],
		Micon,
		BackendButtonOff,
		BackendButtonOn,
		ButtonOff,
		ButtonOn;
	

	Backround.loadFromFile("image/Backend.png");//Backend.png

	Exit1.loadFromFile("image/exit1.png");
	Exit2.loadFromFile("image/exit2.png");
	Exit1.createMaskFromColor(Color(0, 0, 0));

	Turn.loadFromFile("image/turn.png");

	MainButton1.loadFromFile("image/mainbutton1.png");
	MainButton1.createMaskFromColor(Color(0, 0, 0));

	MainButton2.loadFromFile("image/mainbutton2.png");
	MainButton2.createMaskFromColor(Color(0, 0, 0));

	qwest1.loadFromFile("image/qwest1.png");
	qwest2.loadFromFile("image/qwest2.png");
	qwest1.createMaskFromColor(Color(0, 0, 0));
	qwest2.createMaskFromColor(Color(0, 0, 0));

	Micon.loadFromFile("image/MAicon.png");
	
	BackendButtonOff.loadFromFile("image/BackendButtonOff.png");
	BackendButtonOn.loadFromFile("image/BackendButtonOn.png");
	ButtonOff.loadFromFile("image/ButtonOff.png");
	ButtonOn.loadFromFile("image/ButtonOn.png");
	ButtonOff.createMaskFromColor(Color(0, 0, 0));
	ButtonOn.createMaskFromColor(Color(0, 0, 0));



	autor[0].loadFromFile("image/Autor1.png");
	autor[1].loadFromFile("image/Autor2.png");
	autor[2].loadFromFile("image/Autor3.png");
	autor[3].loadFromFile("image/Autor4.png");
	autor[4].loadFromFile("image/Autor5.png");
	autor[5].loadFromFile("image/Autor6.png");




	Vector2u BackSize = Backround.getSize();
	//Backround.createMaskFromColor(Color(255, 255, 255));
	//Backround.create(800, 600, Color(255, 255, 255, 155));
	VideoMode WinVivMod(BackSize.x, BackSize.y);
	RenderWindow window(WinVivMod, "GUIProgramm", Style::None); //384x467
	window.setFramerateLimit(30);
	
	window.setIcon(64, 64, Micon.getPixelsPtr());

	HWND hWndMyProgram = GetMyHWND("GUIProgramm");

	Texture TBR,
		TExit1,
		TExit2,
		TTurn,
		TMainButton1,
		TMainButton2,
		Tqwest1,
		Tqwest2,
		Tautor[6],
		TBackendButtonOff,
		TBackendButtonOn,
		TButtonOff,
		TButtonOn;
	

	
	//TMenu.loadFromImage(MImage);
	TBR.loadFromImage(Backround);
	TExit1.loadFromImage(Exit1);
	TExit2.loadFromImage(Exit2);
	TTurn.loadFromImage(Turn);
	TMainButton1.loadFromImage(MainButton1);
	TMainButton2.loadFromImage(MainButton2);
	Tqwest1.loadFromImage(qwest1);
	Tqwest2.loadFromImage(qwest2);

	Tautor[0].loadFromImage(autor[0]);
	Tautor[1].loadFromImage(autor[1]);
	Tautor[2].loadFromImage(autor[2]);
	Tautor[3].loadFromImage(autor[3]);
	Tautor[4].loadFromImage(autor[4]);
	Tautor[5].loadFromImage(autor[5]);

	TBackendButtonOff.loadFromImage(BackendButtonOff);
	TBackendButtonOn.loadFromImage(BackendButtonOn);
	TButtonOff.loadFromImage(ButtonOff);
	TButtonOn.loadFromImage(ButtonOn);




	Vector2u WinSize =  window.getSize();

	Sprite BackEnd(TBR),
		BExit1(TExit1),
		BExit2(TExit2),
		STurn(TTurn),
		SMainButton1(TMainButton1),
		SMainButton2(TMainButton2),
		Sqwest1(Tqwest1),
		Sqwest2(Tqwest2),
		Sautor1(Tautor[0]),
		Sautor2(Tautor[1]),
		Sautor3(Tautor[2]),
		Sautor4(Tautor[3]),
		Sautor5(Tautor[4]),
		Sautor6(Tautor[5]),
		SBackendButtonOff(TBackendButtonOff),
		SBackendButtonOn(TBackendButtonOn),
		SButtonOff(TButtonOff),
		SButtonOn(TButtonOn);

#define CenterX WinSize.x - WinSize.x/2
#define CenterY WinSize.y - WinSize.y/2


	BackEnd.setPosition(0, 0);
	BExit1.setPosition(WinSize.x - 34, 0);
	BExit2.setPosition(WinSize.x - 34, 0);
	STurn.setPosition(WinSize.x - 68, 0);
	SMainButton1.setPosition(71.5, 50);
	SMainButton2.setPosition(71.5, 50);
	Sqwest1.setPosition(20, WinSize.y - 82);
	Sqwest2.setPosition(20, WinSize.y - 82);

	Sautor1.setPosition(WinSize.x - 97, WinSize.y - 82);
	Sautor2.setPosition(WinSize.x - 97, WinSize.y - 82);
	Sautor3.setPosition(WinSize.x - 97, WinSize.y - 82);
	Sautor4.setPosition(WinSize.x - 97, WinSize.y - 82);
	Sautor5.setPosition(WinSize.x - 97, WinSize.y - 82);
	Sautor6.setPosition(WinSize.x - 97, WinSize.y - 82);

	SBackendButtonOff.setPosition(CenterX + 100, CenterY);
	SBackendButtonOn.setPosition(CenterX + 100, CenterY);
	SButtonOff.setPosition(CenterX + 95, CenterY - 2);
	SButtonOn.setPosition(CenterX + 20 + 95, CenterY - 42);

	Font font;
	font.loadFromFile("Shrift/Shrift.ttf");
	Text text("", font, 25),
		version("BetaVersion 1.0.0", font, 20);
	text.setString("   Hello username\n my name is lrobotl");
	text.setPosition(CenterX-110, CenterY-100);
	version.setPosition(CenterX-70, 5);

	Color CSTurn;
	CSTurn = STurn.getColor();
	Vector2f CoordButt = SButtonOff.getPosition();
	bool Button = false;
	
	while (window.isOpen())
	{
		Event mEvent;
		while (window.pollEvent(mEvent))
		{
			Vector2i Position = Mouse::getPosition();// коорд относительно рабочего стола
			Vector2i W2M = Mouse::getPosition(window);// коорд относительно моего окна

			if (IntRect(0, 0, WinSize.x-68, 35).contains(Mouse::getPosition(window)) && (mEvent.key.code == Mouse::Left))
			{
				while ((mEvent.type == Event::MouseButtonPressed)==Mouse::isButtonPressed(Mouse::Left))//while
				{
					if (GetAsyncKeyState(VK_LBUTTON))
					{
						Vector2i NewCoordWin;
						Position = Mouse::getPosition();//новые коорд относительно рабочего стола(если мышка нажата и двигается)
						NewCoordWin.x = Position.x - W2M.x;//новые коорд относительно моего окна на рабочем столе 
						NewCoordWin.y = Position.y - W2M.y;
						window.setPosition(NewCoordWin);
					}
					else
						break;
					Sleep(10);
				}
			}
		
			

				
		}	

		if (IntRect(WinSize.x - 68, 7, 34, 30).contains(Mouse::getPosition(window)))
		{
			STurn.setColor(Color(220,220,220));
			if (Mouse::isButtonPressed(Mouse::Left))
				ShowWindow(hWndMyProgram, SW_MINIMIZE);			
		}
		else
			STurn.setColor(CSTurn);


		window.clear();
		window.draw(BackEnd);
		
		if (IntRect(WinSize.x - 34, 7,34, 30).contains(Mouse::getPosition(window)))
		{		
			window.draw(BExit2);
			if(Mouse::isButtonPressed(Mouse::Left))
				window.close();
		}	
		else
			window.draw(BExit1);
		
		if (IntRect(71.5, 50, 241, 69).contains(Mouse::getPosition(window)))
		{
			window.draw(SMainButton2);
			//if (Mouse::isButtonPressed(Mouse::Left))
				//Hack();

		}
		else
			window.draw(SMainButton1);

		if (IntRect(20, WinSize.y-82, 77, 66).contains(Mouse::getPosition(window)))
		{
			window.draw(Sqwest2);
			//if (Mouse::isButtonPressed(Mouse::Left))
			//Hack();

		}
		else
			window.draw(Sqwest1);


		window.draw(STurn);
		window.draw(version);
		
		if (Button)
		{
			window.draw(SBackendButtonOn);
			window.draw(SButtonOn);
			window.draw(text);
		}
		else
		{
			window.draw(SBackendButtonOff);
			window.draw(SButtonOff);		
		}

		if (IntRect(CoordButt.x, CoordButt.y - 2, 28, 27).contains(Mouse::getPosition(window)))
		{
			if (Mouse::isButtonPressed(Mouse::Left) && IntRect(CenterX + 95, CenterY - 2, 28, 27).contains(Mouse::getPosition(window)))
			{		
				SButtonOff.move(30, 0);
				CoordButt = SButtonOff.getPosition();
				SButtonOn.setPosition(CoordButt);
				Button = true;		
			}
			else if (Mouse::isButtonPressed(Mouse::Left) && IntRect(CoordButt.x, CoordButt.y - 2, 28, 27).contains(Mouse::getPosition(window)))
			{
				SButtonOn.move(-30, 0);
				CoordButt = SButtonOn.getPosition();
				SButtonOff.setPosition(CoordButt);
				Button = false;
			}
		}

		if (IntRect(WinSize.x-97, WinSize.y - 82, 77, 66).contains(Mouse::getPosition(window)))
		{
			//window.draw(Sautor2);
			for (int i = 0; i <= 5; i++)
			{
				if (i == 0)
				{
					window.draw(Sautor2);
					window.display();
					Sleep(50);
					if (!IntRect(WinSize.x - 97, WinSize.y - 82, 77, 66).contains(Mouse::getPosition(window)))
						break;
				}
				else if (i == 1)
				{
					window.draw(Sautor3);
					window.display();
					Sleep(50);
					if (!IntRect(WinSize.x - 97, WinSize.y - 82, 77, 66).contains(Mouse::getPosition(window)))
						break;
				}
				else if (i == 2)
				{
					window.draw(Sautor4);
					window.display();
					Sleep(50);
					if (!IntRect(WinSize.x - 97, WinSize.y - 82, 77, 66).contains(Mouse::getPosition(window)))
						break;
				}
				else if (i == 3)
				{
					window.draw(Sautor5);
					window.display();
					Sleep(50);
					if (!IntRect(WinSize.x - 97, WinSize.y - 82, 77, 66).contains(Mouse::getPosition(window)))
						break;
				}
				else if (i == 4)
				{
					window.draw(Sautor6);
					window.display();
					Sleep(50);
					if (!IntRect(WinSize.x - 97, WinSize.y - 82, 77, 66).contains(Mouse::getPosition(window)))
						break;
				}
				while (IntRect(WinSize.x - 97, WinSize.y - 82, 77, 66).contains(Mouse::getPosition(window)) && i==5)
				{
					//if (Mouse::isButtonPressed(Mouse::Left))
					window.draw(Sautor6);
					window.display();
					Sleep(50);
				}

			}
		}
		else
			window.draw(Sautor1);
	
		window.display();
	}

    return 0;
}


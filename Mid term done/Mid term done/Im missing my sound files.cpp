#include <iostream>
#include <string>
#include <ctime>
#include <Windows.h>
using namespace std;
int main() {
	int room = 1;
	string input;
	string item[5];////Items you pick up in the game

				   //declation
	
		srand(time(NULL));
		while (true) {
			void spooky();//function call
			
		}

	while (input != "quit") {
		switch (room) {
		case 1:
			cout << "You are in a room that has dim light, you see a door with the word east" << endl;// // // 
			cout << "you can now go East" << endl;//show you where you are going
			cin >> input;
			if (input.compare("east") == 0 || input.compare("go east") == 0)
				room = 3;//takes you to room 3
			else if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 2;//takes you to the easter egg room
			cout << endl;
			break;
		case 2: ////easter egg room////
			cout << "!!!!!!!!!!!!!EAT SOHOEUENS SHORTS!!!!!!!!!!!" << endl;
			PlaySound(("booty.wav"), NULL, SND_FILENAME);
			input = "quit";//kills you
			system("Color 4A");
			system("pause");
			PlaySound(("dead.wav"), NULL, SND_FILENAME);

			break;
		case 3://first item
			cout << "You are in a kitchen full of uncooked food" << endl;
			if (item[3].compare("Bacon") != 0) //if there's NO bacon in their items//  
				cout << "you see a un-cooked Bacon on the table" << endl; //say it's in the room
			cout << "you can go North or South" << endl;
			cin >> input;
			if (input.compare("north") == 0 || input.compare("go north") == 0)
				room = 4;
			else if (input.compare("south") == 0 || input.compare("go south") == 0)//  
				room = 5;
			if (input.compare("bacon") == 0) { //Bacon is now in the inventory
				item[1] = "bacon"; //put in 
				cout << "You grabbed the good Bacon!" << endl;
				system("Color 4B");
				cout << endl;
				break;
		case 4://item in this room
			cout << "You enter a room with a PC master race in it," << endl;
			if (item[2].compare("PC") != 0)
				cout << "you see a pc master race on the table" << endl;
			cout << "you can go South" << endl;
			cin >> input;
			if (input.compare("south") == 0 || input.compare("go south") == 0)
				room = 3;
			if (input.compare("PC") == 0) {
				item[2] = "PC";
				cout << "You grabbed the pc master race!" << endl;
				system("Color 3F");
			}
			cout << endl;
			break;//hint room
		case 5:
			cout << "You enter a room with windows, you look out side and see your on the middle of no where!" << endl;// 
			cout << "You can go west" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 6;
			cout << endl;
			break;
		case 6://get rekt room
			cout << "You enter the Room, Oh no you look in the mirror" << endl;
			cout << " you see on the mirror of uglyness, a weird smell of PHO near by? What could it be?" << endl;
			cout << "You can go west or south" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 7;
			else if (input.compare("south") == 0 || input.compare("go south") == 0)
				room = 8;
			cout << endl;
			break;
		case 7://death room//
			cout << "You have entered the gas chamber, where the evil Molly recideds!!!" << endl;
			cout << "YOU COME TO DA RONG PLACE, EAT MY PHO AND..." << endl;
			void spooky();
			PlaySound(("molly.wav"), NULL, SND_FILENAME);
			input = "quit";
			system("Color 4A");
			system("pause");
			PlaySound(("dead.wav"), NULL, SND_FILENAME);
			break;
		case 8://hint room
			cout << "You enter the room of the evil Levi, hes not in here tho" << endl;
			cout << "I wonder why hes not here, but it looks like he just left." << endl;
			cout << "You can go west or north" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 9;
			else if (input.compare("north") == 0 || input.compare("go north") == 0)
				room = 6;
			cout << endl;
			break;
		case 9://spooky room
			cout << "You can smell a freshly open pack of gummy bears, somebody is nearby" << endl;
			cout << "The bag is emety, someone or something just opended seconds ago!?!?!?" << endl;
			cout << "You can go west or east or north" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 10;
			else if (input.compare("east") == 0 || input.compare("go east") == 0)
				room = 8;
			else if (input.compare("north") == 0 || input.compare("go north") == 0)
				room = 7;
			cout << endl;
			break;
		case 10://item room
			cout << "You can hear something in the next room, do you dare and find out!?" << endl;
			cout << "there is something on the floor? It looks like a gummy bear" << endl;
			cout << "You can go east or north" << endl;
			if (item[2].compare("gummy bear") != 0)
				cout << "you see a gummy bear" << endl;
			if (input.compare("gummy bear") == 0) { //gummy bear is now in the inventory
				item[1] = "gummy bear"; //put in 
				cout << "You grabbed the gummy bear!" << endl;
			}
				cin >> input;
				if (input.compare("north") == 0 || input.compare("go north") == 0)
					room = 11;
				cout << endl;
				break;
		case 11://final room
			cout << "You Have encounterd the DARK MASTER LEO!!! He calls over the evil SOCHOEUN, He will only let you go if you feed him and play computer games with him and molly" << endl;
			PlaySound(("cool.wav"), NULL, SND_FILENAME);
			PlaySound(("TJ.wav"), NULL, SND_FILENAME);			
			cout << "You must fill his request" << endl;			
			if (input.compare("give item") == 1) { //Bacon is now gone
				item[0] = "give item"; //put in 
				cin >> input;
				cout << "You gave him his bacon!" << endl;
				system("Color 5D");
				if (input.compare("give other") == 2) { //PC is now gone
					item[5] = "give other item"; //put in
					cin >> input;
					cout << "You gave him his PC master race!" << endl;
					system("Color 1A");
					cout << "The evil Levi has seen his evil ways and lets you go, he cries himslef to sleep with sochoeun" << endl;
					break;


				}//end switch

				int num = rand() % 3;
				switch (num) {
				case 0:
					cout << "You got Mollys pho!" << endl;
					break;
				case 1:
					cout << "You got mollys" << endl;
					break;
				case 2:
					cout << "You got Levy with a haircut!" << endl;
					break;
				}
			}//end while
		}
		
	}
	}cout << "Game over" << endl;
	exit(0);
}//end main

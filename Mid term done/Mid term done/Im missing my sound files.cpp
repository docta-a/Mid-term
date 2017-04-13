#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main() {
	int room = 1;
	string input;
	string item[5];////Items you pick up in the game

	while (input != "quit") {
		switch (room) {
		case 1:
			cout << "You are in a room that has dim light, you see a door with the word east" << endl;// // // 
			cout << "you can now go East" << endl;
			cin >> input;
			if (input.compare("east") == 0 || input.compare("go east") == 0)
				room = 3;
			else if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 2;
			break;
		case 2: ////easter egg room////
			cout << "!!!!!!!!!!!!!EAT SOHOEUENS SHORTS!!!!!!!!!!!" << endl;
			PlaySound(("booty.wav"), NULL, SND_FILENAME);
			input = "quit";
			system("Color 4A");
			system("pause");
			PlaySound(("dead.wav"), NULL, SND_FILENAME);

			break;
		case 3:
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
			break;
		case 5:
			cout << "You enter a room with windows, you look out side and see your on the middle of no where!" << endl;// 
			cout << "You can go west" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 6;
			break;
		case 6://get rekt room
			cout << "You enter the Room, Oh no you look in the mirror" << endl;
			cout << "You can go west or south" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 7;
			else if (input.compare("south") == 0 || input.compare("go south") == 0)
				room = 8;
			break;
		case 7://death room//
			cout << "You have entered the gas chamber, where the evil Molly recideds, you are dead!" << endl;
			PlaySound(("molly.wav"), NULL, SND_FILENAME);
			input = "quit";
			system("Color 4A");
			system("pause");
			PlaySound(("dead.wav"), NULL, SND_FILENAME);
			break;
		case 8:
			cout << "You enter the room of the evil Levi, hes not in here tho" << endl;
			cout << "You can go west or east" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 9;
			else if (input.compare("east") == 0 || input.compare("go east") == 0)
				room = 7;
			break;
		case 9:
			cout << "You can smell a freshly open pack of gummy bears, somebody is nearby" << endl;
			cout << "You can go west or east" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 10;
			else if (input.compare("east") == 0 || input.compare("go east") == 0)
				room = 8;
			break;
		case 10:
			cout << "You can hear something in the next room, do you dare and find out!?" << endl;
			if (item[2].compare("gummy bear") != 0)
				cout << "you see a gummy bear" << endl;
			if (input.compare("gummy bear") == 0) { //gummy bear is now in the inventory
				item[1] = "gummy bear"; //put in 
				cout << "You grabbed the gummy bear!" << endl;
				cout << "You can go west" << endl;
			}
				cin >> input;
				if (input.compare("west") == 0 || input.compare("go west") == 0)
					room = 11;
				break;
		case 11:
			PlaySound(("cool.wav"), NULL, SND_FILENAME);
			PlaySound(("TJ.wav"), NULL, SND_FILENAME);
			cout << "You Have encounterd the DARK MASTER LEO!!! He will only let you go if you feed him and play computer games with him" << endl;
			
			cout << "You must fill his request" << endl;			
			if (input.compare("give item") == 1) { //Bacon is now gone
				item[0] = "give item"; //put in 
				cin >> input;
				cout << "You gave him his bacon!" << endl;
				system("Color 5D");
				if (input.compare("give other") == 2) { //PC is now gone
					item[5] = "give other item"; //put in
					cin >> input;
					cout << "You grave him his PC master race!" << endl;
					system("Color 1A");
					cout << "The evil Levi has seen his evil ways and lets you go, he cries himslef to sleep with sochoeun" << endl;
					break;


				}//end switch
			}//end while
		}
		
	}
	}cout << "Game over" << endl;
	exit(0);
}//end main

//RPG Assignment
// Austin Kolegraff 
// November 2013

#include <iostream>
#include <ctime>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector <string> rand_name;

vector <string>::iterator myIterator;

int main()
{
  rand_name.push_back("Fahrquad");
  rand_name.push_back("Lord Scandall");
  rand_name.push_back("Sir Pantsalot");
  rand_name.push_back("Gremloid");
  rand_name.push_back("Flort Swaggins");
  rand_name.push_back("Oh");
  rand_name.push_back("Christine");
  rand_name.push_back("Jenkins");
  rand_name.push_back("Professor X");
  rand_name.push_back("Doge");
  rand_name.push_back("Toast Crunch");

  // NK Edit:  Not a good idea to use timstamps as a random number seed.
  srand(123456L);
  int rand_armor;
  rand_armor = rand() & 1 + 100; //Calculating the random health and armor that will be lost
  char i_accept;
  cout << "Welcome to the Excellent Adventure." << endl;
  cout << "Follow the onscreen directions and everything will go as planned." << endl;
  cout << "Hello brave soldier, first case of action, we assign you with a name.\n";

  srand(time(0));
  random_shuffle(rand_name.begin(), rand_name.end()); //Algorithm used to shuffle through vector and define rand_name
  cout << "\nYour name is " << rand_name[0]; 

  
  cout << "\n\nAlrighty then, " << rand_name[0] << " do you accept the challenge?" << endl;
  cout << "I warn you this task may be very dangerous." << endl;
  cout << "\n*To accept challenge type 'y'*: ";
  cin >> i_accept;

  while (i_accept == 'y')
    {
      int chest; // Many variables being assigned
      char restart;
      string class_type;
      int next;
      int next1; 
      int next2;
      int beast;
      int beast2;
      int gift;
      string weapon;
      int choose;
      int health = 100;
      int armor = 0;
      int xp = 0;
      cout << "\n\nVery good. Now, tell me. To which class do you belong? Choose wisely." << endl;
      cout << "\n*Select: 1)Soldier  2)Maniac  3)Cyborg  4)Bomber: ";
      cin >> choose;
      
      while (choose == 1, 2, 3, 4)
	{
	  if (choose == 1)
	    {
	      class_type = "Soldier";
	    }
	  else if (choose == 2)
	    {
	      class_type = "Maniac";
	    }
	  else if (choose == 3)
	    {
	      class_type = "Cyborg";
	    }
	  else if (choose == 4)
	    {
	      class_type = "Bomber";
	    }
	  weapon = "None"; 
	  cout << "\nYou have chosen to become a " << class_type << "." << endl;
	  cout << "What would you like to do next?" << endl;
	  cout << "\n1)Move  2)View Stats  3)Rest  4)Quit: ";
	  cin >> next;

	  while (next == 1)
	    {
	      cout << "\nYou are walking through the forest only to find a chest." << endl;
	      cout << "\nYou have lost 5 Health Points.";
	      cout << "\nWhat do you want to do?\n";
	      health = health - 5;
	      cout << "\n1)Open chest  2)Continue on: ";
	      cin >> chest;
	      
	      if (chest == 1)
		{
		  if (choose == 1)
		    {
		      weapon = "Rifle";
		    }
		  else if (choose == 2)
		    {
		      weapon = "Chainsaw";
		    }
		  else if (choose == 3)
		    {
		      weapon = "Lazer Gun";
		    }
		  else if (choose == 4)
		    {
		      weapon = "Grenade";
		    }
		  cout << "You find a " << weapon << "." << endl;
		  cout << "+ 10 XP";
		  xp = xp+10;
		  cout << "\nWhat would you like to do next?\n";
		  cout << "\n1)Move  2)View Stats  3)Rest  4)Quit: ";
		  cin >> next1;
		  
		  while (next1 == 1)
		    {
		      cout << "You approach a cabin.\n";
		      cout << "You knock on the door.\n";
		      cout << "A man opens the door and says,\n";
		      cout << "Hello weary traveler, would you like to accept a gift?\n\n";
		      cout << "1)Accept  2)Decline: ";
		      cin >> gift;

		      if (gift == 1)
			{
			  cout << "\nYou have accepted some armor.\n";
			  cout << "ARMOR + 100";
			  armor = armor + 100;
			}
		      else if (gift == 2)
			{
			  cout << "\nYou have declined.\n";
			}
		      cout << "\nWhat would you like to do next?";
		      cout << "\n1)Move  2)View Stats  3)Rest  4)Quit: ";
		      cin >> next2;

		      if (next2 == 1)
			{
			  cout << "\nYou continue on and find your final destination.\n";
			  cout << "It is a large warehouse. You approach the door.\n";
			  cout << "You slowly open the door and walk in to the warehouse.\n";
			  cout << "There is a large beast in the middle of the warehouse.\n";
			  cout << "\nIt is sleeping. What do you want to do?";
			  cout << "\n\n1)Attack It  2)Run Away: ";
			  cin >> beast;

			  if (beast == 1)
			    {
			      if (choose == 1)
				{
				  cout << "You fire a shot directly at it's head.\n";
				}
			      else if (choose == 2)
				{
				  cout << "You use your chainsaw and chop off it's tail.\n";
				}
			      else if (choose == 3)
				{
				  cout << "You fire a Laser at it's eye.\n";
				}
			      else if (choose == 4)
				{
				  cout << "You throw a grenade and it explodes, killing the beast.\n";
				  cout << "YOU HAVE WON! Would you like to play again?(y/n): ";
				  cin >> i_accept;
				  break;
				}
			      cout << "You inspect the beast. It raises a hoof and kicks you.\n";
			      
			      if (armor == 100)
				{
				  cout << "\nYou have lost " << rand_armor << " armor.\n";
				  armor = armor - rand_armor;
				}
			      else if (armor <= 0)
				{
				  cout << "\nYou have lost " << rand_armor << " health.\n";
				  health = health - rand_armor;

				}
			      cout << "\n\nWhat would you like to do next?";
			      cout << "\n\n1)Attack it again 2)Run Away: ";
			      cin >> beast2;
			      
			      if (beast2 == 1)
				{
				  if (choose != 2)
				    {
				      cout << "You shoot it one more time in the head.\n";
				      cout << "It dies. You have won!\n\n";
				      cout << "Would you like to play again?(y/n)";
				      cin >> i_accept;
				      break;
				    }
				  else if (choose == 2)
				    {
				      cout << "You swing your chainsaw at the beast, chopping off its head.\n";
				      cout << "It dies. You have won!\n\n";
				      cout << "Would you like to play again?(y/n)";
				      cin >> i_accept;
				      break;
				    }
				}
			      else if(beast2 == 2)
				{
				  cout << "You run away as fast as you can,\n";
				  cout << "but you are no match for the beast.\n";
				  cout << "It catches you and rips you in half.\n\n";
				  cout << "Would you like to play again?(y/n)";
				  cin >> i_accept;
				  break;
				}
			    }
			  else if(beast == 2)
			    {
			      cout << "You run away as fast as you can,\n";
			      cout << "but you are no match for the beast.\n";
			      cout << "It catches you and rips you in half.\n\n";
			      cout << "Would you like to play again?(y/n)";
			      cin >> i_accept;
			    }
			}
		      if (next2 == 2)
			{
			  cout << "\nName:  " << rand_name[0] << endl;
			  cout << "Class   :  " << class_type << endl;
			  cout << "Health  :  " << health << endl;
			  cout << "Armor   :  " << armor << endl;
			  cout << "XP      :  " << xp << endl;
			  cout << "Weapon  :  " << weapon;
			  
			  cout << "\n\nAfter viewing your stats, you decide to move along.\n";
			  next2 = 1;
			}
		    }
		  if (next1 == 2)
		    {
		      cout << "\nName:  " << rand_name[0] << endl;
		      cout << "Class   :  " << class_type << endl;
		      cout << "Health  :  " << health << endl;
		      cout << "Armor   :  " << armor << endl;
		      cout << "XP      :  " << xp << endl;
		      cout << "Weapon  :  " << weapon;
		      
		      cout << "\n\nAfter viewing your stats, you decide to move along.";
		      next1 = 1;
		      continue;
		    }
		  else if(next1 == 3)
		    {
		      cout << "Your health is back to 100.";
		      health = 100;
		      next1 = 1;
		    }
		}

	      
	      else if (chest == 2)
		{
		  cout << "You continue on and spot a lion." << endl;
		  cout << "You are eaten. GAME OVER" << endl;
		  cout << "\nWould you like to continue where you left off? (y/n): " << endl;
		  cin >> restart;
		  if (restart == 'y')
		    {
		      next = 1;
		    }
		  else if (restart == 'n')
		    {
		      next = 4;
		    }
		}

	    }
	  if (next == 2)
	    {
	      cout << "\nName:  " << rand_name[0] << endl; //Stats gather information from user input
	      cout << "Class   :  " << class_type << endl;
	      cout << "Health  :  " << health << endl;
	      cout << "Armor   :  " << armor << endl;
	      cout << "XP      :  " << xp << endl;
	      cout << "Weapon  :  " << weapon;
	      
	      next = 1;
	      continue;

	    }
	  else if (next == 3)
	    {
	      cout << "'THERE'S NO TIME FOR REST. GET MOVING!'";
	      next == 1;
	      continue;
	    }
	  else if (next == 4)
	    {
	      cout << "\n\nThank you for playing.";
	      break;
	    }
	  break;
	}
      break;
    }
}

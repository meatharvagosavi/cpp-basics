#include<iostream>
#include<string>
using namespace std;

class Dog {
	
	public:
		int age;
		string colour;
		string breed;
		string pet_name;
		
		void printing(){
			cout << "age is:" << age << endl << "colour is:" << colour << endl;
		}
		
		void againthis(){
   	cout << "breed is:" << breed << endl << "pet name is:" << pet_name << endl;
   }
	
};
   

int main()
{
	Dog d1;
		d1.age=11;
		d1.colour="red";
		d1.breed="german_shepard";
		d1.pet_name="kuku";
		d1.printing();
		d1.againthis();
		
	Dog d2;
		d2.age=12;
		d2.colour="grey";
		d2.breed="doberman";
		d2.pet_name="moti";
		d2.printing();
		d2.againthis();
	
	return 0;	
}

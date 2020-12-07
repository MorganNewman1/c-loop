#include <iostream>
#include <fstream>
#include <cstdlib>
//using namespace std;

class loop
{
		private:
			fuction(int i);
};
void fuction(int i){
	
	while(i > 0 || i < 0){
		
		if(i > 0){
		std :: cout << i-- << std::endl;
			if(i == 0){
				std::cout << i << std :: endl;
			}
		}
		if(i < 0){
		std :: cout << i++ << std::endl;
			if(i == 0){
				std::cout << i << std :: endl;
			}
		}
		
		
	}
	
}
int main(){
	
	int i;
	char c;
	
	do{
	std::cout << "Want to Run y/n:";
	std::cin >> c;

		if( c == 'y'){
			std::cout << "Enter a number:";
			std::cin >> i;
	
			system("cls");

			fuction(i);
			}
		else if(c == 'n'){
				break;
			}		
		else{
				system("cls");
				std::cout<<"ERROR!"<<std::endl;
			}
	}while( c != 'n');
	return 0;
}
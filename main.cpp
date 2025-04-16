#include <iostream>
#include <fstream>
#include <limits>

void displayMessage(const std::string& msg){
    std::cout<<msg<<std::endl;
}

void displayMenu(){
   displayMessage("\n Password manager");
   displayMessage(" 1. Add Password");
   displayMessage(" 2. View Passwords");
   displayMessage(" 3. Exit");
   displayMessage("Enter your choice: "); 
}

void SavePassword(const std::string& site, const std::string& password){
    std::ofstream file("passwords.txt", std::ios::app);
    if(file.is_open()){
        file << site << " "<<password<<"\n";
        file.close();
        displayMessage("Password saved sucessfully");
    }
    else{
        std::cerr<<"Error: Unable to open file for writing. \n";
    }
}

void LoadPassword(){
    std::ifstream file("passwords.txt");
    if(file.is_open()){
        std::string site, password;
        displayMessage("\n Saved Passwords: ");
        while(file >> site >> password){
            std::cout<<"Site: "<<site <<", Password: "<< password << "\n";
        }
        file.close();
    }
    else{
        std::cerr<<"\n[System] No passwords saved yet. \n";
    }
}
int main(){
    int choice;
    std::string site, password;
    do{
        displayMenu();
        
        std::cin>>choice;

        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        switch(choice){
            case 1:
                displayMessage("Enter site name: ");
                std::cin>>site;
                displayMessage("Enter password: ");
                std::cin>>password;
                SavePassword(site, password);
                break;
            case 2:
                LoadPassword();
                break;
            case 3:
                displayMessage("\n[System] Exiting");
                break;
            default:
                displayMessage("\n[System] Invalid choice. Please try again");
                break;
        }
    }while(choice!=3);
    return 0;
}
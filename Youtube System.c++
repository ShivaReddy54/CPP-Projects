#include <bits/stdc++.h>
using namespace std;

class Videos{
public:
    vector<string> video{"C++", "Python"};

    void add_video(string name){
        video.push_back(name);
    }

    void display_videos(){
        cout << "Videos in my channel are: " << endl;
        for(int i=0; i<video.size(); i++)
            cout << i+1 << "." << " " << video[i] << endl;
    }
};

class Youtube : public Videos{
    int subscribers = 1000;
public:
    string channel;
    string owner = "Shiva Reddy";

    Youtube(string name){
        this->channel = name;
    }

    void display(){
        cout << "Channel Name:     " << channel << endl;
        cout << "Owner:            " << owner << endl;
        cout << "Subscribers:      " << subscribers << endl << endl;
        cout << "*****  Subscribe if YOU haven't ***** " << endl << endl;
    }

    void add_sub(){
        subscribers += 1;
        cout << "   Thanks for Subscribing!!    " << endl;
    }

    void remove(){
        if (subscribers == 0){
            cout << "   NO subscribers Yet to delete!!  " << endl;
        }
        else{
            subscribers -= 1;
            cout << "   Thanks for being part of our Youtube Community :(   " << endl << endl;
        }
    }

};

int main(){
    Youtube run("Code Blodded");
    int choice;
    string vid;

    cout << "   WELCOME TO YOUTUBE  " << endl;
    cout << "1. Display  " << endl;
    cout << "2. Add Video  " << endl;
    cout << "3. Display Videos " << endl;
    cout << "4. Subscribe  " << endl;
    cout << "5. Unsubscribe  " << endl;
    cout << "6. Quit  " << endl << endl;

    do{

        cout << " What do YOU want to Choose: " << endl;
        cin >> choice;

        switch(choice){
            case 1:
                run.display();
                break;

            case 2:
                cout << "Name of Video: " << endl;
                cin >> vid;
                run.add_video(vid);
                break;

            case 3:
                run.display_videos();
                break;

            case 4:
                run.add_sub();
                break;

            case 5:
                run.remove();
                break;

            case 6:
                cout << "   Thanks! Have a nice Day :) ";
                exit(0);
        }
    }while(choice <= 6);
}
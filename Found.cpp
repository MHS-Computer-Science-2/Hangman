#include <iostream>
using namespace std;

int main()
{

    //This code replaces the spaces with asterisks
    //It also outputs whether or not replacements were made

    string str = "Ihaveacat";

    bool found = false;
    for (int i = 0; i < str.length(); i++) {
        //if char i is a space
        if (str[i] == ' ') {
            //replace char i with a star
            str[i] = '*';
            found = true;
        }
    }

    if (found == true) {
        cout << "replacements were made" << endl;
    }
    else if (found == false) {
        cout << "no replacements were made" << endl;
    }

    system("Pause");
}

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string cipher;

    vector<char>list;

    cout << "Enter your input string: ";
    //cin >> cipher; 
    getline(cin, cipher);

    int size = cipher.size();

    cout << endl;

    for (int i = 0; i < 27; i++) { // first for loop; for process to go 26 times

        for (int j = 0; j < size; j++) { //nested for loop that converts each character from the string into a number and stores it in a list
            if (cipher[j] >= 97 and cipher[j] <= 122) { //lowercase
                if (cipher[j] + 1 > 122) {
                    cipher[j] = 96;
                }
                list.push_back(int(cipher[j] + 1)); //Though it is number appending to a char vector it will still convert it to it's ascii value

            }

            else if (cipher[j] >= 65 and cipher[j] <= 90) { //uppercase
                if (cipher[j] + 1 > 90) {
                    cipher[j] = 64;
                }
                list.push_back(int(cipher[j] + 1));
            }

            else {
                list.push_back(' ');
            }


        }

        cout << "Result " << i << ": ";
        for (int k = 0; k < list.size(); k++) { //This for loop couts each of the characters we +1 from our vector, i.e it's couting the new cipher 
            cout << char(list[k]) << " ";
        }
        cout << endl;
        //list.clear();

        for (int v = 0; v < list.size(); v++) { //This for loop is meant to change our exisisting string cipher into the new word,

            cipher[v] = char(list[v]);

            //i.e in order for our program to continue ciphering, we have to change the old cipher text with the new text we outputted.     

        }

        list.clear(); //Clear the vector so that the next iteration does not append over exsisting elements 






    }

    return 0;
}
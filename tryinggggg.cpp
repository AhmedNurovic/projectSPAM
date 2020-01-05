#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int numOfWords = 0;
    int sum = 0;
    map<string, int> keywords;

    keywords.insert(pair<string, int>("$", 10));
    keywords.insert(pair<string, int>("earn per week", 20));
    keywords.insert(pair<string, int>("double your", 20));
    keywords.insert(pair<string, int>("income in one week", 15));
    keywords.insert(pair<string, int>("trial that lasts forever", 30));
    keywords.insert(pair<string, int>("opportunity", 10));
    keywords.insert(pair<string, int>("income", 10));
    keywords.insert(pair<string, int>("cash", 20));
    keywords.insert(pair<string, int>("month free trial", 15));
    keywords.insert(pair<string, int>("your love life", 25));

    cout << "Enter the amount of words you are going to enter here : ";
    cin >> numOfWords;
    cout << endl;
    string userInput[numOfWords];

    cout << "Enter the words now, after every word press ENTER : " << endl;

    for(int i = 0;i <= numOfWords; i++){
        cin >> userInput[i];
    }

    for(int i = 0; i <= numOfWords; i++){
        cout << userInput[i] << " ";
    }

    for(int i = 0;i <= numOfWords;i++){
        string tempString = userInput[i];
        transform(tempString.begin(), tempString.end(), tempString.begin(), ::tolower);
    }

    for(int i = 0;i <= numOfWords; i++){
        string tempString = userInput[i];
        if(keywords.find(tempString) != keywords.end()){
          sum += keywords[userInput[i]];
          }
          tempString = "";
    }

    if(sum > 50){
        cout << "SPAM";
    }
    else if(sum > 10 && sum < 50){
        cout << "MAYBE SPAM";
    }
    else
        cout << "NOT SPAM";

    return 0;
}


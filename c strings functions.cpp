#include<iostream>
#include<cmath>
#include<cstring>
#include<fstream>

using namespace std;

bool isInteger(char str[]){
	int i=0;
	bool isInt;
	
	while (str[i] != '\0'){	
		if (str[i] >= '0' && str[i] <= '9'){
			isInt = true;
		} 
		else{
			return false;
		}
		
		i++;	
	}
	
	return isInt;
}

int toInteger (char str[]){
	int i=0, sum=0, digit, power=1, length = strlen(str); 
	
	 
	for (i=length-1; i>=0; i--){
		digit = str[i] - '0';
		sum = sum + (digit*power);
		power = power*10;
	}
	
	return sum;
}

bool isDigit (char ch){
	if (ch >= '0' && ch <= '9'){
		return true;
	}
	return false;
}

bool isFloatingPoint(char str[]){
	int i=0, count=0;
	
	while (str[i] != '\0'){
		if(str[i] == '.'){
			count++;
		}
		else
		if (!isDigit(str[i]))
		{
			return false;
		}
		
		i++;
	}
	
	if (count == 1){
		return true;
	}
	else
	{
		return false;
	}
}

double doubletoFloatingPoint (char str[]){
	double sum=0, fraction=0, power=0.1;
	int i=0, j=0, digit, whole;
	char wholenum[strlen(str)]; 
	
	
	while (str[i] != '.'){
		if (!isDigit(str[i])){
			cout << "this is not a double" << endl;
			return 0;
		}	
		wholenum[j] = str[i];
		//cout << wholenum[j] << " " << str[i] << endl;
		j++;
		i++;
	}
	
	wholenum[j] = '\0';
	
	whole = toInteger(wholenum);
	
	
	i++;
	
	while (str[i] != '\0'){
		if (!isDigit(str[i])){
			cout << "this is not a double" << endl;
			return 0;
		}
		
		digit = str[i]-'0';
		fraction = fraction + (digit*power);
		power = power/10;
		i++;
	}
	
	sum = whole*1.0 + fraction;
	
	return sum;
}

int getCharacters(char data[]) {

    ifstream fin;
    char ch;
    int i;

    fin.open("cstringf.txt");
    if (!fin.is_open()) {
        cout << "Error -- data.txt could not be opened." << endl;
        return 0;
    }

    i = 0;
    fin >> noskipws;

    fin >> ch;
    while (!fin.eof()) {
		data[i] = ch;
		i = i + 1;
		fin >> ch;
    }

    data[i] = '\0';

    fin.close();

    return i;
}

bool isLowerCaseLetter (char c) {
    if (c >= 'a' && c <= 'z')
        return true;
    return false;
}



bool isUpperCaseLetter (char c) {
    if (c >= 'A' && c <= 'Z')
        return true;
    return false;
}



bool isLetter(char ch) {
    if (isUpperCaseLetter(ch) || isLowerCaseLetter(ch))
        return true;
    return false;
}

int getWord (char data[], int start, char word[]) {

    int i, j, size;

    size = strlen (data);

    i = start;

    while (i < size && (!isLetter(data[i])))
		i = i + 1;

    if (i >= size)
		return 0;

    j = 0;
    while (isLetter(data[i])) {
		word[j]= data[i];
		i = i + 1;
		j = j + 1;
    }
    

    word[j]= '\0';

    return i	;
}

void getWords(char data[]) {

    int i=0;
    char word[25];
    int wordCount;

    i = getWord(data, i, word);
    cout << "i= " << i << endl;

    wordCount = 0;
    while (i > 0) {
		cout << "Word: " << word << endl;
		wordCount = wordCount + 1;
		i = getWord(data, i, word);
		cout << "i= " << i << endl;
    }

    cout << "Amount of words found: " << wordCount << endl;
}

bool search(char data[], char key[]) {

    int i;
    char word[25];

    i = getWord(data, i, word);

    while (i > 0) {
		if (strcmp(word, key) == 0)
			return true;

		i = getWord(data, i, word);
    }
    return false;
}

int getLines () {

    ifstream fin;
    char line[81];
    int lineNo;

    fin.open("data.txt");
    if (!fin.is_open()) {
		cout << "Error -- file could not be opened: data.txt" << endl;
        return -1;
    }

    fin >> noskipws;

    lineNo = 0;
    while (!fin.eof()) {
    	fin.getline(line, 80);
    	if (strlen(line) > 0) {
			cout << line << endl;
			lineNo = lineNo + 1;
		}
    }

    fin.close();

    cout << endl;
    cout << "The file has " << lineNo << " line/s." << endl;

    return 0;
}




int main() {
	
	char str[5] = {'4', '3', '7', '.', '8'};
	char ch = 'A';
	char data[50];
	char word[50];
	
	if (isInteger(str) == true){
		cout << "true" << endl;
	}
	else
	cout << "false" << endl;
	
	cout << "integer = " << toInteger(str) << endl;
	
	if (isDigit(ch) == true){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	
	if (isFloatingPoint(str) == true){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	
	cout << "float = " << doubletoFloatingPoint(str) << endl;	
	
	cout << endl;
	
	int charmax = getCharacters(data);
	
	cout << data << endl;
	
	int wordmax = getWord(data, 0, word);
	
	cout << word << endl;
	
	getWords(data);
	
	getLines();
	
	
	
	return 0;
}

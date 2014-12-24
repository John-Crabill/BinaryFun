/*
 * binary.h
 *
 *  Created on: Nov 23, 2014
 *      Author: John Crabill
 * This is in the standard of ASCII Binary, this
 * can be used for easy translation of small sentences,
 * words, and for if you have a binary sequence that
 * does not have spaces(Hopefully this isn't too much
 * of a problem if used) Primarily this is just a teaching
 * tool or a small novelty to be messed with.
 */

#ifndef BINARY_H_
#define BINARY_H_

namespace ods {

template<class T>
class binary {
public:
	binary();
	std::string numberBinary(int num);
	std::string binaryToWord(std::string binary);
	std::string wordToBinary(std::string word);
	};

template<class T>
binary<T>::binary() {
}



template<class T>
std::string binary<T>::numberBinary(int num) {
	std::string answer;
	if(num > 1023) {
		std::cout << "This is not a number allowed at this time" << std::endl;
		return "";
	}

	if(num - 512 >= 0) {
		num = num - 512;
		answer = answer + "1";
	}
	else answer = answer + "0";

	if(num - 256 >= 0) {
		num = num - 256;
		answer = answer + "1";
	}
	else answer = answer + "0";

	if(num - 128 >= 0) {
		num = num - 128;
		answer = answer + "1";
	}
	else answer = answer + "0";

	if(num - 64 >= 0) {
		num = num - 64;
		answer = answer + "1";
	}
	else answer = answer + "0";

	if(num - 32 >= 0) {
		num = num - 32;
		answer = answer + "1";
	}
	else answer = answer + "0";

	if(num - 16 >= 0) {
		num = num - 16;
		answer = answer + "1";
	}
	else answer = answer + "0";

	if(num - 8 >= 0) {
		num = num - 8;
		answer = answer + "1";
	}
	else answer = answer + "0";

	if(num - 4 >= 0) {
		num = num - 4;
		answer = answer + "1";
	}
	else answer = answer + "0";

	if(num - 2 >= 0) {
		num = num - 2;
		answer = answer + "1";
	}
	else answer = answer + "0";

	if(num - 1 == 0) {
		num = num - 1;
		answer = answer + "1";
	}
	else answer = answer + "0";

	return answer;
}

template<class T>
std::string binary<T>::binaryToWord(std::string binary) {
std::string answer;
std::string part;
for(int i = 0; i < binary.length(); i = i + 7) {
  part = binary.substr(i, 7);
	if(part == "0100000") answer = answer + " ";
	else if(part == "0100001") answer = answer + "!";
	else if(part == "0100010") answer = answer + "\"";
	else if(part == "0100011") answer = answer + "#";
	else if(part == "0100100") answer = answer + "$";
	else if(part == "0100101") answer = answer + "%";
	else if(part == "0100110") answer = answer + "&";
	else if(part == "0100111") answer = answer + "'";
	else if(part == "0101000") answer = answer + "(";
	else if(part == "0101001") answer = answer + ")";
	else if(part == "0101010") answer = answer + "*";
	else if(part == "0101011") answer = answer + "+";
	else if(part == "0101100") answer = answer + ",";
	else if(part == "0101101") answer = answer + "-";
	else if(part == "0101110") answer = answer + ".";
	else if(part == "0101111") answer = answer + "/";
	else if(part == "0110000") answer = answer + "0";
	else if(part == "0110001") answer = answer + "1";
	else if(part == "0110010") answer = answer + "2";
	else if(part == "0110011") answer = answer + "3";
	else if(part == "0110100") answer = answer + "4";
	else if(part == "0110101") answer = answer + "5";
	else if(part == "0110110") answer = answer + "6";
	else if(part == "0110111") answer = answer + "7";
	else if(part == "0111000") answer = answer + "8";
	else if(part == "0111001") answer = answer + "9";
	else if(part == "0111010") answer = answer + ":";
	else if(part == "0111011") answer = answer + ";";
	else if(part == "0111100") answer = answer + "<";
	else if(part == "0111101") answer = answer + "=";
	else if(part == "0111110") answer = answer + ">";
	else if(part == "0111111") answer = answer + "?";
	else if(part == "1000000") answer = answer + "@";
	else if(part == "1000001") answer = answer + "A";
	else if(part == "1000010") answer = answer + "B";
	else if(part == "1000011") answer = answer + "C";
	else if(part == "1000100") answer = answer + "D";
	else if(part == "1000101") answer = answer + "E";
	else if(part == "1000110") answer = answer + "F";
	else if(part == "1000111") answer = answer + "G";
	else if(part == "1001000") answer = answer + "H";
	else if(part == "1001001") answer = answer + "I";
	else if(part == "1001010") answer = answer + "J";
	else if(part == "1001011") answer = answer + "K";
	else if(part == "1001100") answer = answer + "L";
	else if(part == "1001101") answer = answer + "M";
	else if(part == "1001110") answer = answer + "N";
	else if(part == "1001111") answer = answer + "O";
	else if(part == "1010000") answer = answer + "P";
	else if(part == "1010001") answer = answer + "Q";
	else if(part == "1010010") answer = answer + "R";
	else if(part == "1010011") answer = answer + "S";
	else if(part == "1010100") answer = answer + "T";
	else if(part == "1010101") answer = answer + "U";
	else if(part == "1010110") answer = answer + "V";
	else if(part == "1010111") answer = answer + "W";
	else if(part == "1011000") answer = answer + "X";
	else if(part == "1011001") answer = answer + "Y";
	else if(part == "1011010") answer = answer + "Z";
	else if(part == "1011011") answer = answer + "[";
	else if(part == "1011100") answer = answer + "\\";
	else if(part == "1011101") answer = answer + "]";
	else if(part == "1011110") answer = answer + "^";
	else if(part == "1011111") answer = answer + "_";
	else if(part == "1100000") answer = answer + "`";
	else if(part == "1100001") answer = answer + "a";
	else if(part == "1100010") answer = answer + "b";
	else if(part == "1100011") answer = answer + "c";
	else if(part == "1100100") answer = answer + "d";
	else if(part == "1100101") answer = answer + "e";
	else if(part == "1100110") answer = answer + "f";
	else if(part == "1100111") answer = answer + "g";
	else if(part == "1101000") answer = answer + "h";
	else if(part == "1101001") answer = answer + "i";
	else if(part == "1101010") answer = answer + "j";
	else if(part == "1101011") answer = answer + "k";
	else if(part == "1101100") answer = answer + "l";
	else if(part == "1101101") answer = answer + "m";
	else if(part == "1101110") answer = answer + "n";
	else if(part == "1101111") answer = answer + "o";
	else if(part == "1110000") answer = answer + "p";
	else if(part == "1110001") answer = answer + "q";
	else if(part == "1110010") answer = answer + "r";
	else if(part == "1110011") answer = answer + "s";
	else if(part == "1110100") answer = answer + "t";
	else if(part == "1110101") answer = answer + "u";
  else if(part == "1110110") answer = answer + "v";
	else if(part == "1110111") answer = answer + "w";
	else if(part == "1111000") answer = answer + "x";
	else if(part == "1111001") answer = answer + "y";
	else if(part == "1111010") answer = answer + "z";
	else if(part == "1111011") answer = answer + "{";
	else if(part == "1111100") answer = answer + "|";
	else if(part == "1111101") answer = answer + "}";
	else if(part == "1111110") answer = answer + "~";
	else std::cout << "Sorry, we do not recognize that binary sequence" << std::endl;
}
	return answer;
}

template<class T>
std::string binary<T>::wordToBinary(std::string word) {
std::string answer;
std::string part;
for(int i = 0; i < word.length(); i++) {
	part = word.substr(i, 1);
	if(part == " ") answer = answer + "0100000 ";
	else if(part == "!") answer = answer + "0100001 ";
	else if(part == "\"") answer = answer + "0100010 ";
	else if(part == "#") answer = answer + "0100011 ";
	else if(part == "$") answer = answer + "0100100 ";
	else if(part == "%") answer = answer + "0100101 ";
	else if(part == "&") answer = answer + "0100110 ";
	else if(part == "'") answer = answer + "0100111 ";
	else if(part == "(") answer = answer + "0101000 ";
	else if(part == ")") answer = answer + "0101001 ";
	else if(part == "*") answer = answer + "0101010 ";
	else if(part == "+") answer = answer + "0101011 ";
	else if(part == ",") answer = answer + "0101100 ";
	else if(part == "-") answer = answer + "0101101 ";
	else if(part == ".") answer = answer + "0101110 ";
	else if(part == "/") answer = answer + "0101111 ";
	else if(part == "0") answer = answer + "0110000 ";
	else if(part == "1") answer = answer + "0110001 ";
	else if(part == "2") answer = answer + "0110010 ";
	else if(part == "3") answer = answer + "0110011 ";
	else if(part == "4") answer = answer + "0110100 ";
	else if(part == "5") answer = answer + "0110101 ";
	else if(part == "6") answer = answer + "0110110 ";
	else if(part == "7") answer = answer + "0110111 ";
	else if(part == "8") answer = answer + "0111000 ";
	else if(part == "9") answer = answer + "0111001 ";
	else if(part == ":") answer = answer + "0111010 ";
	else if(part == ";") answer = answer + "0111011 ";
	else if(part == "<") answer = answer + "0111100 ";
	else if(part == "=") answer = answer + "0111101 ";
	else if(part == ">") answer = answer + "0111110 ";
	else if(part == "?") answer = answer + "0111111 ";
	else if(part == "@") answer = answer + "1000000 ";
	else if(part == "A") answer = answer + "1000001 ";
	else if(part == "B") answer = answer + "1000010 ";
	else if(part == "C") answer = answer + "1000011 ";
	else if(part == "D") answer = answer + "1000100 ";
	else if(part == "E") answer = answer + "1000101 ";
	else if(part == "F") answer = answer + "1000110 ";
	else if(part == "G") answer = answer + "1000111 ";
	else if(part == "H") answer = answer + "1001000 ";
	else if(part == "I") answer = answer + "1001001 ";
	else if(part == "J") answer = answer + "1001010 ";
	else if(part == "K") answer = answer + "1001011 ";
	else if(part == "L") answer = answer + "1001100 ";
	else if(part == "M") answer = answer + "1001101 ";
	else if(part == "N") answer = answer + "1001110 ";
	else if(part == "O") answer = answer + "1001111 ";
	else if(part == "P") answer = answer + "1010000 ";
	else if(part == "Q") answer = answer + "1010001 ";
	else if(part == "R") answer = answer + "1010010 ";
	else if(part == "S") answer = answer + "1010011 ";
	else if(part == "T") answer = answer + "1010100 ";
	else if(part == "U") answer = answer + "1010101 ";
	else if(part == "V") answer = answer + "1010110 ";
	else if(part == "W") answer = answer + "1010111 ";
	else if(part == "X") answer = answer + "1011000 ";
	else if(part == "Y") answer = answer + "1011001 ";
	else if(part == "Z") answer = answer + "1011010 ";
	else if(part == "[") answer = answer + "1011011 ";
	else if(part == "\\") answer = answer + "1011100 ";
	else if(part == "]") answer = answer + "1011101 ";
	else if(part == "^") answer = answer + "1011110 ";
	else if(part == "_") answer = answer + "1011111 ";
	else if(part == "`") answer = answer + "1100000 ";
	else if(part == "a") answer = answer + "1100001 ";
	else if(part == "b") answer = answer + "1100010 ";
	else if(part == "c") answer = answer + "1100011 ";
	else if(part == "d") answer = answer + "1100100 ";
	else if(part == "e") answer = answer + "1100101 ";
	else if(part == "f") answer = answer + "1100110 ";
	else if(part == "g") answer = answer + "1100111 ";
	else if(part == "h") answer = answer + "1101000 ";
	else if(part == "i") answer = answer + "1101001 ";
	else if(part == "j") answer = answer + "1101010 ";
	else if(part == "k") answer = answer + "1101011 ";
	else if(part == "l") answer = answer + "1101100 ";
	else if(part == "m") answer = answer + "1101101 ";
	else if(part == "n") answer = answer + "1101110 ";
	else if(part == "o") answer = answer + "1101111 ";
	else if(part == "p") answer = answer + "1110000 ";
	else if(part == "q") answer = answer + "1110001 ";
	else if(part == "r") answer = answer + "1110010 ";
	else if(part == "s") answer = answer + "1110011 ";
	else if(part == "t") answer = answer + "1110100 ";
	else if(part == "u") answer = answer + "1110101 ";
  else if(part == "v") answer = answer + "1110110 ";
	else if(part == "w") answer = answer + "1110111 ";
	else if(part == "x") answer = answer + "1111000 ";
	else if(part == "y") answer = answer + "1111001 ";
	else if(part == "z") answer = answer + "1111010 ";
	else if(part == "{") answer = answer + "1111011 ";
	else if(part == "|") answer = answer + "1111100 ";
	else if(part == "}") answer = answer + "1111101 ";
	else if(part == "~") answer = answer + "1111110 ";
	else std::cout << "Sorry, we do not recognize this character" << std::endl;
		}
	return answer;
	}
}




#endif /* BINARY_H_ */

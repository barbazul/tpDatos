/*
 * Key.cpp
 *
 *  Created on: May 7, 2012
 *      Author: bort
 */

#include "Key.h"
#include <sstream>



Key::Key(std::string key){

	if (key != ""){
		keyValue = -1;

		strncpy(keyString, key.c_str(), MAX_STRN_SIZE -1);
		keyString[MAX_STRN_SIZE -1] = '\0';
	}
	else
		throw InvalidKeyException();
}

Key::Key(long key){

	if (key > -1){
		keyValue = key;
		strcpy(keyString, "");
	}
	else
		throw InvalidKeyException();

}

std::string Key::getKey(){

	std::stringstream out;

	if (keyValue == -1) return keyString;
	else{
		out << keyValue;
		return out.str();
	}


}

int Key::KeyComparator::compareTo(void* target){

	try{
		std::string targetKey = ((Key*)target)->getKey();

		int result = myKey.compare(targetKey);

		myKey.compare(targetKey);

		if ( result > 0 ) return 1; //this orders after target
		else if (result < 0 ) return -1; //this orders before target
			 else return result; //this equals target

	}catch(...){

		throw InvalidTargetException();
	}

	//Error value
	return -2;


}

Comparator* Key::getComparator(){

	return new KeyComparator(getKey());

}

Key::~Key() {

	delete[] keyString;
	// TODO Auto-generated destructor stub
}



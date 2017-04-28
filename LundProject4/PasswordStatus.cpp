/******************************************************************************
*      Class: 
* Base Class: 
*
* Programmer: 
*
* Revision     Date                          Release Comment
* --------  ----------  -------------------------------------------------------
*   1.0     MM/DD/YYYY  Initial Release
*
*
* File Description
* ----------------
* This file contains the external class method definitions and the initialization
* of any constant, "const" values declared at Class scope.
*
*
* ------------------------- Public Methods Interface --------------------------
*      Method                            Description
* ----------------  -----------------------------------------------------------
* 
*
* --------------------------------- Private Methods ---------------------------
*      Method                            Description
* ----------------  -----------------------------------------------------------
*                          *** No private methods ***
*
*
* ----------------------- Data Member Initializations -------------------------
*                          *** No Initializations ***
*
*******************************************************************************
*/

// External Definition files
// The first inclusion file is required by the Visual Studio complier and
// MUST be first in the "include" files list
#include "stdafx.h"  // Defines IDE required "pre-compiled" definition files
#include <atlstr.h>  
#include "PasswordStatus.h"


//********************************************* 
// Class Initializing Constructor             *
//                                            *
//*********************************************
PasswordStatus::PasswordStatus(char* chars, int minPasswordLength)
{
	this->chars = chars;
	this->minPasswordLength = minPasswordLength;
}

//********************************************* 
// Class default Deconstructor                *
//                                            *
//*********************************************
PasswordStatus::~PasswordStatus()
{
}

//********************************************* 
// Class Copy Constructor                     *
//                                            *
//*********************************************
PasswordStatus::PasswordStatus(const PasswordStatus & obj)
{
	this->chars = obj.chars;
	this->minPasswordLength = obj.minPasswordLength;
}

//********************************************* 
// Method:                                    *
//                                            *
//*********************************************
bool PasswordStatus::isValid()
{
	return sufficientLength() &&
		hasDigit() &&
		hasLowerCase() &&
		hasUpperCase();
}

//********************************************* 
// Method:                                    *
//                                            *
//*********************************************
bool PasswordStatus::sufficientLength()
{
	return this -> chars.GetLength() >= this -> minPasswordLength;
}

//********************************************* 
// Method:                                    *
//                                            *
//*********************************************
bool PasswordStatus::hasDigit()
{
	for (size_t i = 0; i < chars.GetLength(); i++)
	{
		if (isdigit(chars[i]))
			return true;
	};
	return false;
}

//********************************************* 
// Method:                                    *
//                                            *
//*********************************************
bool PasswordStatus::hasLowerCase()
{
	for (size_t i = 0; i < chars.GetLength(); i++)
	{
		if (islower(chars[i]))
			return true;
	};
	return false;
}

//********************************************* 
// Method:                                    *
//                                            *
//*********************************************
bool PasswordStatus::hasUpperCase()
{
	for (size_t i = 0; i < chars.GetLength(); i++)
	{
		if (isupper(chars[i]))
			return true;
	};
	return false;
}
#pragma once

// External Definition files
// -------------------------
// None

// Namespaces utilized in this program
using namespace std;  // Announces to the compiler that members of the namespace
                      // "std" are utilized in this program


/******************************************************************************
*      Class: 
* Base Class: 
*
* Programmer: 
*
*
* Revision     Date                          Release Comment
* --------  ----------  -------------------------------------------------------
*   1.0     MM/DD/YYYY  Initial Release
*
*
* Class Description
* -----------------
*
*
* --------------------------- Public Methods Interface ------------------------
*       Method                                Description
* ------------------  ---------------------------------------------------------
*
*
* --------------------------------- Private Methods ---------------------------
*       Method                                Description
* ------------------  ---------------------------------------------------------
*                           *** No private methods ***
*
*
* -------------------------- Private Data Members -----------------------------
*              Data
*    Type      Type   Name                     Description
* ----------  ------  ----  ---------------------------------------------------
*
*
* --------------------------- Public Data Members -----------------------------
*              Data
*    Type      Type   Name                    Description
* ----------  ------  ----  ---------------------------------------------------
*                         *** No public data members ***
*
*******************************************************************************
*/
class PasswordStatus
{
private:
	CString chars;
	int minPasswordLength;

public:
	PasswordStatus(char* chars, int minPasswordLength);
	~PasswordStatus();
	PasswordStatus(const PasswordStatus &obj);
	bool isValid();
	bool sufficientLength();
	bool hasDigit();
	bool hasLowerCase();
	bool hasUpperCase();
};





#pragma once

class CUserData
{
	friend class CMyList;

public:
	CUserData(void);
	~CUserData(void);

	const char* GetName(void) const { return szName; }
	const char* GetPhone(void) const { return szPhone; }
	const CUserData* GetNext(void) const { return pNext; }

	static int GetUserDataConuter(void) {
		return nUserDataCounter;
	}

protected:
	char szName[32];
	char szPhone[32];

	CUserData* pNext;

	static int nUserDataCounter;
};
#ifndef __CSTU_H__
#define __CSTU_H__
class CStu
{
protected:
	char m_No[11];
	char m_Name[11];
	unsigned short m_Age;
	char m_Sex[3];
	char *m_Rem;
	unsigned int m_RemBytes;

public:
	void show();
	unsigned int GetRemBytes();
	bool SetNO(char *NO);
	char *GetNO();
	bool SetName(char *Name);
	char *GetName();
	bool SetAge(unsigned short Age);
	unsigned short GetAge();
	bool SetRem(char *Rem);
	char *GetRem();
	bool SexSex(char *sex);
	char *GetSex();
};
#endif







}

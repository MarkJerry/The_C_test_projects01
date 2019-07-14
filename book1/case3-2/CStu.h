#ifndef __CSTU_H__
#define __CSTU_H__
class CStu
{
protected:
	char m_NO[11];
	char m_Name[11];
	unsigned short m_Age;
	char m_Sex[10];
	char *m_Rem;
	unsigned int m_RemBytes;

public:
	CStu();
	CStu(char *No, char *Name, unsigned short Age=18, char *Sex=(char *)"male", char *Rem=0);
	void Show();
	unsigned int GetRemBytes();
	bool SetNO(char *NO);
	char *GetNO();
	bool SetName(char *Name);
	char *GetName();
	bool SetAge(unsigned short Age);
	unsigned short GetAge();
	bool SetRem(char *Rem);
	char *GetRem();
	bool SetSex(char *sex);
	char *GetSex();
};
#endif



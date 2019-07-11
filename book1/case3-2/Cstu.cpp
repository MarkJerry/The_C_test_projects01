#include <iostream>
#include <string>
#include "CStu.h"
void CStu::Show()
{
	cout<<"NO.   :"<<m_NO<<endl;
	cout<<"Name  :"<<m_Name<<endl;
	cout<<"Gender:"<<m_Sex<<endl;
	cout<<"Age   :"<<m_Age<<endl;
	cout<<"CV    :"<<m_Rem<<endl;
}
unsigned int CStu::GetRemBytes()
{
	return m_RemBytes;
}
bool CStu::SetNO(char *NO)
{
	if(strlen(NO)!=10)
		return false;
	else
		strcpy(m_NO, NO);
	return true;
}
char *CStu::GetNO()
{
	return m_NO;

}
bool CStu::SetName(char *Name)
{
	if(strlen(Name)>10)
		return false;
	else
		strcpy(m_Name, Name);
	return true;
}
char * CStu::GetName()
{
	return m_Name;
}
bool CStu::SetAge(unsigned short Age)
{
	if(Age>=60)
		return false;
	else
		m_Age=Age;
	return true;

}
unsigned short CStu::GetAge()
{
	return m_Age;
}
bool CStu::SetRem(char *Rem)
{
	if(m_Rem != NULL)
	 delete []m_Rem;
	if(Rem != NULL)
	{
		int Len = strlen(Rem);
		char *p = new char[Len+1];
		if(p==NULL)
		{
			return false;
		}
		m_RemBytes=Len;
		m_Rem=p;
		strcpy(m_Rem,Rem);
	}
	else
	{
		m_Rem=NULL;
		m_RemBytes=0;
	}
	return 0;

}
char *CStu::GetRem()
{
	return m_Rem;
}
bool CStu::SetSex(char *Sex)
{
	if(strcmp("male",Sex)==0 || strcmp("female", Sex) == 0)
	{
		strcpy(m_Sex, Sex);
		return true;
	}
	else
	{
		return false;
	}
}
char *CStu::GetSex()
{
	return m_Sex;

}











#include <stdio.h>
#include <iostream>
#include <string.h>
#include "CStu.h"
using namespace std;
void CStu::Show()
{
	cout<<"NO.   :"<<m_NO<<endl;
	cout<<"Name  :"<<m_Name<<endl;
	cout<<"Gender:"<<m_Sex<<endl;
	cout<<"Age   :"<<m_Age<<endl;
	cout<<"CV    :"<<m_Rem<<"\r\n"<<endl;
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

CStu::CStu()
{
	m_NO[0]=0;
	m_Name[0]=0;
	m_Age=18;
	strcpy(m_Sex, "male");
	m_Rem=NULL;
	m_RemBytes=0;

}
CStu::CStu( char *NO,char *Name, unsigned short Age,char *Sex,char *Rem)
{
	if(!SetNO(NO))
		m_NO[0]=0;
	if(!SetName(Name))
		m_Name[0]=0;
	if(!SetAge(Age))
		m_Age=18;
	if(!SetSex(Sex))
		strcpy(m_Sex, "male");
	m_Rem = NULL;
	m_RemBytes = 0;
	if(Rem != NULL)
		SetRem(Rem);
}
int main()
{

	CStu s1;
	CStu s2("2012050401", "zhangsan");
	CStu s3("2012050402", "lisi",17);
	CStu s4("2012050403", "wangli", 18, "female");
	CStu s5("2012050404", "zhangli", 19, "female", "speciality: piano");
	s1.Show(); s2.Show(); s3.Show(); s4.Show();s5.Show();

	CStu *ps1=new CStu();
	CStu *ps2=new CStu("2012050401", "zhangsan");
	CStu *ps3=new CStu("2012050402", "lisi",17);
	CStu *ps4=new CStu("2012050403", "wangli", 18, "female");
	CStu *ps5=new CStu("2012050404", "zhangli", 19, "female", "speciality: piano");
	ps1->Show();
	ps2->Show();
	ps3->Show();
	ps4->Show();
	ps5->Show();
	return 0;

}





 







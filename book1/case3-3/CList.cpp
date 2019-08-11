#include<iostream>
#include"CList.h"
using namespace std;
CIntList::CIntList()
{
	m_header=0;
}
CIntList::~CIntList()
{
	Node *next;
	while(m_header)
	{
		next=m_header->next;
		delete m_header;
		m_header=next;
	}
}
bool CIntList::Retrieve(int k, int&e)//get the element of number k
{
	if(k>=size())
		return false;
	Node *pi=m_header;
	for(int i=0;i<k;i++)
	{
		pi=pi->next;
	}
	e=pi->data;
	return true;
}

int CIntList::Find(const int &e)//get the position of pointed element
{
	Node *p=m_header;
	int i=0;
	while(p && (p->data != e))
	{
		p=p->next;
		i++;
	}
	if(p)
		return i;
	else
		return 0;

}
bool CIntList::Insert(int k, const int &e)//insert the e on the position of k
{
	if(k>size())
		return false;
	Node *node=new Node;
	node->data=e;
	if(k==0)
	{
		node->next=m_header;
		m_header=node;
		return true;
	}
	if(k=size())
	{
		Node *p=m_header;
		while(p->next)
		{
			p=p->next;
		}
		p->next = node;
		node->next = 0;
		return true;
	}
	Node *pi=m_header;
	Node *p_ahead;
	for(int i=1;i<=k;i++)
	{
		p_ahead=pi;
		pi=pi->next;
	}
	p_ahead->next=node;
	node->next = pi;
	return true;
}
bool CIntList::Delete(int k)
{
	if(k>=size())
		return false;
	if(k==0)
	{
		Node *pk=m_header;
		m_header=m_header->next;
		delete pk;
		return true;
	}
	if(k==size()-1)
	{
		Node *pn=m_header;
		while(pn)
		{
			if(!(pn->next))
			{
				delete pn;
				return true;
			}
			else
			{
				pn=pn->next;
			}
		}
	Node *pi=m_header;
	Node *P_ahead;
	Node *P_rear;
	for(int i=1;i<=k;i++)
	{
		P_ahead=pi;
		pi=pi->next;
		P_rear=pi->next;
	}
	P_ahead->next=P_rear;
	delete pi;
	return true;
	}
}
void CIntList::Clear()
{
	Node *p=m_header;
	int i=0;
	while(p)
	{
		i=i+1;
		Node *pp=p;
		p=p->next;
		delete pp;
	}
	m_header=0;
}
bool CIntList::Prior(int k,int &e)
{
	bool b=Retrieve(k-1,e);
	return b;
}
bool CIntList::Next(int k, int &e)
{
	bool b=Retrieve(k+1,e);
	return b;
}
bool CIntList::IsEmpty()
{
	if(m_header==0)
		return true;
	else
		return false;
}
void CIntList::Show()
{
	Node *p=m_header;
	if(IsEmpty())
	{
		cout<<"this list is empty."<<endl;
	}
	while(p)
	{
		cout<<p->data<<endl;
		p=p->next;
	}

}

int CIntList::size()const
{
	Node *p = m_header;
	int count = 0;
	while(p)
	{
		count++;
		p=p->next;

	}
	return count;
}
int main()
{
	CIntList list;
	int data1=1;
	int data2=2;
	list.Insert(1,data1);
	list.Insert(2,data2);
	list.Show();
}









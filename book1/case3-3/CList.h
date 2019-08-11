#ifndef __CLIST_H__
#define __CLIST_H__
class CIntList
{
	public:
		CIntList();
		~CIntList();
		int size() const;
		bool Retrieve(int k, int &e);//get the element of number K
		int Find(const int &e);//find the location of the element of number K
		bool Insert(int K, const int &e);//insert the element in k
		bool Delete(int k);// delete the element of number k
		void Clear(); //clear the list
		bool Prior(int k, int &e);//get the prior of k
		bool Next(int k, int &e);//get the next of e
		bool IsEmpty();//judge if the list is empty
		void Show();//print the list on the screen
	protected:
		struct Node//define the type of the structure.
		{
			int data;
			Node *next;
		};
		Node *m_header;//the head point of the list
};
#endif



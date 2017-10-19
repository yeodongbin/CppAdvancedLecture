//list �����̳ʴ� vector�� deque ó�� 
//������ �����̳ʷ� ���Ұ� ������� ������ �����Ѵ�.
//�׷��� list�� ��� ��� �����̳ʷ� ���Ұ� ��� ������ 
//����Ǹ� list�� ���� ���� ����Ʈ�� �����ȴ�.

#include <iostream>
#include <list>

using namespace std;

bool Predicate(int first, int second)
{
	return second - first >= 0;
}

class ListInit
{
public:
	void List(void)
	{
		list<int> lt;

		lt.push_back(10);
		lt.push_back(20);
		lt.push_back(30);
		lt.push_back(40);
		lt.push_back(50);

		list<int>::iterator iter;
		for (iter = lt.begin(); iter != lt.end(); ++iter)
		{
			cout << *iter << ' ';
		}
		cout << endl;

		iter = lt.begin();
		iter++;
		iter++;

		// erase ����
		list<int>::iterator iter2 = lt.erase(iter);
		for (iter = lt.begin(); iter != lt.end(); ++iter)
		{
			cout << *iter << ' ';
		}
		cout << endl;
		cout << "iter2 : " << *iter2 << endl;

		lt.push_back(10);
		lt.push_back(10);

		for (iter = lt.begin(); iter != lt.end(); ++iter)
		{
			cout << *iter << ' ';
		}
		cout << endl;

		// ����Ʈ���� ���� 10 ����
		lt.remove(10);

		for (iter = lt.begin(); iter != lt.end(); ++iter)
		{
			cout << *iter << ' ';
		}
		cout << endl;


		// Predicate �Լ��� �ش��ϴ� ���� ���� (30���� ũ��)
		lt.remove_if(Predicate);

		for (iter = lt.begin(); iter != lt.end(); ++iter)
		{
			cout << *iter << ' ';
		}
		cout << endl;
	}

	void ListSplice(void)
	{
		list<int> lt1;
		list<int> lt2;

		lt1.push_back(10);
		lt1.push_back(20);
		lt1.push_back(30);
		lt1.push_back(40);
		lt1.push_back(50);

		lt2.push_back(100);
		lt2.push_back(200);
		lt2.push_back(300);
		lt2.push_back(400);
		lt2.push_back(500);

		list<int>::iterator iter;
		cout << "lt1 : ";
		for (iter = lt1.begin(); iter != lt1.end(); ++iter) {
			cout << *iter << ' ';
		}
		cout << endl;

		cout << "lt2 : ";
		for (iter = lt2.begin(); iter != lt2.end(); ++iter) {
			cout << *iter << ' ';
		}
		cout << endl << "==================" << endl;


		iter = lt1.begin();
		++iter;
		++iter;        //30 ������ ��ġ�� ����Ŵ

		lt1.splice(iter, lt2); // iter�� ����Ű�� ��ġ(30)��lt2�� ��� ���Ҹ� �߶� ���δ�.

		cout << "lt1 : ";
		for (iter = lt1.begin(); iter != lt1.end(); ++iter) 
		{
			cout << *iter << ' ';
		}
		cout << endl;

		cout << "lt2 : ";
		for (iter = lt2.begin(); iter != lt2.end(); ++iter) 
		{
			cout << *iter << ' ';
		}
		cout << endl << "==================" << endl;

		lt1.reverse();    // ����Ʈ ���� ������

		cout << "lt1 reverse : ";
		for (iter = lt1.begin(); iter != lt1.end(); ++iter) 
		{
			cout << *iter << ' ';
		}
		cout << endl << "==================" << endl;

		lt1.push_front(50);
		lt1.push_front(50);
		lt1.push_back(10);
		lt1.push_back(50);

		cout << "lt1 : ";
		for (iter = lt1.begin(); iter != lt1.end(); ++iter) 
		{
			cout << *iter << ' ';
		}
		cout << endl;

		lt1.unique();        // ������ �ߺ� ���Ҹ� ��ģ��.

		cout << "lt1 unique : ";
		for (iter = lt1.begin(); iter != lt1.end(); ++iter) 
		{
			cout << *iter << ' ';
		}
		cout << endl;

		lt1.unique(Predicate);    // Predicate�� ���� ���� ���Ұ� ũ�ų� ������ �����Ѵ�.

		cout << "lt1 unique Predicate: ";
		for (iter = lt1.begin(); iter != lt1.end(); ++iter) 
		{
			cout << *iter << ' ';
		}
		cout << endl << "==================" << endl;

		// ������������ �����Ѵ�.
		lt1.sort();    

		cout << "lt1 sort : ";
		for (iter = lt1.begin(); iter != lt1.end(); ++iter) 
		{
			cout << *iter << ' ';
		}
		cout << endl << "==================" << endl;

		lt2.push_back(30);
		lt2.push_back(60);
		lt2.push_back(10);
		lt2.push_back(99);
		lt2.sort();

		cout << "lt1 : ";
		for (iter = lt1.begin(); iter != lt1.end(); ++iter) 
		{
			cout << *iter << ' ';
		}
		cout << endl;

		cout << "lt2 : ";
		for (iter = lt2.begin(); iter != lt2.end(); ++iter) 
		{
			cout << *iter << ' ';
		}
		cout << endl;

		// lt1�� lt2�� �������� ���� ������ �պ��Ѵ�.
		lt1.merge(lt2);   

		cout << "lt1 merge : ";
		for (iter = lt1.begin(); iter != lt1.end(); ++iter) 
		{
			cout << *iter << ' ';
		}
		cout << endl;

		cout << "lt2  merge : ";
		for (iter = lt2.begin(); iter != lt2.end(); ++iter) 
		{
			cout << *iter << ' ';
		}
		cout << endl;
	}
};

int main() {
	ListInit l;
	

	return 0;
}


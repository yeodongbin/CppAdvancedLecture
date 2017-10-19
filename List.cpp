//list 컨테이너는 vector와 deque 처럼 
//시퀀스 컨테이너로 원소가 상대적인 순서를 유지한다.
//그러나 list는 노드 기반 컨테이너로 원소가 노드 단위로 
//저장되며 list는 이중 연결 리스트로 구현된다.

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

		// erase 삭제
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

		// 리스트에서 원소 10 제거
		lt.remove(10);

		for (iter = lt.begin(); iter != lt.end(); ++iter)
		{
			cout << *iter << ' ';
		}
		cout << endl;


		// Predicate 함수에 해당하는 원소 제거 (30보다 크다)
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
		++iter;        //30 원소의 위치를 가리킴

		lt1.splice(iter, lt2); // iter가 가리키는 위치(30)에lt2의 모든 원소를 잘라서 붙인다.

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

		lt1.reverse();    // 리스트 역순 뒤집기

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

		lt1.unique();        // 인접한 중복 원소를 합친다.

		cout << "lt1 unique : ";
		for (iter = lt1.begin(); iter != lt1.end(); ++iter) 
		{
			cout << *iter << ' ';
		}
		cout << endl;

		lt1.unique(Predicate);    // Predicate에 따라 다음 원소가 크거나 같으면 제거한다.

		cout << "lt1 unique Predicate: ";
		for (iter = lt1.begin(); iter != lt1.end(); ++iter) 
		{
			cout << *iter << ' ';
		}
		cout << endl << "==================" << endl;

		// 오름차순으로 정렬한다.
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

		// lt1에 lt2를 오름차순 정렬 순서로 합병한다.
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


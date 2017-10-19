#include <iostream>
#include <vector>
using namespace std;

class VertorInit
{
public:
	void VertorReserve(void)
	{
		vector<int> v;
		v.reserve(8);        // 벡터 메모리 공간 8 예약 할당

		v.push_back(10);
		v.push_back(20);
		v.push_back(30);
		v.push_back(40);
		v.push_back(50);

		for (vector<int>::size_type i = 0; i < v.size(); ++i)
		{
			cout << v[i] << " ";
		}
		cout << endl;
		cout << "size : " << v.size()          // 벡터 원소 개수
			<< ", capacity : " << v.capacity() // 벡터의 할당된 메모리의 크기
			<< ", max_size : " << v.max_size() // 최대 저장 가능한 원소 개수
			<< endl;


		// 벡터의 원소 갯수를 10개로 확장, 추가된 공간은 디폴트 0으로 채워진다.
		cout << endl << "-- resize(10) -- " << endl;

		v.resize(10);
		// 벡터의 size 타입으로 i를 지정한다 (unsigned int) 
		for (vector<int>::size_type i = 0; i < v.size(); ++i)
		{
			cout << v[i] << " ";
		}
		cout << endl;

		cout << "size : " << v.size()
			<< ", capacity : " << v.capacity()
			<< ", max_size : " << v.max_size() << endl;


		// 벡터의 원소 갯수를 3개로 축소, capacity는 변화 없다.
		cout << endl << "-- resize(3) -- " << endl;

		v.resize(3);

		for (vector<int>::size_type i = 0; i < v.size(); ++i)
		{
			cout << v[i] << " ";
		}
		cout << endl;
		cout << "size : " << v.size()
			<< ", capacity : " << v.capacity()
			<< ", max_size : " << v.max_size() << endl;


		// 벡터 비운다    capacity(메모리) 는 그대로 남아있다.
		cout << endl << "-- vector clear() -- " << endl;

		v.clear();

		if (v.empty()) // 벡터에 원소가 없는지 확인한다.
		{
			cout << "벡터에 원소가 없다." << endl;
		}

		cout << "size : " << v.size()
			<< ", capacity : " << v.capacity()
			<< ", max_size : " << v.max_size()
			<< endl << endl;
	}

	void VertorSwap(void)
	{
		vector<int> v(5);    // 0으로 초기화된 5개의 원소
		cout << "size : " << v.size() 
			 << ", capacity : " << v.capacity() 
			 << endl;

		vector<int>().swap(v);  // 임의 벡터와 교환한다.
		cout << "size : " << v.size() 
			 << ", capacity : " << v.capacity() 
			 << endl;

		vector<int> v1;
		v1.push_back(10);
		v1.push_back(20);
		v1.push_back(30);
		v1.push_back(40);
		v1.push_back(50);

		cout << v1[0] << ", " 
			 << v1.at(0) << ", " 
			 << v1.front() << endl; // 첫번째 원소
		cout << v1[4] << ", " 
			 << v1.at(4) << ", " 
			 << v1.back() << endl; //  마지막 원소

		v1.front() = 100;
		v1.back() = 500;

		cout << v1[0] << ", " 
			 << v1.at(0) << ", " 
			 << v1.front() << endl; // 첫번째 원소
		cout << v1[4] << ", " 
			 << v1.at(4) << ", " 
			 << v1.back() << endl; //  마지막 원소

		try { // 범위를 벋어난 호출 throw out_of_range 예외
			cout << v.at(10) << endl;       
		}
		catch (out_of_range &e) {
			cout << e.what() << endl;
		}
	}
};

int main() {
	VertorInit v;
	v.VertorReserve();
	v.VertorSwap();

	return 0;
}
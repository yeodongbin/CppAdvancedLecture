#include <iostream>
#include <vector>
using namespace std;

class VertorInit
{
public:
	void VertorReserve(void)
	{
		vector<int> v;
		v.reserve(8);        // ���� �޸� ���� 8 ���� �Ҵ�

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
		cout << "size : " << v.size()          // ���� ���� ����
			<< ", capacity : " << v.capacity() // ������ �Ҵ�� �޸��� ũ��
			<< ", max_size : " << v.max_size() // �ִ� ���� ������ ���� ����
			<< endl;


		// ������ ���� ������ 10���� Ȯ��, �߰��� ������ ����Ʈ 0���� ä������.
		cout << endl << "-- resize(10) -- " << endl;

		v.resize(10);
		// ������ size Ÿ������ i�� �����Ѵ� (unsigned int) 
		for (vector<int>::size_type i = 0; i < v.size(); ++i)
		{
			cout << v[i] << " ";
		}
		cout << endl;

		cout << "size : " << v.size()
			<< ", capacity : " << v.capacity()
			<< ", max_size : " << v.max_size() << endl;


		// ������ ���� ������ 3���� ���, capacity�� ��ȭ ����.
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


		// ���� ����    capacity(�޸�) �� �״�� �����ִ�.
		cout << endl << "-- vector clear() -- " << endl;

		v.clear();

		if (v.empty()) // ���Ϳ� ���Ұ� ������ Ȯ���Ѵ�.
		{
			cout << "���Ϳ� ���Ұ� ����." << endl;
		}

		cout << "size : " << v.size()
			<< ", capacity : " << v.capacity()
			<< ", max_size : " << v.max_size()
			<< endl << endl;
	}

	void VertorSwap(void)
	{
		vector<int> v(5);    // 0���� �ʱ�ȭ�� 5���� ����
		cout << "size : " << v.size() 
			 << ", capacity : " << v.capacity() 
			 << endl;

		vector<int>().swap(v);  // ���� ���Ϳ� ��ȯ�Ѵ�.
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
			 << v1.front() << endl; // ù��° ����
		cout << v1[4] << ", " 
			 << v1.at(4) << ", " 
			 << v1.back() << endl; //  ������ ����

		v1.front() = 100;
		v1.back() = 500;

		cout << v1[0] << ", " 
			 << v1.at(0) << ", " 
			 << v1.front() << endl; // ù��° ����
		cout << v1[4] << ", " 
			 << v1.at(4) << ", " 
			 << v1.back() << endl; //  ������ ����

		try { // ������ ��� ȣ�� throw out_of_range ����
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
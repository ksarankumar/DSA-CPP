#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& v);

void vectorExample()
{
	vector <int> v(10,9);  // vector<datatype> v(size,inital_value)
	v.push_back(10);
	v.push_back(11);
	v.pop_back();

	printVector(v);

}

void printVector(vector<int>& v)
{
	for (int i = 0;i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}
}
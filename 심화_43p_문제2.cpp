//심화_43p_문제2
//과일이름들이 주어질 때, map<string, int> 타입을 사용하여 가장 많이 나온 과일이름을 출력하여라.
//입력예시) 8 사과 복숭아 포도 배 사과 복숭아 포도 포도
//출력예시) 포도
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void)
{
	cout << "입력예시) ";
	int n;
	cin >> n;

	map<string, int> m;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		m[s]++;
	}
	string best = "";
	int bestCnt = 0;

	for (auto it = m.begin(); it != m.end(); ++it) {
		const string& name = it->first;
		int cnt = it->second;
		if (cnt > bestCnt || (cnt == bestCnt && name < best)) {
			bestCnt = cnt;
			best = name;
		}
	}
	cout << "출력예시) " << best << "\n";
	return 0;
}
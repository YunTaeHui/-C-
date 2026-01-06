//심화_41p_문제1_C
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	srand((unsigned)time(NULL));
//	int num;
//	printf("학생 인원을 입력하세요: ");
//	scanf("%d", &num);
//	int* scores = (int*)malloc(sizeof(int) * num);
//	//0~100 점수 빈도
//	int freq[101] = { 0 };
//
//	printf("성적: ");
//	for (int i = 0; i < num; i++) {
//		scores[i] = rand() % 100 + 1;
//		freq[scores[i]]++;
//		printf("%d ", scores[i]);
//	}
//	int best_score = 0;
//	int best_count = freq[0];
//	for (int j = 1; j <= 100; j++) {
//		if (freq[j] > best_count) {
//			best_count = freq[j];
//			best_score = j;
//		}
//	}
//	printf("\n최다점수 : %d, 인원 : %d\n",
//		best_score, best_count);
//	free(scores);
//	return 0;
//}


//심화_41p_문제1_CPP
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//int main(void)
//{
//	srand((unsigned)time(NULL));
//	int num;
//	cout << "학생 인원을 입력하세요: ";
//	cin >> num;
//
//	int* scores = new int[num];
//	int freq[101] = { 0 };
//
//	cout << "성적: ";
//	for (int i = 0; i < num; i++) {
//		scores[i] = rand() % 101;
//		freq[scores[i]]++;
//		cout << scores[i] << ' ';
//	}
//	int best_score = 0;
//	int best_count = freq[0];
//	for (int j = 1; j <= 100; j++) {
//		if (freq[j] > best_count) {
//			best_count = freq[j];
//			best_score = j;
//		}
//	}
//	cout << "\n최다점수 : " << best_score << ", 인원 : " << best_count << "\n";
//
//	delete scores;
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void)
//{
//	string s = "example string";
//	char search = 'x';
//	int at = s.find(search, 0);
//	cout << s << endl;
//	cout << "'x' is at" << at << " " << endl;
//
//	return 0;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(void)
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	for (vector<int>::size_type i = 0; i < v.size(); ++i) {
//		cout << v[i] << endl;
//	}
//	cout << endl;
//
//	cout << "size : " << v.size()
//		<< " max_size " << v.max_size() << endl;
//
//	return 0;
//}


//#include <iostream>
//#include <list>
//using namespace std;
//int main(void)
//{
//	list<int> lt;
//	lt.push_back(10);
//	lt.push_back(20);
//	lt.push_back(30);
//	lt.push_back(40);
//	lt.push_back(50);
//
//	list<int>::iterator iter;
//	for (iter = lt.begin(); iter != lt.end(); ++iter) {
//		cout << *iter << ' ';
//	}
//	cout << endl;
//
//	iter = lt.begin();
//	iter++;
//	iter++;
//
//	list<int>::iterator iter2 = lt.erase(iter);
//	for (iter = lt.begin(); iter != lt.end(); ++iter) {
//		cout << *iter << ' ';
//	}
//	cout << endl;
//
//	lt.remove(10);
//	for (iter = lt.begin(); iter != lt.end(); ++iter) {
//		cout << *iter << ' ';
//	}
//	cout << endl;
//	return 0;
//}


//#include <iostream>
//#include <map>
//using namespace std;
//
//int main(void)
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(5, 100));
//
//	m[11] = 200;
//	m[13] = 40;
//	if (m[14] == NULL) {
//
//	}
//	map<int, int>::iterator iter;
//	for (iter = m.begin(); iter != m.end(); ++iter) {
//		cout << "(" << (*iter).first << ","
//			<< (*iter).second << ")" << " ";
//	}
//	cout << endl;
//
//	m[13] = 140;
//	for (iter = m.begin(); iter != m.end(); ++iter) {
//		cout << "(" << iter->first << ","
//			<< iter->second << ")" << " ";
//	}
//	cout << endl;
//
//	return 0;
//}


//#include <vector>
//#include <time.h>
//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	srand((unsigned int)time(NULL));
//	vector<int> vec;
//
//	for (int i = 0; i < 10; i++) {
//		vec.push_back(rand() % 10 + 5);
//		cout << vec[i] << " ";
//	}
//	cout << endl;
//
//	vector<int>::iterator it = vec.begin() + 3;
//	vec.erase(it);
//	vec.pop_back();
//
//	cout << "vector : " << endl;
//	for (it = vec.begin(); it != vec.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	return 0;
//}


//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//
//int main(void)
//{
//	cout << "입력예시) ";
//	int n;
//	cin >> n;
//
//	map<string, int> m;
//	for (int i = 0; i < n; i++) {
//		string s;
//		cin >> s;
//		m[s]++;
//	}
//	
//	map<string, int>::iterator it = m.begin();
//	string best = it->first;
//	int bestCnt = it->second;
//
//	for (++it; it != m.end(); ++it) {
//		string name = it->first;
//		int cnt = it->second;
//		if (cnt > bestCnt || (cnt == bestCnt && name < best)) {
//			bestCnt = cnt;
//			best = name;
//		}
//	}
//	cout << "출력예시) " << best << "\n";
//	return 0;
//}


//#include <iostream>
//#include <bitset>
//using namespace std;
//
//int main(void)
//{
//	char a = 77;
//	char b = 8;
//	cout << bitset<8>(a) << "->" << (int)a << endl;
//	cout << bitset<8>(b) << "->" << (int)b << endl;
//
//	// & : AND
//	cout << "AND : " << bitset<8>(a & b) << endl;
//	// | : OR
//	cout << "OR : " << bitset<8>(a | b) << endl;
//	// ^ : XOR
//	cout << "XOR : " << bitset<8>(a ^ b) << endl;
//	// ~ : NOT
//	cout << "NOT : " << bitset<8>(~a) << endl;
//	// >> : LEFT SHIFT
//	cout << "LEFT SHIFT : " << bitset<8>(a >> 3) << endl;
//	// << : RIGHT SHIFT
//	cout << "RIGHT SHIFT : " << bitset<8>(a << 3) << endl;
//
//	return 0;
//}


//#include <iostream>
//#include <bitset>
//using namespace std;
//
//int main(void)
//{
//	char a = 77;
//	char b = 8;
//	cout << bitset<8>(a) << "->" << (int)a << endl;
//	cout << bitset<8>(b) << "->" << (int)b << endl;
//
//	cout << "(a & b): " << bitset<8>(a & b) << endl;
//	cout << "(a ^ a & b): " << bitset<8>(a ^ a & b) << endl;
//
//	return 0;
//}


#include <iostream>
#include <bitset>
using namespace std;

int main(void)
{
	char a = -1;
	cout << bitset<8>(a) << "-> (int)a = " << (int)a << endl;
	char b = a >> 5;
	cout << bitset<8>(a >> 5) << "-> a >> 5" << endl;
	char c = 127 >> 1;
	cout << bitset<8>(127) << "-> (int)c = " << (int)c << endl;
	cout << bitset<8>(127 >> 1) << "-> 127 >> 1" << endl;
}
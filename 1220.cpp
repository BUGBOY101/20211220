#define	_CRT_SECURE_NO_WARNINGS 1

//̰���㷨

#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	int j;//�ܶһ��Ķ�����
	int f;//��Ҫ��è����
	double bi;//�Լ۱�
}food[1000];
bool cmp(node a,node b) {//sort�Ƚϵı�׼cmp
	return a.bi > b.bi;
}
int main() {
	int m, n, i;
	double sum;
	while (cin >> m >> n && (m != -1 || n != -1) ){
		for (i = 0; i < n; i++) {
			cin >> food[i].j >> food[i].f;
			food[i].bi = (double)food[i].j / food[i].f;
		}
		sort(food, food + n, cmp);//�Լ۱ȵ������i=0��
		sum = 0, i = 0;
		while (m && i < n) {
			if (m >= food[i].f) {
				sum += food[i].j;
				m -= food[i].f;
			}
			else {//��ʱʣ���è������һ����ֱ���������еĶ���
				sum += m * food[i].bi;//�������һ�
				m = 0;//è������
			}
			i++;
		}
		printf("%.3lf\n", sum);
	}
}

//#include<iostream>
//using namespace std;
//#include<string.h>
//void my_strcat(char* s1,char*s2) {
//	int l1, l2, i, j;
//	l1 = strlen(s1);
//	l2 = strlen(s2);
//	for (i = l1,j=0; j<l2; i++,j++)
//		s1[i] = s2[j];
//	s1[i] = '\0';
//}
//int main() {
//	char s1[200] = "hello";
//	char s2[10] = "world!";
//	int i = 0;
//	strcat(s1, s2);
//	
//	while (s1[i] != '\0') {
//		cout << s1[i];
//		i++;
//	}
//	cout << endl;
//	i = 0;
//	my_strcat(s1, s2);
//	while (s1[i] != '\0') {
//		cout << s1[i];
//		i++;
//	}
//	
//		
//	cout << endl;
//}

//#include<iostream>
//using namespace std;
//int a[10], book[10], n;
//void dfs(int step) {
//	int i;
//	if (step == n + 1) {
//		for (i = 1; i <= n; i++)
//			cout << a[i] << " ";
//		cout << endl;
//		return;
//	}
//	for (i = 1; i <= n; i++) {
//		if (book[i] == 0) {
//			a[step] = i;
//			book[i] = 1;
//			dfs(step + 1);
//			book[i] = 0;
//			
//		}
//	}
//	return;
//}
//int main() {
//	cout << "���������Ӹ�����";
//	cin >> n;
//	dfs(1);
//}

//#include<iostream>
//using namespace std;
//void quicksort(int a[], int left, int right) {
//	int i = left, j = right, temp = a[left];
//	if (left > right)
//		return;
//	while (i < j) {
//		while (a[j] >= temp && i < j)
//			j--;
//		while (a[i] <= temp && i < j)
//			i++;
//		if (i != j)
//		{
//			int t = a[i];
//			a[i] = a[j];
//			a[j] = t;
//		}
//	}
//	a[left] = a[i];
//	a[i] = temp;
//	quicksort(a, left, i - 1);
//	quicksort(a, i + 1, right);
//}
//int main() {
//	int n, a[100], i;
//	cin >> n;
//	for (i = 0; i < n; i++)
//		cin >> a[i];
//	quicksort(a, 0, n - 1);
//	for (i = 0; i < n; i++)
//		cout << a[i] << " ";
//	cout << endl;
//}
#include "BinaryTree.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	Tree* treeOne = new Tree();
	treeOne->pasteElem(1, {});
	treeOne->pasteElem(2, { 0 });
	treeOne->pasteElem(3, { 1 });
	treeOne->pasteElem(4, { 0,1 });
	treeOne->pasteElem(8, { 0, 0 });
	treeOne->pasteElem(5, { 1,0 });
	cout << *treeOne << endl;
	cout << "________________________________________" << endl;
	cout << "Кол-во четных: " << treeOne->countEven() << endl;
	cout << "Положительные элементы: " << treeOne->positiveElem() << endl;
	cout << "Среднее арифметическое: " << treeOne->middle() << endl;
	vector<int> vec = treeOne->findElem(5);
	cout << "Вектор путь к элементу: ";
	for (unsigned int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;
	Tree* treeTwo = new Tree(*treeOne);//cоздание копии
	treeOne->delLeaves();
	cout << "________________________________________" << endl;
	cout << "Удаленные листья" << endl;
	cout << *treeOne << endl;
	cout << "________________________________________" << endl;
	cout << *treeTwo << endl;//вывод копии
	delete treeOne;
	delete treeTwo;
	system("pause");
	return 0;
}


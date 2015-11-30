#include <memory>
#include <iostream>
#include <vector>

using namespace std;

void swap(vector<double>* v, int i, int j)
{

	float t = (*v)[i]; 
	(*v)[i] = (*v)[j];
	(*v)[j] = t;
}

void quicksort(vector<double>* v, int lhs, int rhs)
{

	int i = lhs, j = rhs;

	double pivot = (*v)[(lhs + rhs)/ 2];			//select a pivot element


	do
	{
		while((*v)[i] < pivot)
			++i;


		while((*v)[j] > pivot)
			--j;

		if(i<=j)
		{

			swap(v, i, j);
			i++;
			j--;
		}
	}while (i <= j);

	if (lhs < j)
		quicksort(v, lhs, j);
	if (i < rhs)
		quicksort(v, i, rhs);
};


int main(int argc, char *argv[])
{
	vector<double>* v = new vector<double>();


	for(int i = 1; i < argc; ++i)
	{
		v->push_back(strtod(argv[i], NULL));
	}

	int rhs = v->size()-1;
	int lhs = 0;
	
	quicksort(v, lhs, rhs);

	for(int i = 0; i < v->size(); ++i)
	{
		cout << "[" << (*v)[i] << "]" << endl;
	}


	return 0;
}
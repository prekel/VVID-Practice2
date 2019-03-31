#include "Variant01.h"

double MinValue(const QVector<double> a)
{
	auto min = a.first();
	for (auto i : a)
	{
		if (i < min)
		{
			min = i;
		}
	}
	return min;
}

double AverageValue(const QVector<double> a)
{
	auto sum = 0.0;
	for (auto i : a)
	{
		sum += i;
	}
	return sum / a.size();
}

void Replace(QVector<double> &a, double from, double to, double eps)
{
	for (auto i = 0; i < a.size(); i++)
	{
		if (fabs(a[i] - from) < eps)
		{
			a[i] = to;
		}
	}
}

QVector<double> SelectEven(const QVector<double> a)
{
	QVector<double> b;
	for (auto i = 0; i < a.size(); i++)
	{
		if (i % 2 == 1)
		{
			b.push_back(a[i]);
		}
	}
	return b;
}

void Variant01(QVector<double> &a)
{
	Replace(a, MinValue(a), AverageValue(SelectEven(a)));
}

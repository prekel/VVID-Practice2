#include "Variant30.h"

QMap<int, QVector<int>> Variant30(const QVector<int> a)
{
	QMap<int, QVector<int>> b;
	for (auto i = 0; i < a.size(); i++)
	{
		b[a[i]].push_back(i);
	}

	QMap<int, QVector<int>> res;
	for (auto i : b.keys())
	{
		if (b[i].size() > 1)
		{
			res[i] = b[i];
		}
	}

	return res;
}

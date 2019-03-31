#include "Variant29.h"

double MeanNegative(const QVector<double> students)
{
	auto sum = 0.0;
	auto c = 0;

	for (auto i : students)
	{
		if (i < 0)
		{
			sum -= i;
			c++;
		}
	}

	return sum / c;
}

double MeanPositive(const QVector<double> students)
{
	auto sum = 0.0;
	auto c = 0;

	for (auto i : students)
	{
		if (i > 0)
		{
			sum += i;
			c++;
		}
	}

	return sum / c;
}

bool Variant29(const QVector<double> students)
{
	auto mean_male = MeanNegative(students);
	auto mean_female = MeanPositive(students);

	return (mean_male - mean_female) >= 10;
}

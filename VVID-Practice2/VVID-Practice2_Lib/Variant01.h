#ifndef VARIANT01_H
#define VARIANT01_H

#include <QVector>

double MinValue(const QVector<double> a);

double AverageValue(const QVector<double> a);

void Replace(QVector<double> &a, double from, double to, double eps = 1e-6);

QVector<double> SelectEven(const QVector<double> a);

void Variant01(QVector<double> &a);

#endif // VARIANT01_H

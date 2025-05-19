#ifndef PRODUCT_H
#define PRODUCT_H
#include <QString>

class Product {
public:
    int id;
    QString name;
    double price;

    Product(int i = 0, const QString& n = "", double p = 0.0)
        : id(i), name(n), price(p) {}

    QString toString() const {
        return QString("%1. %2 - %3€").arg(id).arg(name).arg(price, 0, 'f', 2);
    }
};

#endif

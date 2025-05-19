#ifndef ORDERITEM_H
#define ORDERITEM_H

#include "product.h"
#include <QString>

class OrderItem {
public:
    Product product;
    int quantity;
    QString comment;

    OrderItem(const Product& p, int q, const QString& cmt="")
        : product(p), quantity(q), comment(cmt) {}

    double getSubtotal() const {
        return product.price * quantity;
    }

    QString toString() const {
        QString base = QString ("%1 x%2 = %3€")
            .arg(product.name)
            .arg(quantity)
            .arg(getSubtotal(), 0, 'f', 2);
        return comment.isEmpty() ? base : base + "(" + comment + ")";
    }
};

#endif

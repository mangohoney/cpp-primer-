#ifndef LIMIT_QUOTE_H
#define LIMIT_QUOTE_H

#include "disc_quote.h"

class Limit_quote : public Disc_quote
{
public:
    Limit_quote() = default;
    Limit_quote(const std::string& b, double p, std::size_t q, double disc) :
                Disc_quote(b, p, q, disc) { }

    double net_price(std::size_t n) const override;
};

double Limit_quote::net_price(std::size_t n) const
{
    if (n < quantity)
        return n * (1 - discount) * price;
    else
        return quantity * (1 - discount) * price + (n - quantity) * price;
}

#endif

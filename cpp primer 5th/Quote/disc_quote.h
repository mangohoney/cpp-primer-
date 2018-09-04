#ifndef DISK_QUOTE_H
#define DISK_QUOTE_H

#include "quote.h"

class Disc_quote : public Quote
{
public:
    Disc_quote() = default;
    Disc_quote(const std::string& b, double p, std::size_t q, double disc) :
               Quote(b, p), quantity(q), discount(disc) { }

    double net_price(std::size_t n) const = 0;

protected:
    std::size_t quantity    = 0;
    double      discount    = 0.0;
};

#endif

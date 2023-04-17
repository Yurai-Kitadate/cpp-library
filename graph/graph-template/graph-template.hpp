#pragma once
template <typename T>
struct Edge
{
    ll from;
    ll to;
    T cost;
    bool operator<(const Edge &o) const
    {
        return cost < o.cost;
    }
};

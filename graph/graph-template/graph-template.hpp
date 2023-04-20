#pragma once
struct Edge
{
    ll from;
    ll to;
    ll cost;
    bool operator<(const Edge &o) const
    {
        return cost < o.cost;
    }
};

using Graph = vector<vector<Edge>>;

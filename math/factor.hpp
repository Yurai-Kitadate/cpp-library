vector<pll> factor(ull x)
{
    vector<pll> ans;
    for (ull i = 2; i * i <= x; i++)
        if (x % i == 0)
        {
            ans.push_back({i, 1});
            while ((x /= i) % i == 0)
                ans.back().second++;
        }
    if (x != 1)
        ans.push_back({x, 1});
    return ans;
}

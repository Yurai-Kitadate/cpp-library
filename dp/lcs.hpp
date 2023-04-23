ll lcs(string s, string t)
{
    vv(ll, dp, s.length() + 1, t.length() + 1);
    rep(i, 1, s.length() + 1)
    {
        rep(j, 1, t.length() + 1)
        {
            if (s[i - 1] == t[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }
    return dp[s.length()][t.length()];
}

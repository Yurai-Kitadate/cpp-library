---
title: 行列計算
documentation_of: //math/matrix.hpp
---

## 説明
行列計算で使うやつです。
- mat_mul : A*Bを返します。
- mat_pow : A^nを返します。
- mat_pow_sum : $ 1 + A^1 + ... + A^{k - 1}$を返します。
## 計算量
- mul $O(n^3)$
- mat_pow,mat_pow_sum : $O(n^3log \,k)$

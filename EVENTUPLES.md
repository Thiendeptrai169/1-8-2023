# EVENTUPLES
Sau khi đã hoàn thành kì thi cuối học kì, thầy giáo dạy toán đã ra bài tập hè cho các bạn ôn tập. Bài tập đó như sau:

Bạn được cho một dãy A chứa N số nguyên và Q truy vấn. Mỗi truy vấn được thể hiện bằng hai số nguyên L và R. Với mỗi truy vấn, in ra số bộ ba (i, j, k) sao cho (L ≤ i < j < k ≤ R) và $(A_i + A_j + A_k)$ là một số chẵn.

## Dữ liệu
- Dòng đầu tiên chứa số nguyên N, Q. (1 ≤ N, Q ≤ $10^5$)
- Dòng tiếp theo chứa N số nguyên, số nguyên thứ i có giá trị $A_i$ . (0 ≤ $A_i$ ≤ 106 )
- Q dòng tiếp theo mỗi dòng chứa 2 số nguyên $L_i$ , $R_i$ . $(1 ≤ L_i ≤ R_i ≤ N)$
## Kết quả
Gồm Q dòng, mỗi dòng sẽ chứa số lượng bộ ba được nói đến trong đề bài.
####INPUT
```
6 3
1 2 3 4 5 6
1 3
2 5
1 6
```
#### OUTPUT
```
1
2
10
```
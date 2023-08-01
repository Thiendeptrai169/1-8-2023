# DIV
Bạn đang chơi một trò chơi một người chơi, mà trong đó bạn sẽ phải chơi 1012 màn chơi khác nhau để tiêu diệt 1012 con Boss khác nhau. Màn chơi thứ i sẽ xuất hiện con Boss thứ i có chỉ số sức mạnh bằng tổng của các ước nguyên dương của i.

Bạn đang cần xem lại thống kê của các màn chơi q màn chơi: $(a_1, a_2, . . . , a_q)$. Hãy cho biết sức mạnh của Boss của mỗi màn chơi đang xem nhé!
## Dữ liệu
- Dòng thứ nhất chứa duy nhất số q.
- Dòng thứ hai lần lượt in ra q số: $(a_1, a_2, . . . , a_q)$.
## Kết quả
- In ra một dòng gồm q số, số thứ i in ra sức mạnh của con Boss thứ $a_i$ (1 ≤ i ≤ n). Các số được in ra cách nhau một khoảng trống.
#### INPUT
```
4
2 4 10 9
```
```
4
10 11 12 13
```
#### OUTPUT
```
3 7 8 13
```
```
18 12 28 14
```
##**<span style="color: Blue">Giải thích**
Gọi G(x) là tổng các ước của x.
Test ví dụ 1 có: G(2) = 1 + 2 = 3; G(4) = 1 + 2 + 4 = 7; G(10) = 1 + 2 + 5 + 10 = 18
G(9) = 1 + 3 + 9 = 13.
Test ví dụ 2 là một ví dụ cho subtask 4. Ta có: G(10) = 18; G(11) = 1 + 11 = 12;
G(12) = 1 + 2 + 3 + 4 + 6 + 12 = 28; G(13) = 1 + 13 = 14.

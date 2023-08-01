# HRANK
Tại buổi tựu trường đầu năm, một lớp gồm n học sinh đứng xếp thành một hàng dọc quay mặt về phía trước để nghe thông báo. Các học sinh đứng sau có thể nhìn thấy được những người đứng trước mình, ngược lại thì không, người đứng đầu hàng đương nhiên không thể thấy được những người xếp hàng sau mình.

Các học sinh thường thích so kè nhau về chiều cao nên hay nhìn xem những ai cao hơn mình để sắp thứ hạng chiều cao trong hàng. Tuy nhiên, điều này hơi khó khăn vì mỗi người chỉ nhìn thấy được số người đứng đằng trước mà cao hơn mình chứ không biết được những người đứng đằng sau. Bạn hãy giúp từng học sinh biết được mình cao thứ hạng mấy trong hàng. Không có 2 học sinh nào có cùng chiều cao.

Yêu cầu: Cho dãy ai ứng với số người cao hơn mình mà học sinh đứng ở vị trí thứ i (2 ≤ i ≤ n) nhìn thấy được, hãy cho biết chiều cao của học sinh đứng ở vị trí i xếp thứ hạng mấy trong hàng
## Dữ liệu
- Dòng đầu tiên chứa số nguyên n, q (n ≤ 103 , 1 ≤ q ≤ 106 ) - số lượng học sinh và số lượng truy vấn
- Dòng thứ hai chứa dãy gồm n − 1 số nguyên: $(a_2, ..., a_n (a_i ≥ 0))$.
- Mỗi dòng trong q dòng tiếp theo chứa số nguyên dương i (1 ≤ i ≤ n) ứng với truy vấn thứ hạng chiều cao của học sinh đứng ở vị trí i trong hàng.
## Kết quả
- In ra q dòng, dòng thứ i trả lời truy vấn thứ i.
#### INPUT
```
7 4
1 0 3 0 2 3
7
2
5
1
```
#### OUTPUT
```
4
6
1
5
```
# COWHERD
Cho một trang trại gồm n hàng, mỗi hàng có m ô $(2 ≤ n ≤ 10^5 , 2 ≤ m ≤ 10^9 )$. Các hàng được đánh số từ 1 đến n, các ô trong hàng được đánh số từ 1 đến m.

Ở mỗi hàng, tại ô đầu tiên (ô thứ 1), có một con bò. Mỗi hàng sẽ có một chuồng bò tương ứng với con bò đấy, chuồng bò của con bò ở hàng thứ i sẽ ở ô thứ ai (1 ≤ $a_i$ ≤ m).


Người chủ có thể ra lệnh cho các con bò di chuyển bằng cách sau: Ở mỗi hàng trong trang trại sẽ có một thiết bị loa. Mỗi thiết bị loa có thể ra lệnh cho hai con bò di chuyển cùng một lúc, cụ thể hơn: Thiết bị loa ở hàng thứ i sẽ khiến con bò ở hàng thứ i và con bò ở hàng thứ bi di chuyển **tiến tới một ô** (1 ≤ $b_i$ < i). Nếu ở hàng đầu tiên, chủ trang trại có thể kêu con bò **tiến tới một ô** ngay mà không cần loa, vì thế $b_1$ = 0.

**Note**: Nếu con bò đang ở ô cuối cùng của hàng (ô thứ m), thì khi tiến tới một ô, bằng một cổng
ma thuật nào đấy con bò sẽ quay về ô đầu tiên (ô thứ 1).

Cho biết số lượng hàng của trang trại, vị trí của từng chuồng bò, mảng b của dãy loa. Hãy in ra một dãy thao tác bất kì để khiến các con bò về đúng chuồng, mỗi thao tác sẽ có dạng (i, x) (1 ≤ i ≤ n, 0 ≤ x ≤ m − 1) — với ý nghĩa rằng người chủ sẽ dùng loa ở hàng thứ i tổng cộng x lần. Đảm bảo rằng luôn có kết quả với độ dài dãy thao tác không quá 5 × n.

## Dữ liệu
- Dòng đầu tiên gồm hai số nguyên n và m $(2 ≤ n ≤ 10^5 , 2 ≤ m ≤ 10^9 )$ — mô tả số hàng và số cột của trang trại.
- Dòng tiếp theo gồm n số nguyên ai (1 ≤ $a_i$ ≤ m) — mô tả chuồng bò của con bò ở hàng thứ i ở vị trí nào trong hàng.
- Dòng tiếp theo gồm n số nguyên bi (1 ≤ $b_i$ < i, b1 = 0) — mô tả thiết bị loa ở hàng thứ i sẽ điều khiển được con bò ở hàng thứ bi và con bò ở hàng thứ i.
## Kết quả
- Dòng đầu tiên in ra một số nguyên k là số lượng thao tác thực hiện (0 ≤ k ≤ 5 × n).
- k dòng tiếp theo, mỗi dòng in ra một thao tác có dạng (i, x) (1 ≤ i ≤ n, 0 ≤ x ≤ m − 1).
#### INPUT
```
3 5
2 5 5
0 1 2
```
```
2 5
5 3
0 1
```
### OUTPUT
```
2
1 1
3 4
```
```
2
1 2
2 2
```

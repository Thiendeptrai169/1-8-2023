# EXCHANGE
An và Bình trên đường đi học về đã nghĩ ra một trò chơi như sau, giả sử An có một số nguyên A trong tay. An có thể trả tiền cho Bình để thực hiện một trong hai thao tác sau với bất kì số lần mà An muốn (có thể là không thực hiện lần nào cả).

- Trả Bình 1 đồng để nhân số nguyên của mình đang có bởi -1
- Trả Bình 2 đồng để giảm số nguyên của mình đang có bởi 1

Có bao nhiêu số nguyên khác nhau An có thể có được, với giả sử An có nhiều nhất là B đồng trong tay?
## Dữ liệu
- Một dòng duy nhất ghi hai số A, B.
## Ràng buộc
- −$10^{18} ≤ A ≤ 10^{18}$
- 1 ≤ B ≤ $10^{18}$
- Tất cả dữ liệu được cho là số nguyên.
## Kết quả
In ra số các số mà An có thể sinh ra được với nhiều nhất là B đồng.
#### INPUT
```
11 2
```
#### OUTPUT
```
3
```
## **<span style="color: Blue">Giải thích**
An có cho mình là số nguyên 11 và nhiều nhất là 2 đồng, những trường hợp sau có thể xảy ra:
- An không sử dụng đồng nào cả, khi đó số nguyên An có vẫn là 11.
- An sử dụng 1 đồng, khi đó số nguyên An có được nhân lên bởi -1 là -11.
- An sử dụng 2 đồng và trừ số nguyên của mình đang có bởi 1, khi đó An có thể có được số 10.

Vậy có thể có nhiều nhất là 3 số nguyên khác nhau (11, -11, 10) An có thể có trong trường hợp này.
# VOTE
Bé Lộc hiện tại đang bắt đầu học lớp 1A và đang muốn giành được chức lớp trưởng của lớp trong cuộc bình chọn lớp trưởng diễn ra vào tuần tới. Hình thức lựa chọn lớp trưởng của lớp 1A đó là tất cả các bạn trong lớp sẽ bình chọn một người mà họ muốn người đó làm lớp trưởng. Bé Lộc vì rất muốn chức này nên đã làm một vài khảo sát với các bạn trong lớp và đã có được các thông tin quan trọng và hữu ích. Đó là, với từng bạn trong lớp, Lộc biết được rằng bạn này sẽ bình chọn cho người nào, và nếu muốn bạn đó thay đổi để lựa chọn cho bạn thì sẽ cần đưa cho bạn đó bao nhiêu tiền. Bé Lộc hiện tại đang cần tính lượng tiền ít nhất cần bỏ ra để làm thay đổi bình chọn của một số bạn trong lớp, sao cho bé Lộc sẽ trở thành lớp trưởng của lớp 1A vào tuần tới. Lưu ý, để thắng được cuộc bình chọn, số người bình chọn cho bạn phải nhiều hơn số lượng người bình chọn làm lớp trưởng của bất kỳ ứng viên nào.
## Dữ liệu
Dòng đầu tiên gồm một số nguyên duy nhất là số nguyên dương n (2 ≤ n ≤ 105 ) - số lượng học sinh/ứng viên trong lớp 1A (bao gồm cả bé Lộc).

n dòng tiếp theo, mỗi dòng gồm hai số nguyên dương $a_i$ , $b_i$ $(1 ≤ ai ≤ n, 0 ≤ b_i ≤ 105 )$ lần lượt là số thứ tự của ứng viên mà học sinh thứ i sẽ bình chọn và số lượng tiền cần bỏ ra nếu muốn làm cho bạn học sinh này thay đổi đi bình chọn của bạn. Bé Lộc là ứng viên số thứ tự số 1 (cho nên nếu một học sinh muốn bình chọn cho bé Lộc, ai sẽ có giá trị là 1, đồng thời $b_i$ cũng sẽ có giá trị là 0).

Lưu ý: lượt bình chọn đầu tiên luôn là $a_1$ = 1 và có $b_i$ = 0 vì đó là lượt bình chọn của bé Lộc (bé Lộc tự bình chọn chính mình làm lớp trưởng).
## Kết quả
In ra duy nhất một số nguyên dương là lượng tiền ít nhất bé Lộc cần bỏ ra để trở thành lớp trưởng lớp 1A vào tuần tới.
#### INPUT
```
5
1 0
2 2
2 2
2 2
3 1
```
```
4
1 0
2 2
2 2
3 1
```
#### OUTPUT
```
3
```
```
2
```
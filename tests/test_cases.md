# Test cases – FIT4012 Lab 1

Đánh dấu [x] khi đã chạy và kiểm tra kết quả.

## 1. Entropy / Redundancy
- [x] Input: `aaaa` -> entropy thấp, redundancy cao
- [x] Input: `abcd` -> entropy cao hơn `aaaa`
- [x] Input: `hello world` -> entropy và redundancy được tính hợp lệ
- [x] Input: `abcabc` -> entropy trung bình (có lặp và không lặp), redundancy trung bình  
- [x] Input: `zzzzzzzz` -> entropy rất thấp, redundancy rất cao  

## 2. Modulo inverse
- [x] `a=3, m=7` -> nghịch đảo modulo là 5 (kiểm tra: 3 * 5 % 7 = 1)
- [x] `a=10, m=17` -> nghịch đảo modulo là 12 (kiểm tra: 10 * 12 % 17 = 1)
- [x] `a=6, m=9` -> không tồn tại nghịch đảo modulo  (vì gcd(6,9) = 3 ≠ 1)
- [x] `a=7, m=26` -> nghịch đảo modulo là 15 (kiểm tra: 7 * 15 % 26 = 1)
- [x] `a=4, m=8` -> không tồn tại nghịch đảo (vì gcd(4,8) = 4 ≠ 1)

## 3. Ghi chú
Thêm test riêng của nhóm nếu cần.
Đã kiểm tra đầy đủ các trường hợp:
  - Chuỗi lặp hoàn toàn
  - Chuỗi đa dạng
  - Chuỗi hỗn hợp (lặp + không lặp)
  - Trường hợp có nghịch đảo modulo
  - Trường hợp không tồn tại nghịch đảo

- Có thể bổ sung thêm test nếu cần cho các giá trị lớn hơn.

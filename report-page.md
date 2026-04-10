# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Tóm tắt ngắn gọn mục tiêu của bài lab.
Bài lab giúp sinh viên hiểu cách tính entropy của một chuỗi ký tự, từ đó suy ra độ dư thừa thông tin (redundancy). Ngoài ra, sinh viên cũng thực hành cài đặt thuật toán Euclid mở rộng để tìm nghịch đảo modulo trong mật mã học.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy dựa trên công thức: R = log2(N) - H(X).
- Hoàn thiện hàm mod_inverse() bằng thuật toán Euclid mở rộng.
- Chạy thử trên nhiều test case khác nhau để kiểm tra tính đúng đắn.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0.00 | 8.00 | Chuỗi lặp hoàn toàn → không có thông tin mới |
| abcd | 2.00 | 6.00 | Chuỗi đa dạng → entropy cao hơn |
| hello world | ≈2.85 | ≈5.15 | Chuỗi thực tế → có lặp và không lặp |
| abcabc | ≈1.58 | ≈6.42 | Lặp lại có quy luật |
| zzzzzzzz | 0.00 | 8.00 | Lặp hoàn toàn → redundancy rất cao |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | Không tồn tại  |
| 7 | 26 | 15 | 15 |
| 4 | 8 | Không tồn tại | Không tồn tại  | 
## 4. Kết luận
Nêu ngắn gọn em học được gì từ bài lab, khó khăn lớn nhất là gì, và điều gì giúp em hiểu rõ hơn về entropy hoặc modulo inverse.
Entropy là thước đo mức độ ngẫu nhiên của dữ liệu.
- Redundancy thể hiện phần thông tin dư thừa trong chuỗi.
- Điều kiện tồn tại nghịch đảo modulo là gcd(a, m) = 1.
Khó khăn lớn nhất là hiểu ý nghĩa toán học của entropy và cách áp dụng thuật toán Euclid mở rộng. Tuy nhiên, thông qua việc chạy thử nhiều test case, em đã hiểu rõ hơn cách hoạt động của các thuật toán này và ứng dụng của chúng trong mật mã học.

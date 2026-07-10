# -t-i-31.-An-to-n-v-t-l-cho-thi-t-b-IoT
An toàn vật lý cho thiết bị IoT
# Đề tài 31 - An toàn vật lý cho thiết bị IoT

## Giới thiệu

Đây là repository phục vụ cho đề tài **"An toàn vật lý cho thiết bị IoT (Physical Security for IoT Devices)"**.

Đề tài tập trung nghiên cứu các rủi ro bảo mật phát sinh khi kẻ tấn công có thể **tiếp cận trực tiếp thiết bị IoT**, từ đó phân tích các điểm yếu trên phần cứng và đề xuất các biện pháp bảo vệ theo các tiêu chuẩn của **OWASP IoT Security Verification Standard (ISVS)** và tài liệu **ESP-IDF Security**.

Việc nghiên cứu chỉ thực hiện ở **mức phân tích, đánh giá và đề xuất giải pháp**, không tiến hành tấn công hoặc can thiệp lên thiết bị thật.

---

## Mục tiêu

- Tìm hiểu các thành phần phần cứng của thiết bị IoT.
- Phân tích các điểm tiếp cận vật lý trên thiết bị.
- Đánh giá các rủi ro khi kẻ tấn công tiếp cận trực tiếp phần cứng.
- Xây dựng bảng phân tích rủi ro (Risk Register).
- Xây dựng Checklist bảo vệ phần cứng theo OWASP ISVS.
- Tìm hiểu Secure Boot và Flash Encryption ở mức khái niệm.
- Đề xuất các giải pháp bảo vệ thiết bị IoT.

---

## Thiết bị nghiên cứu

Thiết bị được lựa chọn để phân tích:

- ESP32 Development Board

Các thành phần chính:

- MCU
- SPI Flash
- UART
- JTAG
- GPIO
- Nguồn cấp
- Reset Circuit
- Wi-Fi/Bluetooth Module

---

## Nội dung thực hiện

Đề tài bao gồm các nội dung chính sau:

- Phân tích cấu trúc phần cứng thiết bị IoT.
- Xác định các điểm có thể bị tấn công vật lý.
- Phân tích tài sản cần bảo vệ.
- Phân tích mối đe dọa và lỗ hổng.
- Đánh giá rủi ro.
- Xây dựng Checklist bảo vệ phần cứng.
- Đề xuất các giải pháp bảo mật.

---

## Cấu trúc Repository
de-tai-31-an-toan-vat-ly-cho-thiet-bi-iot
│
├── README.md
├── report/
├── slides/
├── src/
├── configs/
├── data/
├── results/
└── references/

---

## Tài liệu tham khảo

### OWASP

- OWASP IoT Security Verification Standard (ISVS)
- OWASP Internet of Things Security Guidance (ISTG)

### Espressif

- ESP-IDF Security Features
- ESP32 Technical Reference Manual

---

## Thành viên
 Phan Ngọc Ân

---

## Giảng viên hướng dẫn

...

---

## Lưu ý

- Repository được xây dựng phục vụ mục đích học tập và nghiên cứu.
- Không thực hiện khai thác trên hệ thống hoặc thiết bị thật.
- Mọi hình ảnh, sơ đồ và tài liệu được sử dụng đều nhằm mục đích minh họa và tuân thủ phạm vi học thuật.

# Đề tài 31: An toàn vật lý cho thiết bị IoT (Physical Security for IoT Devices)

# Đề tài 31: An toàn vật lý cho thiết bị IoT (Physical Security for IoT Devices)

## 1. Giới thiệu đề tài

Đề tài nghiên cứu các rủi ro về **an toàn vật lý** đối với thiết bị Internet of Things (IoT), tập trung vào trường hợp kẻ tấn công có thể tiếp cận trực tiếp thiết bị để khai thác các cổng debug, bộ nhớ hoặc thay đổi phần cứng. Nhóm sử dụng **ESP32 Development Board** làm thiết bị tham khảo để phân tích kiến trúc phần cứng, đánh giá rủi ro và đề xuất các biện pháp bảo vệ dựa trên tiêu chuẩn **OWASP IoT Security Verification Standard (ISVS)** và tài liệu của **Espressif**.

---

## 2. Thành viên thực hiện
Họ và tên: Phan Ngọc Ân
MSSV: 231A010546
---

## 3. Mục tiêu

- Phân tích các rủi ro khi thiết bị IoT bị tiếp cận vật lý.
- Tìm hiểu các thành phần phần cứng như UART, JTAG, Flash Memory và Reset.
- Nghiên cứu các cơ chế Secure Boot và Flash Encryption ở mức khái niệm.
- Xây dựng bảng phân tích rủi ro (Risk Register).
- Xây dựng Checklist bảo mật theo OWASP ISVS.
- Đề xuất các biện pháp nâng cao an toàn vật lý cho thiết bị IoT.

---

## 4. Thiết bị nghiên cứu

- ESP32 Development Board

Các thành phần được nghiên cứu:

- MCU
- SPI Flash
- UART
- JTAG
- GPIO
- Nguồn cấp
- Wi-Fi/Bluetooth
- Reset Circuit

---

## 5. Nguồn tài liệu đã sử dụng

### GitHub

- OWASP IoT Security Verification Standard (ISVS)
- https://github.com/OWASP/IoT-Security-Verification-Standard-ISVS

- OWASP IoT Security Testing Guide (ISTG)
- https://github.com/OWASP/owasp-istg

- Espressif ESP-IDF
- https://github.com/espressif/esp-idf

### Tài liệu

- ESP32 Datasheet
- ESP32 Technical Reference Manual
- OWASP IoT Security Verification Standard
- ESP-IDF Programming Guide

---

## 6. Phương pháp thực hiện

- Nghiên cứu tài liệu.
- Phân tích cấu trúc phần cứng ESP32.
- Xác định các điểm có nguy cơ bị tấn công.
- Phân tích rủi ro bằng Risk Register.
- Xây dựng Checklist bảo mật theo OWASP ISVS.
- Đề xuất các biện pháp giảm thiểu rủi ro.

---

## 7. Cách chạy / sử dụng

Đây là đề tài nghiên cứu và phân tích nên **không yêu cầu cài đặt hay chạy chương trình**.

Để xem nội dung đề tài:

1. Mở thư mục `report/` để xem báo cáo.
2. Mở thư mục `slides/` để xem slide trình bày.
3. Mở thư mục `references/` để xem tài liệu tham khảo.
4. Mở thư mục `results/` để xem sơ đồ và hình ảnh minh chứng.

---

## 8. Kết quả đạt được

Sau khi hoàn thành đề tài, nhóm dự kiến đạt được:

- Sơ đồ phần cứng của ESP32.
- Xác định các điểm tiếp cận vật lý.
- Bảng phân tích rủi ro (Risk Register).
- Checklist bảo vệ phần cứng theo OWASP ISVS.
- Phân tích Secure Boot và Flash Encryption.
- Báo cáo và slide trình bày.

---

## 9. Ảnh minh chứng

Các hình ảnh minh chứng được lưu trong thư mục:

```text
results/
├── screenshots/
└── diagrams/
```

Ví dụ:

- Sơ đồ phần cứng ESP32.
- Ảnh repository GitHub.
- Ảnh minh họa các cổng UART/JTAG.
- Bảng Risk Register.
- Checklist bảo mật.

---

## 10. Giới hạn an toàn

Đề tài chỉ phục vụ cho mục đích học tập và nghiên cứu.

Nhóm **không**:

- Tấn công thiết bị thật.
- Tháo rời hoặc làm hỏng thiết bị.
- Khai thác hệ thống khi chưa được cho phép.
- Thực hiện các hành vi vi phạm pháp luật hoặc đạo đức nghề nghiệp.

Toàn bộ nội dung chỉ dừng ở mức phân tích, đánh giá và đề xuất giải pháp nhằm nâng cao an toàn vật lý cho thiết bị IoT.

---

## 11. Cấu trúc Repository

```text
de-tai-31-an-toan-vat-ly-cho-thiet-bi-iot/
│
├── README.md
├── report/
├── slides/
├── src/
├── configs/
├── data/
├── results/
│   ├── diagrams/
│   └── screenshots/
└── references/
```

---

## 12. Giấy phép

Repository được xây dựng phục vụ mục đích học tập và nghiên cứu tại trường đại học. Không sử dụng cho các hoạt động khai thác trái phép hoặc gây ảnh hưởng đến hệ thống, thiết bị của tổ chức và cá nhân khác.

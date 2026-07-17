# Đề tài 31: An toàn vật lý cho thiết bị IoT (Physical Security for IoT Devices)

## 1. Đề cương nghiên cứu

### Lý do chọn đề tài
Các thiết bị IoT ngày càng được sử dụng rộng rãi trong nhiều lĩnh vực như nhà thông minh, y tế, giáo dục và công nghiệp. Tuy nhiên, ngoài các nguy cơ tấn công qua mạng, kẻ tấn công còn có thể tiếp cận trực tiếp thiết bị để khai thác các cổng debug (UART, JTAG), đọc dữ liệu từ bộ nhớ Flash hoặc thay đổi cấu hình. Vì vậy, nhóm lựa chọn đề tài **"An toàn vật lý cho thiết bị IoT"** nhằm nghiên cứu các rủi ro về bảo mật phần cứng, phân tích các điểm yếu trên thiết bị IoT và đề xuất các biện pháp bảo vệ dựa trên tiêu chuẩn **OWASP ISVS** và tài liệu **ESP-IDF**, góp phần nâng cao tính an toàn cho thiết bị trong quá trình triển khai và sử dụng.

### Mục tiêu
* Nhận diện các bề mặt tấn công vật lý phổ biến trên thiết bị IoT.
* Xây dựng ma trận rủi ro vật lý dựa trên các kịch bản tấn công thực tế.
* Thiết lập bảng checklist 20 tiêu chí kiểm duyệt an toàn vật lý theo chuẩn OWASP ISVS.

### Phạm vi nghiên cứu
### 3. Phạm vi nghiên cứu
Đề tài tập trung nghiên cứu an toàn vật lý cho thiết bị **ESP32 Development Board**, phân tích các nguy cơ khi kẻ tấn công có thể tiếp cận trực tiếp phần cứng như cổng UART, JTAG và bộ nhớ Flash. Nội dung nghiên cứu chỉ dừng ở mức phân tích, đánh giá rủi ro và đề xuất các biện pháp bảo vệ dựa trên tài liệu và tiêu chuẩn bảo mật. Nhóm không thực hiện tháo rời, can thiệp vào thiết bị thật hoặc tiến hành bất kỳ hoạt động khai thác trái phép nào đối với hệ thống hay thiết bị thực tế.

### Sản phẩm dự kiến
Báo cáo nghiên cứu về an toàn vật lý cho thiết bị IoT.
Sơ đồ phần cứng của thiết bị ESP32.
Bảng phân tích rủi ro (Risk Register).
Checklist bảo mật phần cứng theo tiêu chuẩn OWASP ISVS.
Nội dung nghiên cứu về Secure Boot và Flash Encryption.
Repository GitHub lưu trữ mã nguồn, tài liệu và hình ảnh minh chứng.
---

## 2. Tài liệu tham khảo bắt buộc
1. **OWASP IoT Security Verification Standard (ISVS) - V2: Physical/Hardware Security**  
   URL: [https://github.com/OWASP/IoT-Security-Verification-Standard-ISVS](https://github.com/OWASP/IoT-Security-Verification-Standard-ISVS)  
   *(Tài liệu cốt lõi dùng để xây dựng checklist tiêu chí bảo mật phần cứng)*
2. **OWASP Internet of Things Project**  
   URL: [https://github.com/OWASP/www-project-internet-of-things](https://github.com/OWASP/www-project-internet-of-things)  
   *(Tham chiếu danh mục Top 10 IoT Vulnerabilities liên quan đến vật lý)*
3. **Espressif ESP-IDF Security Features (Flash Encryption & Secure Boot)**  
   URL: [https://github.com/espressif/esp-idf](https://github.com/espressif/esp-idf)  
   *(Tài liệu kỹ thuật về chống trích xuất firmware từ chip Flash)*
4. **NIST SP 800-193: Platform Firmware Resiliency Guidelines**  
   *(Hướng dẫn của NIST về bảo vệ và phục hồi firmware trước các tấn công vật lý)*
5. **IoT Security Foundation (IoTSF) - Best Practice Guides**  
   *(Hướng dẫn thực hành an toàn phần cứng cho nhà sản xuất thiết bị)*

---

## 3. Phương pháp & Công cụ thực hiện

#### 1. Phương pháp tiếp cận (Methodology)

* **Mô hình hóa mối đe dọa vật lý (Physical Threat Modeling):** Phân tích bề mặt tấn công phần cứng (Physical Attack Surface) từ ngoài vào trong, bao gồm vỏ bảo vệ, các cổng kết nối hở, và các đường truyền tín hiệu trên bo mạch.


* **Đánh giá tuân thủ (Compliance Assessment):** Áp dụng phân mục **V2: Physical/Hardware Security Verification Requirements** trong tiêu chuẩn **OWASP ISVS (IoT Security Verification Standard)** để làm thước đo đánh giá độ an toàn của thiết bị.


#### 2. Công cụ và Đối tượng Lab/Case Study dự kiến

Do đặc thù của an toàn vật lý, đề tài sẽ tập trung phân tích trên một Case Study thiết bị phần cứng cụ thể (Ví dụ: thiết bị IoT SoC dựa trên chip **ESP32** hoặc **Raspberry Pi Pi-Tail**) thông qua các công cụ:

* **Xác định giao tiếp phần cứng (Hardware Interfacing):** Sử dụng sơ đồ Pinout để định vị các cổng debug nhạy cảm chưa được vô hiệu hóa như **JTAG**, **UART (chân TX/RX)**.


* **Công cụ phân tích logic/Giao tiếp nối tiếp:** Mô phỏng/Sử dụng công cụ như **Baudrate.py**, **Screen/Minicom** hoặc phần cứng **Ch340/FTDI USB-to-UART** để kiểm tra xem thiết bị có xuất log hệ thống (Bootloader log) hoặc cung cấp quyền truy cập Shell không mã hóa qua cổng nối tiếp hay không.
* **Cơ chế mã hóa phần cứng (Hardware-based Crypto):** Nghiên cứu tính năng **Flash Encryption** và **Secure Boot** của vi điều khiển để đưa ra phương án chống trích xuất firmware trực tiếp từ chip Flash ROM.


---

### 💡 Hướng dẫn điền vào bảng kiểm tiến độ của bạn:

* **Trạng thái:** ☑ **Xong**
* **Ghi chú/Minh chứng:** *“Đã xác định rõ phương pháp phân tích bề mặt tấn công vật lý dựa trên chuẩn OWASP ISVS và công cụ kiểm thử cổng giao tiếp phần cứng (UART/JTAG/Flash Encryption), chi tiết đã cập nhật tại mục 3 trong file README.md.”*
---


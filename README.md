HW4
===
1.首先用 $git clone https://github.com/hun0905/HW4.git    將所需的檔案抓下來<br> 
2.輸入$cd HW4/4_1
3.使用$ sudo mbed compile --source . --source ~/ee2405/mbed-os-build/ -m B_L4S5I_IOT01A -t GCC_ARM -f進行編譯
4.將車子至於接近停車格的位置背對停車格。
5.輸入$cd Python_PRC
6.輸入$sudo python3 Python_PRC.py /dev/ttyUSB0
7.接著可以開始操控車子，在停車格附近按下p會要求輸入d1,d2和方位，輸入後開始執行倒退停車
8.第二題使用從openmv/pythonHW4_2 寫進openmv
9.進入4_2的資料夾
10.使用$ sudo mbed compile --source . --source ~/ee2405/mbed-os-build/ -m B_L4S5I_IOT01A -t GCC_ARM -f進行編譯
11.將車子放於附近有一條直線的地面上並且沒有太多障礙或線條。
12.輸入$cd Python_PRC
13.輸入$sudo python3 Python_PRC.py /dev/ttyUSB0
14.可以開始操控車子，當車接近直線時按L
15.車子會偵測直線並調整方向然後沿著直線走下去。
16.第三題則使用openmv裡的main.py
17.進入4_3的資料夾
18.使用$ sudo mbed compile --source . --source ~/ee2405/mbed-os-build/ -m B_L4S5I_IOT01A -t GCC_ARM -f進行編譯
19.將車子置於可以看到AprilTag，不要離其過遠的地方
20.車子會自對偵測AprilTag然後調整方向，使正面向著AprilTag並朝其行駛。 

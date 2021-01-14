# *minisys*-app

Minisys 顶层应用程序。

## driver

便于调用各接口部件的驱动程序。

## project

应用项目。

## syscall

系统调用。

## util

实用代码段。

## 附：板上器件端口地址

| 接口部件        | 基地址     |
| --------------- | ---------- |
| 8 位 7 段数码管 | 0xFFFFFC00 |
| 4×4 键盘        | 0xFFFFFC10 |
| 定时器          | 0xFFFFFC20 |
| PWM             | 0xFFFFFC30 |
| UART            | 0xFFFFFC40 |
| 看门狗          | 0xFFFFFC50 |
| LED             | 0xFFFFFC60 |
| 拨码开关        | 0xFFFFFC70 |
| 蜂鸣器          | 0xFFFFFD10 |
| 麦克风          | 0xFFFFFD20 |

# *minisys*-app

Minisys 顶层应用程序。

## driver

便于调用各接口部件的驱动程序。

## project

应用项目。

- countdown：倒数计时
- div-display：按键值显示到按键值除以4的7seg
- seuyyds：可自定义倒计时，最后还会叫，还会显示好康的
- switch-direct：倒计时完成后将拨码开关直通到7seg
- multiply2：把当前按的值乘以2显示到7seg（人能看的）
- Minisys1A1-fix：助教测试程序

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

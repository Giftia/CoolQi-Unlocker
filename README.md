[![HitCount](http://hits.dwyl.io/Giftia/CoolQi-Unlocker.svg)](http://hits.dwyl.io/Giftia/CoolQi-Unlocker)
# CoolQi-Unlocker
## 酷骑单车蓝牙锁解锁程序，实现上电单次解锁。
### 硬件说明：需要自行购买烧录器如： SmartRF04EB 、 CCDebugger 之类（我使用廉价好用的 SmartRF04EB），并参考 www.waveshare.net/txt/CC-Debugger-Interface.htm(http://www.waveshare.net/txt/CC-Debugger-Interface.htm) 进行接线，连接： GND、RESET、DEBUG_DD、DEBUG_DC、3.3V 这五根线。切记必须拔下电池，否则烧坏烧录器与板子！我已经烧了两套了，血的教训QAQ。接线示意如图：
  ![image](https://github.com/Giftia/CoolQi-Unlocker/blob/master/jpg.jpg)
### 烧写说明：需要自行安装 IAR 8051 与 cc254x蓝牙协议栈，建立工程设置为 cc2541 环境，并使用 SmartRF Flash Programmer 解锁固件并烧录即可，网上有教程，此处不赘述。
### 酷骑蓝牙锁共有四代，本程序理论通用，但只在板号： BL-2B_V1.0 上经过测试。
### 实现蓝牙解锁思路是在蓝牙协议栈例程 SimpleBLEPeripheral 的基础上修改特征值 SIMPLEPROFILE_CHAR1 的操作，如当 newValue == 0x00 则 Unlock() 实现解锁，具体不再阐述。
### 转载请保留来源，虽然简单，学习不易，谢谢理解。

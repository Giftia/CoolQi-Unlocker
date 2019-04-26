#include <ioCC2541.h>
#define BEEE_GPIO P1_0          //定义蜂鸣器引脚P1_0
#define DIANJI_GPIO P1_1        //定义电机引脚P1_1

void Delay(unsigned int x)
{
  unsigned int i, j;
  for (i = 0; i < x; i++) for (j = 0; j < 536; j++);    //回参单位ms
}

void MEME(unsigned int x, unsigned int y, unsigned int z)       //可自定义蜂鸣器
{
  BEEE_GPIO = 0;
    Delay(x);
  BEEE_GPIO = 1;
    Delay(y);
  BEEE_GPIO = 0;
    Delay(z);
  BEEE_GPIO = 1;
}

void UnLock()
{
  DIANJI_GPIO = 1;      //电机转动
    Delay(2070);        //约2s转一圈，测试多次2070较为准确
  DIANJI_GPIO = 0;      //电机停止转动
}

int main(void)
{
  DIANJI_GPIO = 0;      //初始化电机
  P1SEL &= ~0X03;
  P1DIR |= 0X03;
    MEME(100, 200, 300);//蜂鸣器默认响0.1s间隔0.2s再响0.3s
    UnLock();
  return 0;
}

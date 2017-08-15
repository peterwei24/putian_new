
#ifndef  __PT1000_FILTER_H__
#define __PT1000_FILTER_H__


//******************************************************************************
//功能描述： 设置采集到电压值
//******************************************************************************

void  pt1000_set_vol(unsigned int vol);


//******************************************************************************
//功能描述： 获取平均电压，10次采集，不够10次返回-1
//******************************************************************************
 int pt1000_get_aver_vol();

#endif

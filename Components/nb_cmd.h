/* *Copyright(C), Haijie Lee. 2019. AllRightsReserved.
	*FileName: NB模组命令 模块头文件.
	*Author:  Haijie Lee.
	*Version:  1.5.
	*Date:  2019.01.22.
	*Description:  用户可通过调用此文件的接口函数完成NB模组的命令。
	*Others:  用户不应随意修改此文件，除非你知道自己在做什么。
*/
#ifndef IOT_API__COMPONENT__NB_CMD_H
#define IOT_API__COMPONENT__NB_CMD_H

#include <stdint.h>



// ——————————————    接口定义    —————————————— //


// ——————————————    接口函数    —————————————— //

/* 功能：初始化NB模组，使其在可通讯状态。
	说明：无。
	参数：@*output_imei: 读出IMEI的缓冲区指针；
				@*output_imsi: 读出IMSI的缓冲区指针。
	返回值：成功返回 0，失败返回错误码。
*/
uint8_t Init_NB(char *output_imei, char *output_imsi );


/* 功能：检查当前的网络状态是否允许通信。
	说明：无。
	参数：无。
	返回值：成功返回 0，失败返回错误码。
*/
uint8_t Check_Network(void);


/* 功能：读出IMEI。
	说明：无。
	参数：@destination: 读出参数的缓冲区指针。
	返回值：成功返回 0，失败返回错误码。
*/
uint8_t Read_IMEI( char *destination );


/* 功能：读出IMSI。
	说明：无。
	参数：@destination: 读出参数的缓冲区指针。
	返回值：成功返回 0，失败返回错误码。
*/
uint8_t Read_IMSI( char *destination );


/* 功能：读出NB模组 无线信号质量。
	说明：无。
	参数：无。
	返回值：成功返回 0，失败返回错误码。
*/
uint8_t Read_SingalQuality( char *destination );


/* 功能：连接到IOT平台。
	说明：无。
	参数：@*obj_server: 读出服务器地址的缓冲区指针(当前版本中次参数无效)。
			@*imei: 读出IMEI的缓冲区指针
	返回值：成功返回 0，失败返回错误码。
*/
uint8_t Connnect_IOT_Platfrom( const char *imei, char *obj_server );


/* 功能：断开与IOT平台的连接。
	说明：无。
	参数：无。
	返回值：成功返回 0，失败返回错误码。
*/
uint8_t Disconnnect_IOT_Platfrom(void);


/* 功能：检查NB命令是否发送错误。
	说明：无。
	参数：无。
	返回值：成功返回 0，失败返回错误码。
*/


// ——————————————   END   —————————————— //

#endif

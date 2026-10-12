//
//  const.h
//  Protocol
//
//  Created by danlypro on 2022/4/19.
//

#ifndef common_h
#define common_h

//************************命令字************************
#define _GizWifiSDKCMD_SOFTAP_CONFIG_REQ             (0x0001)
#define _GizWifiSDKCMD_SOFTAP_CONFIG_RESP            (0x0002)
#define _GizWifiSDKCMD_DISCOVER_DEVICE_REQ           (0x0003)
#define _GizWifiSDKCMD_DISCOVER_DEVICE_RESP          (0x0004)
#define _GizWifiSDKCMD_ONLINE_NOTIFY                 (0x0005)
#define _GizWifiSDKCMD_BIND_DEVICE_REQ               (0x0006)
#define _GizWifiSDKCMD_BIND_DEVICE_RESP              (0x0007)
#define _GizWifiSDKCMD_LOGIN_DEVICE_REQ              (0x0008)
#define _GizWifiSDKCMD_LOGIN_DEVICE_RESP             (0x0009)
#define _GizWifiSDKCMD_READ_DEVICE_INFO_REQ          (0x0013)
#define _GizWifiSDKCMD_READ_DEVICE_INFO_RESP         (0x0014)
#define _GizWifiSDKCMD_DEVICE_KEEPALIVE_REQ          (0x0015)
#define _GizWifiSDKCMD_DEVICE_KEEPALIVE_RESP         (0x0016)
#define _GizWifiSDKCMD_EXIT_PRODUCT_TEST_MODE_REQ    (0x0017)
#define _GizWifiSDKCMD_EXIT_PRODUCT_TEST_MODE_RESP   (0x0018)
#define _GizWifiSDKCMD_CONFIG_NOTIFY                 (0x0019)
#define _GizWifiSDKCMD_GET_DEVICE_UPDATE_STATUS_REQ  (0x001E)
#define _GizWifiSDKCMD_GET_DEVICE_UPDATE_STATUS_RESP (0x001F)
#define _GizWifiSDKCMD_UPDATE_DEVICE_REQ             (0x0020)
#define _GizWifiSDKCMD_UPDATE_DEVICE_RESP            (0x0021)

#define _GizWifiSDKCMD_TRANS_DEVICE_LOG              (0x0012)
#define _GizWifiSDKCMD_TRANS_BUSINESS                (0x0090)
#define _GizWifiSDKCMD_RECV_BUSINESS                 (0x0091)
#define _GizWifiSDKCMD_ONLINE_STATUS_CHANGED         (0x0092)
#define _GizWifiSDKCMD_TRANS_BUSINESS_REQ            (0x0093)
#define _GizWifiSDKCMD_TRANS_BUSINESS_RESP           (0x0094)
#define _GizWifiSDKCMD_BIND_STATUS_CHANGED           (0x010D)
#define _GizWifiSDKCMD_LOG_ENABLED_STATUS_CHANGED    (0x0111)

#define _GizWifi_PROTOCOL_VERSION                    (0x00000003)
#define _GizWifi_ENCRYPT_PROTOCOL_VERSION            (0x00000004)

//************************常用宏************************
#define _SSID_BUF_LENGHT                             (32)
#define _MD5_BUF_LENGTH              (32)
#define _MAC_BUF_LENGTH                              (32)
#define _DID_BUF_LENGTH                              (22)
#define _PASSCODE_BUF_LENGTH                         (32)
#define _PRODUCTKEY_BUF_LENGTH                       (32)
#define _BT_MESHID_BUF_LENGTH        (256)
#define _DOMAIN_BUF_LENGTH                           (128)
#define _HARDWARE_VERSION_LENGTH                     (8)
#define _SOFTWARE_VERSION_LENGTH                     (8)
#define _MCU_HARDWARE_VERSION_LENGTH                 (8)
#define _MCU_SOFTWARE_VERSION_LENGTH                 (8)
#define _WIFI_FIRMWARE_VERSION_LENGTH                (36)
#define _WIFI_FIRMWARE_ID_LENGTH                     (8)
#define _PROTOCOL_VERSION_LENGTH                     (16)
#define _BUSINESS_PROTOCOL_VERSION_LENGTH            (8)

#define _DEVICE_SUPPORT_OTA_PROTOCOL_MIN_VERSION     "4.1.2"

#define _DATAPOINT_TYPE_WRITABLE                 "status_writable" //可读写
#define _DATAPOINT_TYPE_READONLY                 "status_readonly" //只读
#define _DATAPOINT_TYPE_ALERT                    "alert" //报警
#define _DATAPOINT_TYPE_FAULT                    "fault" //故障

#define _DATAPOINT_DATATYPE_BOOL                 "bool" //布尔型
#define _DATAPOINT_DATATYPE_ENUM                 "enum" //枚举型
#define _DATAPOINT_DATATYPE_UINT8                "uint8" //8 bits 整型
#define _DATAPOINT_DATATYPE_UINT16               "uint16" //16 bits 整型
#define _DATAPOINT_DATATYPE_UINT32               "uint32" //32 bits 整型
#define _DATAPOINT_DATATYPE_BINARY               "binary" //二进制数据


//************************错误码************************
#define _GIZ_SDK_SUCCESS                                 (0)  //操作成功
#define _GIZ_SDK_PARAM_INVALID                      (5001) //参数错误
#define _GIZ_SDK_PARAM_FORM_INVALID            (5002) //json格式错误
#define _GIZ_SDK_MEMORY_MALLOC_FAILED        (5003) //内存分配失败
#define _GIZ_SDK_BASE64_ENCODE_FAILED         (5004) //base64编码错误
#define _GIZ_SDK_DATA_PARSE_FAILED         (5005) //数据包解析失败
#define _GIZ_SDK_CMD_NOT_EXIST                (5006) //命令字不存在
#define _GIZ_SDK_JSON_OBJECT_CREATE_FAILED               (5007) //Json对象创建失败
#define _GIZ_SDK_DEVICE_PASSCODE_INVALID           (5008) //设备PASSCODE无效
#define _GIZ_SDK_JSON_PARSE_FAILED               (5009) //Json解析失败
#define _GIZ_SDK_OPEN_PRODUCT_FILE_FAILED           (5010) //打开产品配置文件失败
#define _GIZ_SDK_READ_PRODUCT_FILE_FAILED           (5011) //读产品配置文件失败
#define _GIZ_SITE_DATAPOINTS_NOT_DEFINED           (5012) //数据点未定义
#define _GIZ_SITE_DATAPOINTS_NOT_MALFORME                (5013) //数据点异常
#define _GIZ_SDK_DEVICE_CONTROL_WITH_INVALID_COMMAND     (5014) //设备控制指令中包含无效指令
#define _GIZ_SDK_DEVICE_CONTROL_NOT_WRITABLE_COMMAND     (5015) //设备控制指令中包含不可写指令
#define _GIZ_SDK_DEVICE_CONTROL_VALUE_OUT_OF_RANGE       (5016) //设备控制指令参数值不在有效范围内
#define _GIZ_SDK_DEVICE_CONTROL_VALUE_TYPE_ERROR         (5017) //设备控制指令参数类型错误
#define _GIZ_SDK__DATAPOINT_PARSE_FAILED                  (5018) //配置文件解析失败
#define _GIZ_SDK__DATAPOINT_FILE_IS_EMPTY                  (5019) //配置文件为空
#define _GIZ_SDK_BASE64_DECODE_FAILED         (5020) //base64解码错误




#endif /* common_h */

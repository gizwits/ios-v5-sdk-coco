//
//  GizwitsParser.h
//  GizwitsParser
//
//  Created by danlypro on 2022/5/7.
//

#import <Foundation/Foundation.h>
#import "common.h"


@interface _GizwitsParser : NSObject

/**
 * 获取SDK的版本号
 */
+ (NSString *)getVersion;

/**
 * @brief 对传入的json字符串数据进行组包
 * @param[in] jsonData 要组包的json字符串
 * @param[out] outData 组完的包数据的地址， 使用完成需要手动释放， outData=NULL 表示组包失败
 * @param[out] outLength 组完包的长度的地址，outLength = 0 表示组包失败
 * @param[in,out]  errorCode 返回组包错误码的地址, errorCode = 0 表示组包成功
 */
+ (void)packData:(const char *)jsonData outData:(unsigned char **)outData outLength:(int *)outLength errorCode:(int *)errorCode;

/**
 * @brief 对传入的数据做解包操作
 * @param[in] data 传入从设备和云端获取的数据包
 * @param[in] dataLength 传入data数据包的长度
 * @param[in,out] errorCode 返回解包错误码的地址， errorCode = 0 表示解包成功
 * @return 返回解包完成的JSON字符串, 返回NULL表示解包失败
 * @see 返回的字符串是手动申请的内存空间，使用完成需要手动释放内存
 */
+ (char *)unpackData: (const unsigned char *)data dataLength: (int)dataLength errorCode:(int *)errorCode;


/**
 * @brief 对传入的数据点数据进行组包
 * @param[in] jsonData 数据点的json字符串集合  格式: { "name": value }
 * @param[in] configurationFileContent 对应设备的配置文件路径
 * @param[out] outData 组完的包数据的地址， 使用完成需要手动释放， outData=NULL 表示组包失败
 * @param[out] outLength 组完包的长度的地址，outLength = 0 表示组包失败
 * @param[in,out] errorCode 返回组包错误码
 */
+ (void)dataPointPack: (const char *)jsonData configurationFileContent: (const char *)configurationFileContent outData: (unsigned char **)outData outLength: (int *)outLength errorCode:(int *)errorCode;

/**
 * @brief 对传入的数据点数据进行解包
 * @param[in] data 传入从设备和云端获取的数据包
 * @param[in] dataLength 传入data数据包的长度
 * @param[in] configurationFileContent 对应设备的配置文件路径
 * @param[in,out] errorCode 返回解包错误码
 * @return 返回解包完成的数据点json集合
 * @see 组包失败，返回值返回NULL； 若返回值不为空使用完成需要手动释放内存
 */
+ (char *)dataPointUnPack: (const unsigned char *)data dataLength: (int)dataLength configurationFileContent: (const char *)configurationFileContent errorCode: (int *)errorCode;

@end


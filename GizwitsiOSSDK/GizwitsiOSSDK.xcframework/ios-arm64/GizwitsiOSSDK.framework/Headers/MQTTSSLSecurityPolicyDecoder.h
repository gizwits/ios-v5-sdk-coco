//
// MQTTSSLSecurityPolicyDecoder.h
// MQTTClient.framework
// 
// Copyright © 2013-2017, Christoph Krey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "_MQTTSSLSecurityPolicy.h"
#import "_MQTTCFSocketDecoder.h"

@interface MQTTSSLSecurityPolicyDecoder : _MQTTCFSocketDecoder

@property(strong, nonatomic) _MQTTSSLSecurityPolicy *securityPolicy;
@property(strong, nonatomic) NSString *securityDomain;

@end



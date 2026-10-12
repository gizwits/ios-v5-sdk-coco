//
// MQTTSSLSecurityPolicyEncoder.h
// MQTTClient.framework
//
// Copyright © 2013-2017, Christoph Krey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "_MQTTSSLSecurityPolicy.h"
#import "_MQTTCFSocketEncoder.h"

@interface MQTTSSLSecurityPolicyEncoder : _MQTTCFSocketEncoder

@property(strong, nonatomic) _MQTTSSLSecurityPolicy *securityPolicy;
@property(strong, nonatomic) NSString *securityDomain;

@end


//
//  MQTTInMemoryPersistence.h
//  MQTTClient
//
//  Created by Christoph Krey on 22.03.15.
//  Copyright © 2015-2017 Christoph Krey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "_MQTTPersistence.h"

@interface MQTTInMemoryPersistence : NSObject <_MQTTPersistence>
@end

@interface MQTTInMemoryFlow : NSObject <_MQTTFlow>
@end

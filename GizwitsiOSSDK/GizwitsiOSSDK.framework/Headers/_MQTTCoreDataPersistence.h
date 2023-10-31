//
//  MQTTCoreDataPersistence.h
//  MQTTClient
//
//  Created by Christoph Krey on 22.03.15.
//  Copyright © 2015-2017 Christoph Krey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "_MQTTPersistence.h"

@interface _MQTTCoreDataPersistence : NSObject <_MQTTPersistence>

@end

@interface _MQTTFlow : NSManagedObject <_MQTTFlow>
@end

@interface _MQTTCoreDataFlow : NSObject <_MQTTFlow>
@end

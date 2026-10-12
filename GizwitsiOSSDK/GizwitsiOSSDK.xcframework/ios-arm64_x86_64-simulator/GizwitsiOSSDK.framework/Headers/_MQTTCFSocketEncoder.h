//
// MQTTCFSocketEncoder.h
// MQTTClient.framework
//
// Copyright © 2013-2017, Christoph Krey. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, _MQTTCFSocketEncoderState) {
    MQTTCFSocketEncoderStateInitializing,
    MQTTCFSocketEncoderStateReady,
    MQTTCFSocketEncoderStateError
};

@class _MQTTCFSocketEncoder;

@protocol _MQTTCFSocketEncoderDelegate <NSObject>

- (void)encoderDidOpen:(_MQTTCFSocketEncoder *)sender;
- (void)encoder:(_MQTTCFSocketEncoder *)sender didFailWithError:(NSError *)error;
- (void)encoderdidClose:(_MQTTCFSocketEncoder *)sender;

@end

@interface _MQTTCFSocketEncoder : NSObject <NSStreamDelegate>

@property (nonatomic) _MQTTCFSocketEncoderState state;
@property (strong, nonatomic) NSError *error;
@property (strong, nonatomic) NSOutputStream *stream;
@property (weak, nonatomic ) id<_MQTTCFSocketEncoderDelegate> delegate;

- (void)open;
- (void)close;
- (BOOL)send:(NSData *)data;

@end


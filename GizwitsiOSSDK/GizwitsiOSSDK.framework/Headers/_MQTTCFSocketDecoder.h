//
// MQTTCFSocketDecoder.h
// MQTTClient.framework
// 
// Copyright © 2013-2017, Christoph Krey. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, _MQTTCFSocketDecoderState) {
    MQTTCFSocketDecoderStateInitializing,
    MQTTCFSocketDecoderStateReady,
    MQTTCFSocketDecoderStateError
};

@class _MQTTCFSocketDecoder;

@protocol _MQTTCFSocketDecoderDelegate <NSObject>

- (void)decoder:(_MQTTCFSocketDecoder *)sender didReceiveMessage:(NSData *)data;
- (void)decoderDidOpen:(_MQTTCFSocketDecoder *)sender;
- (void)decoder:(_MQTTCFSocketDecoder *)sender didFailWithError:(NSError *)error;
- (void)decoderdidClose:(_MQTTCFSocketDecoder *)sender;

@end
/// @nodoc
@interface _MQTTCFSocketDecoder : NSObject <NSStreamDelegate>

@property (nonatomic) _MQTTCFSocketDecoderState state;
@property (strong, nonatomic) NSError *error;
@property (strong, nonatomic) NSInputStream *stream;
@property (weak, nonatomic ) id<_MQTTCFSocketDecoderDelegate> delegate;

- (void)open;
- (void)close;

@end



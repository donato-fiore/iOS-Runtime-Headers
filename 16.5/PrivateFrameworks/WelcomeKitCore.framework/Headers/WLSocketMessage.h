// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLSOCKETMESSAGE_H
#define WLSOCKETMESSAGE_H


#import <Foundation/Foundation.h>


@interface WLSocketMessage : NSObject

@property (nonatomic) NSUInteger type; // ivar: _type


+(id)messageWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 ;


@end


#endif
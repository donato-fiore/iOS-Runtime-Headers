// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGECHANNEL_H
#define WIFIUSAGECHANNEL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WiFiUsageChannel : NSObject <NSCopying>



@property (nonatomic) int band; // ivar: _band
@property (nonatomic) NSInteger channel; // ivar: _channel
@property (nonatomic) NSUInteger channelFlags; // ivar: _channelFlags
@property (nonatomic) NSInteger channelWidth; // ivar: _channelWidth
@property (nonatomic) BOOL isDFSChannel; // ivar: _isDFSChannel


+(id)channelWithBssDetails:(id)arg0 andChannelInfoList:(id)arg1 ;
-(BOOL)dfsChannel:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToChannel:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVPLAYBACKLEASERESPONSE_H
#define SSVPLAYBACKLEASERESPONSE_H

@class NSData;
@protocol NSCopying;


#import "SSVPlaybackResponse.h"

@interface SSVPlaybackLeaseResponse : SSVPlaybackResponse <NSCopying>



@property (nonatomic) NSUInteger KDMovieIdentifier; // ivar: _kdMovieIdentifier
@property (copy, nonatomic) NSData *certificateData; // ivar: _certificateData
@property (readonly, nonatomic) CGFloat leaseDuration;
@property (readonly, copy, nonatomic) NSData *leaseInfoData;
@property (readonly, nonatomic, getter=isOfflineSlotAvailable) BOOL offlineSlotAvailable;
@property (readonly, copy, nonatomic) NSData *subscriptionKeyBagData;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)itemForItemIdentifier:(id)arg0 ;


@end


#endif
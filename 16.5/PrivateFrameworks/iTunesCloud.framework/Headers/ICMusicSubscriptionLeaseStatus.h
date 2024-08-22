// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUSICSUBSCRIPTIONLEASESTATUS_H
#define ICMUSICSUBSCRIPTIONLEASESTATUS_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICStoreDialogResponse.h"

@interface ICMusicSubscriptionLeaseStatus : NSObject <NSCopying>



@property (nonatomic) BOOL hasInflightLeaseAcquisition; // ivar: _hasInflightLeaseAcquisition
@property (nonatomic) BOOL hasOfflinePlaybackKeys; // ivar: _hasOfflinePlaybackKeys
@property (nonatomic) BOOL hasOnlinePlaybackKeys; // ivar: _hasOnlinePlaybackKeys
@property (nonatomic) BOOL hasPendingLeaseAcquisition; // ivar: _hasPendingLeaseAcquisition
@property (nonatomic) NSInteger leaseState; // ivar: _leaseState
@property (nonatomic) BOOL shouldPlaybackRequireOnlineKeys; // ivar: _shouldPlaybackRequireOnlineKeys
@property (copy, nonatomic) ICStoreDialogResponse *stateReasonDialog; // ivar: _stateReasonDialog
@property (copy, nonatomic) NSDictionary *stateReasonDialogMetricsDictionary; // ivar: _stateReasonDialogMetricsDictionary
@property (nonatomic, getter=isTakenDueToLeasePrevention) BOOL takenDueToLeasePrevention; // ivar: _takenDueToLeasePrevention


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif
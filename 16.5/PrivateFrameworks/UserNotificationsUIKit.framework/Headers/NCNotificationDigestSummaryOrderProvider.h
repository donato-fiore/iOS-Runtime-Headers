// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONDIGESTSUMMARYORDERPROVIDER_H
#define NCNOTIFICATIONDIGESTSUMMARYORDERPROVIDER_H

@class ATXUserNotificationDigest;


#import "NCNotificationSummaryOrderProvider.h"

@interface NCNotificationDigestSummaryOrderProvider : NCNotificationSummaryOrderProvider

@property (retain, nonatomic) ATXUserNotificationDigest *userNotificationDigest; // ivar: _userNotificationDigest


-(id)atxUUID;
-(void)atxLogSummaryPlatterExpandedIsUpcoming:(BOOL)arg0 ;
-(void)atxLogSummaryPlatterShownIsUpcoming:(BOOL)arg0 ;
-(void)generateDigestForATXUserNotificationArrays:(id)arg0 withCompletionBlock:(id)arg1 ;


@end


#endif
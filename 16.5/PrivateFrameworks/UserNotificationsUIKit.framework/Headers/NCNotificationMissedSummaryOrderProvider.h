// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONMISSEDSUMMARYORDERPROVIDER_H
#define NCNOTIFICATIONMISSEDSUMMARYORDERPROVIDER_H

@class ATXMissedNotificationRanking;


#import "NCNotificationSummaryOrderProvider.h"
#import "NCNotificationSummaryContentProvider.h"
#import "NCNotificationSummaryPlatterView.h"

@interface NCNotificationMissedSummaryOrderProvider : NCNotificationSummaryOrderProvider

@property (retain, nonatomic) ATXMissedNotificationRanking *missedNotificationRanking; // ivar: _missedNotificationRanking
@property (retain, nonatomic) NCNotificationSummaryContentProvider *summaryContentProvider; // ivar: _summaryContentProvider
@property (retain, nonatomic) NCNotificationSummaryPlatterView *summaryPlatterView; // ivar: _summaryPlatterView


-(BOOL)adjustForContentSizeCategoryChange;
-(id)atxUUID;
-(id)leadingSummaryPlatterViewConfigureIfNecessary;
-(void)_updateSummaryContentProvider;
-(void)_updateSummaryPlatterView;
-(void)atxLogRemoval;
-(void)atxLogSummaryPlatterExpandedIsUpcoming:(BOOL)arg0 ;
-(void)atxLogSummaryPlatterShownIsUpcoming:(BOOL)arg0 ;
-(void)generateDigestForATXUserNotificationArrays:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)updateLeadingSummaryPlatterView;


@end


#endif
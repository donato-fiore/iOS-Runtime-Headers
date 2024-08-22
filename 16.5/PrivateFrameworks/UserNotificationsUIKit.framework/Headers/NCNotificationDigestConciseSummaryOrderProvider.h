// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONDIGESTCONCISESUMMARYORDERPROVIDER_H
#define NCNOTIFICATIONDIGESTCONCISESUMMARYORDERPROVIDER_H



#import "NCNotificationDigestSummaryOrderProvider.h"
#import "NCNotificationSummaryContentProvider.h"
#import "NCNotificationSummaryPlatterView.h"

@interface NCNotificationDigestConciseSummaryOrderProvider : NCNotificationDigestSummaryOrderProvider

@property (retain, nonatomic) NCNotificationSummaryContentProvider *summaryContentProvider; // ivar: _summaryContentProvider
@property (retain, nonatomic) NCNotificationSummaryPlatterView *summaryPlatterView; // ivar: _summaryPlatterView


-(BOOL)adjustForContentSizeCategoryChange;
-(id)leadingSummaryPlatterViewConfigureIfNecessary;
-(void)_updateSummaryContentProvider;
-(void)_updateSummaryPlatterView;
-(void)updateLeadingSummaryPlatterView;


@end


#endif
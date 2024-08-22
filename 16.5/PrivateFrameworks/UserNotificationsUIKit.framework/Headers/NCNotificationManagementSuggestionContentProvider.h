// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONMANAGEMENTSUGGESTIONCONTENTPROVIDER_H
#define NCNOTIFICATIONMANAGEMENTSUGGESTIONCONTENTPROVIDER_H

@class NSArray, NSString, UIColor;
@protocol NCSuggestionContentProviding, NCNotificationManagementSuggestionDelegate;


#import "NCNotificationManagementContentProvider.h"

@interface NCNotificationManagementSuggestionContentProvider : NCNotificationManagementContentProvider <NCSuggestionContentProviding>



@property (readonly, copy, nonatomic) NSArray *auxiliaryOptionActions;
@property (copy, nonatomic) NSString *auxiliaryOptionsSummaryText; // ivar: _auxiliaryOptionsSummaryText
@property (readonly, copy, nonatomic) UIColor *auxiliaryOptionsTextColor;
@property (nonatomic) BOOL auxiliaryOptionsVisible; // ivar: _auxiliaryOptionsVisible
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<NCNotificationManagementSuggestionDelegate> *suggestionDelegate; // ivar: _suggestionDelegate
@property (readonly) Class superclass;


-(id)initWithNotificationRequest:(id)arg0 bundleDisplayName:(id)arg1 managementDelegate:(id)arg2 suggestionDelegate:(id)arg3 ;


@end


#endif
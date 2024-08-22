// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONMANAGEMENTPROMOTINGSUGGESTIONCONTENTPROVIDER_H
#define NCNOTIFICATIONMANAGEMENTPROMOTINGSUGGESTIONCONTENTPROVIDER_H



#import "NCNotificationManagementSuggestionContentProvider.h"

@interface NCNotificationManagementPromotingSuggestionContentProvider : NCNotificationManagementSuggestionContentProvider



-(id)auxiliaryOptionActions;
-(id)initWithNotificationRequest:(id)arg0 bundleDisplayName:(id)arg1 managementDelegate:(id)arg2 suggestionDelegate:(id)arg3 ;
-(void)handleKeepAction:(id)arg0 ;
-(void)handleOffAction:(id)arg0 ;


@end


#endif
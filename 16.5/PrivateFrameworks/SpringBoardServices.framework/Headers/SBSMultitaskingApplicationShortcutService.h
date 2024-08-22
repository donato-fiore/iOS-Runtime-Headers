// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSMULTITASKINGAPPLICATIONSHORTCUTSERVICE_H
#define SBSMULTITASKINGAPPLICATIONSHORTCUTSERVICE_H



#import "SBSAbstractApplicationService.h"

@interface SBSMultitaskingApplicationShortcutService : SBSAbstractApplicationService



-(void)fetchSupportedMultitaskingShortcutActionsForBundleIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)performMultitaskingShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif
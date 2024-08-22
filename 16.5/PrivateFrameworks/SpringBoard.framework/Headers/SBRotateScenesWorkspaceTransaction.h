// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBROTATESCENESWORKSPACETRANSACTION_H
#define SBROTATESCENESWORKSPACETRANSACTION_H



#import "SBAppToAppWorkspaceTransaction.h"

@interface SBRotateScenesWorkspaceTransaction : SBAppToAppWorkspaceTransaction



-(BOOL)_shouldResignActiveForAnimation;
-(NSUInteger)_concurrentOverlayDismissalOptions;
-(NSUInteger)_serialOverlayPreDismissalOptions;


@end


#endif
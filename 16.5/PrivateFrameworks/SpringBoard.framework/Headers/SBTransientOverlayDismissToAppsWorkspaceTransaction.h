// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRANSIENTOVERLAYDISMISSTOAPPSWORKSPACETRANSACTION_H
#define SBTRANSIENTOVERLAYDISMISSTOAPPSWORKSPACETRANSACTION_H



#import "SBMainWorkspaceTransaction.h"

@interface SBTransientOverlayDismissToAppsWorkspaceTransaction : SBMainWorkspaceTransaction



+(BOOL)isValidForTransitionRequest:(id)arg0 ;
-(BOOL)_canBeInterrupted;
-(BOOL)canInterruptForTransitionRequest:(id)arg0 ;
-(void)_begin;
-(void)_didComplete;
-(void)_sendActivationResultWithError:(id)arg0 ;


@end


#endif
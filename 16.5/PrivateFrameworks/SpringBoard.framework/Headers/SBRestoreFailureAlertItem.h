// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBRESTOREFAILUREALERTITEM_H
#define SBRESTOREFAILUREALERTITEM_H

@class SBAlertItem;



@interface SBRestoreFailureAlertItem : SBAlertItem



-(BOOL)allowInSetup;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)shouldShowInLockScreen;
-(BOOL)suppressForKeynote;
-(void)_rebootNow;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;
-(void)performUnlockAction;
-(void)restartSystemEvent;


@end


#endif
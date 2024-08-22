// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPEARLINTERLOCKALERTITEM_H
#define SBPEARLINTERLOCKALERTITEM_H

@class SBAlertItem;



@interface SBPearlInterlockAlertItem : SBAlertItem



-(BOOL)reappearsAfterLock;
-(BOOL)shouldShowInLockScreen;
-(id)_message;
-(id)_title;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIPASSCODELOCKVIEWINSTALLTONIGHTWITHKEYBOARD_H
#define SBUIPASSCODELOCKVIEWINSTALLTONIGHTWITHKEYBOARD_H



#import "SBUIPasscodeLockViewWithKeyboard.h"
#import "SBUIButton.h"

@interface SBUIPasscodeLockViewInstallTonightWithKeyboard : SBUIPasscodeLockViewWithKeyboard {
    SBUIButton *_actionButton;
}




-(id)initWithLightStyle:(BOOL)arg0 ;
-(void)_actionButtonHit;
-(void)_configureActionButton;
-(void)_layoutActionButton;
-(void)_layoutStatusView;
-(void)setShowsCancelButton:(BOOL)arg0 ;
-(void)setShowsEmergencyCallButton:(BOOL)arg0 ;


@end


#endif
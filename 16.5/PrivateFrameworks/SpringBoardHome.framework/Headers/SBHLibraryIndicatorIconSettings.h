// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHLIBRARYINDICATORICONSETTINGS_H
#define SBHLIBRARYINDICATORICONSETTINGS_H

@class PTSettings, SBFFluidBehaviorSettings;



@interface SBHLibraryIndicatorIconSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *pod1AnimationSettings; // ivar: _pod1AnimationSettings
@property (nonatomic) CGFloat pod1Scale; // ivar: _pod1Scale
@property (retain, nonatomic) SBFFluidBehaviorSettings *pod2AnimationSettings; // ivar: _pod2AnimationSettings
@property (nonatomic) CGFloat pod2Scale; // ivar: _pod2Scale
@property (retain, nonatomic) SBFFluidBehaviorSettings *pod3AnimationSettings; // ivar: _pod3AnimationSettings
@property (nonatomic) CGFloat pod3Scale; // ivar: _pod3Scale


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif
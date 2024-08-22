// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPSIZINGSETTINGS_H
#define SBPIPSIZINGSETTINGS_H

@class PTSettings;



@interface SBPIPSizingSettings : PTSettings

@property (nonatomic) CGFloat landcapeAspectRatioClosedIntervalLowerBound; // ivar: _landcapeAspectRatioClosedIntervalLowerBound
@property (nonatomic) CGFloat landcapeAspectRatioClosedIntervalUpperBound; // ivar: _landcapeAspectRatioClosedIntervalUpperBound
@property (nonatomic) CGFloat portraitAspectRatioClosedIntervalLowerBound; // ivar: _portraitAspectRatioClosedIntervalLowerBound
@property (nonatomic) CGFloat portraitAspectRatioClosedIntervalUpperBound; // ivar: _portraitAspectRatioClosedIntervalUpperBound
@property (nonatomic) CGFloat squareAspectRatioClosedIntervalLowerBound; // ivar: _squareAspectRatioClosedIntervalLowerBound
@property (nonatomic) CGFloat squareAspectRatioClosedIntervalUpperBound; // ivar: _squareAspectRatioClosedIntervalUpperBound


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif
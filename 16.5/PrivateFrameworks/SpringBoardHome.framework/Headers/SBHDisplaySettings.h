// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHDISPLAYSETTINGS_H
#define SBHDISPLAYSETTINGS_H

@class PTSettings;



@interface SBHDisplaySettings : PTSettings

@property (nonatomic) CGFloat additionalTopSafeAreaInset; // ivar: _additionalTopSafeAreaInset


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBEAMPOINTERSETTINGS_H
#define _UIBEAMPOINTERSETTINGS_H

@class UIFreeformPointerSettings;



@interface _UIBeamPointerSettings : UIFreeformPointerSettings

@property (nonatomic) CGFloat maxLength; // ivar: _maxLength
@property (nonatomic) CGFloat maxSnapLength; // ivar: _maxSnapLength
@property (nonatomic) CGFloat minLength; // ivar: _minLength
@property (nonatomic) CGFloat width; // ivar: _width


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEARCHBARBEHAVIORSETTINGS_H
#define _UISEARCHBARBEHAVIORSETTINGS_H

@class PTSettings;



@interface _UISearchBarBehaviorSettings : PTSettings

@property (nonatomic) CGFloat buttonGenerousPadding; // ivar: _buttonGenerousPadding
@property (nonatomic) CGFloat buttonMinimumHeight; // ivar: _buttonMinimumHeight
@property (nonatomic) CGFloat buttonTightPadding; // ivar: _buttonTightPadding
@property (nonatomic) BOOL useGenerousPadding; // ivar: _useGenerousPadding


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif
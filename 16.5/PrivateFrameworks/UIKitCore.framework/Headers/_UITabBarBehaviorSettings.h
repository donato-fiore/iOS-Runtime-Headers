// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITABBARBEHAVIORSETTINGS_H
#define _UITABBARBEHAVIORSETTINGS_H

@class PTSettings;



@interface _UITabBarBehaviorSettings : PTSettings

@property (nonatomic) CGFloat inlineBottomInset; // ivar: _inlineBottomInset
@property (nonatomic) CGFloat inlineCornerRadius; // ivar: _inlineCornerRadius
@property (nonatomic) CGFloat inlineHomeAffordanceVerticalOffset; // ivar: _inlineHomeAffordanceVerticalOffset
@property (nonatomic) CGFloat inlineHomeButtonVerticalOffset; // ivar: _inlineHomeButtonVerticalOffset
@property (nonatomic) CGFloat inlineLeadingPadding; // ivar: _inlineLeadingPadding
@property (nonatomic) CGFloat inlineTopInset; // ivar: _inlineTopInset
@property (nonatomic) CGFloat inlineTrailingPadding; // ivar: _inlineTrailingPadding
@property (nonatomic) CGFloat stackedBottomInset; // ivar: _stackedBottomInset
@property (nonatomic) CGFloat stackedCornerRadius; // ivar: _stackedCornerRadius
@property (nonatomic) CGFloat stackedLeadingPadding; // ivar: _stackedLeadingPadding
@property (nonatomic) CGFloat stackedTopInset; // ivar: _stackedTopInset
@property (nonatomic) CGFloat stackedTrailingPadding; // ivar: _stackedTrailingPadding


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif
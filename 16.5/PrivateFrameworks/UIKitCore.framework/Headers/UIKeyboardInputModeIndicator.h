// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDINPUTMODEINDICATOR_H
#define UIKEYBOARDINPUTMODEINDICATOR_H

@class NSString;


#import "UIView.h"
#import "UIImageView.h"

@interface UIKeyboardInputModeIndicator : UIView

@property (retain, nonatomic) UIImageView *indicatorView; // ivar: _indicatorView
@property (retain, nonatomic) NSString *inputModeIdentifier; // ivar: _inputModeIdentifier


-(id)initWithKeyboardInputModeIdentifier:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)setupView;
-(void)updateIndicator;


@end


#endif
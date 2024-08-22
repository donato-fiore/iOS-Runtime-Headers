// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBFOCUSVCVIEW_H
#define UIKBFOCUSVCVIEW_H



#import "UIView.h"

@interface UIKBFocusVCView : UIView

@property (nonatomic) BOOL isEligibleForFocusWithZeroAlpha; // ivar: _isEligibleForFocusWithZeroAlpha


-(BOOL)_isEligibleForFocusGivenAlpha;
-(id)preferredFocusedView;


@end


#endif
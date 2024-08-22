// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIWINDOWANCHORINGCONSTRAINT_H
#define _UIWINDOWANCHORINGCONSTRAINT_H

@class NSAutoresizingMaskLayoutConstraint;


#import "UIWindow.h"

@interface _UIWindowAnchoringConstraint : NSAutoresizingMaskLayoutConstraint

@property (nonatomic) UIWindow *window; // ivar: _window


-(BOOL)_addToEngine:(id)arg0 integralizationAdjustment:(CGFloat)arg1 mutuallyExclusiveConstraints:(*id)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDICTATIONMICONBUTTON_H
#define _UIDICTATIONMICONBUTTON_H

@class CAShapeLayer;


#import "UIButton.h"

@interface _UIDictationMicOnButton : UIButton

@property (retain, nonatomic) CAShapeLayer *shapeLayer; // ivar: _shapeLayer


-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)setupShapeLayer;


@end


#endif
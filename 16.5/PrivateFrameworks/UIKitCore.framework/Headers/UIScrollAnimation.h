// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISCROLLANIMATION_H
#define UISCROLLANIMATION_H



#import "UIAnimation.h"

@interface UIScrollAnimation : UIAnimation {
    CGPoint _startPoint;
    CGPoint _endPoint;
}




-(void)setEndPoint:(struct CGPoint )arg0 ;
-(void)setProgress:(float)arg0 ;
-(void)setStartPoint:(struct CGPoint )arg0 ;


@end


#endif
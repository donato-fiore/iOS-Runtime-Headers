// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTTAPRECOGNIZER_H
#define UITEXTTAPRECOGNIZER_H

@class NSArray;


#import "UITapGestureRecognizer.h"

@interface UITextTapRecognizer : UITapGestureRecognizer

@property (nonatomic) CGFloat touchBasedAllowableMovement; // ivar: _touchBasedAllowableMovement
@property (retain, nonatomic) NSArray *touchesForTap; // ivar: _touchesForTap


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBARTAPGESTURERECOGNIZER_H
#define _UIBARTAPGESTURERECOGNIZER_H



#import "UITapGestureRecognizer.h"

@interface _UIBarTapGestureRecognizer : UITapGestureRecognizer

@property (nonatomic) BOOL failWhenTappingInBars; // ivar: _failWhenTappingInBars
@property (readonly, nonatomic) NSInteger tapCategory; // ivar: _tapCategory


-(NSInteger)_categoryForTapLocation:(struct CGPoint )arg0 ;
-(id)description;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_setDelegate:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif
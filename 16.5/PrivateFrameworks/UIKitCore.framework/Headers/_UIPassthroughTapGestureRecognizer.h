// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPASSTHROUGHTAPGESTURERECOGNIZER_H
#define _UIPASSTHROUGHTAPGESTURERECOGNIZER_H



#import "UITapGestureRecognizer.h"

@interface _UIPassthroughTapGestureRecognizer : UITapGestureRecognizer {
    ? _flags;
}


@property (readonly, nonatomic) BOOL tapWasCommandModified; // ivar: _tapWasCommandModified


-(id)initWithCoder:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reset;
-(void)setState:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif
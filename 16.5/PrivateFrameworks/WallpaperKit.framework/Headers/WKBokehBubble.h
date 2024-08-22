// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKBOKEHBUBBLE_H
#define WKBOKEHBUBBLE_H

@class CALayer, NSString;
@protocol CAAnimationDelegate;



@interface WKBokehBubble : CALayer <CAAnimationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif
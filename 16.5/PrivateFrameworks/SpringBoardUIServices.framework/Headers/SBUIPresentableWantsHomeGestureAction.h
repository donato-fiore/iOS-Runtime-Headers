// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIPRESENTABLEWANTSHOMEGESTUREACTION_H
#define SBUIPRESENTABLEWANTSHOMEGESTUREACTION_H

@class BSAction;



@interface SBUIPresentableWantsHomeGestureAction : BSAction

@property (readonly, nonatomic) BOOL wantsHomeGesture;


-(id)initWithWantsHomeGesture:(BOOL)arg0 handler:(id)arg1 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(void)setSuccessful:(BOOL)arg0 ;


@end


#endif
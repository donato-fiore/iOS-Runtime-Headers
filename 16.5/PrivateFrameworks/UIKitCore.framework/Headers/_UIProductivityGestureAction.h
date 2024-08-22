// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPRODUCTIVITYGESTUREACTION_H
#define _UIPRODUCTIVITYGESTUREACTION_H

@class BSAction, BKSHIDEventAuthenticationMessage;



@interface _UIProductivityGestureAction : BSAction

@property (readonly, nonatomic) BKSHIDEventAuthenticationMessage *authenticationMessage;
@property (readonly, nonatomic) NSInteger gestureDirection;


-(NSInteger)UIActionType;
-(id)initWithGestureDirection:(NSInteger)arg0 authenticationMessage:(id)arg1 ;
-(void)_handleActionForWindowScene:(id)arg0 ;


@end


#endif
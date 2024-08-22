// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSEVENTDELIVERY_H
#define _UIFOCUSEVENTDELIVERY_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "UIFocusSystem.h"

@interface _UIFocusEventDelivery : NSObject {
    UIFocusSystem *_focusSystem;
    CGFloat _lastDeliveredTimestamp;
    NSInteger _lastDeliveredMovement;
}


@property (readonly, nonatomic) UIFocusSystem *focusSystem;
@property (readonly, nonatomic) NSMutableSet *keyboardPressEventForwardingMap; // ivar: _keyboardPressEventForwardingMap


-(BOOL)_movementParticipatesInCooldown:(NSInteger)arg0 ;
-(BOOL)shouldDeliverFocusKeyboardEvent:(id)arg0 toResponder:(id)arg1 ;
-(BOOL)shouldSkipKeyCommand:(id)arg0 whenDeliveringFocusKeyboardEvent:(id)arg1 toResponder:(id)arg2 ;
-(id)init;
-(id)initWithFocusSystem:(id)arg0 ;
-(void)willDeliverFocusKeyboardEvent:(id)arg0 ;


@end


#endif
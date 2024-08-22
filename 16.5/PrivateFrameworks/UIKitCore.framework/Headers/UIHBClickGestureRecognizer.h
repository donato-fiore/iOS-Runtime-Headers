// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIHBCLICKGESTURERECOGNIZER_H
#define UIHBCLICKGESTURERECOGNIZER_H

@class NSArray, NSString;
@protocol UIPressesEventTerminalRegistration;


#import "UIGestureRecognizer.h"
#import "UIPressesEvent.h"

@interface UIHBClickGestureRecognizer : UIGestureRecognizer <UIPressesEventTerminalRegistration>

 {
    UIPressesEvent *_registeredEventForTerminalEvents;
    NSUInteger _lastSeenClickCount;
}


@property (readonly, nonatomic) NSArray *allowedPressTypes;
@property (nonatomic) NSUInteger clickCount; // ivar: _clickCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL recognizesOnPressPhaseBegan; // ivar: _recognizesOnPressPhaseBegan
@property (readonly) Class superclass;


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_fail;
-(void)_processPresses:(id)arg0 ;
-(void)_resetGestureRecognizer;
-(void)_succeed;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEventDidReceiveTerminal:(id)arg0 ;


@end


#endif
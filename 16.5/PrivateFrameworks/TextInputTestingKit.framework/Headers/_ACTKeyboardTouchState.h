// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ACTKEYBOARDTOUCHSTATE_H
#define _ACTKEYBOARDTOUCHSTATE_H

@class TIKeyboardTouchEvent;

#import <Foundation/Foundation.h>


@interface _ACTKeyboardTouchState : NSObject

@property (nonatomic) BOOL dragged; // ivar: _dragged
@property (nonatomic) CGPoint initialDragPoint; // ivar: _initialDragPoint
@property (retain, nonatomic) TIKeyboardTouchEvent *lastTouchEvent; // ivar: _lastTouchEvent




@end


#endif
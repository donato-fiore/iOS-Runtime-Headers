// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDSYNTHETICTOUCH_H
#define UIKEYBOARDSYNTHETICTOUCH_H


#import <Foundation/Foundation.h>

#import "UIWindow.h"

@interface UIKeyboardSyntheticTouch : NSObject

@property (readonly, nonatomic) unsigned char _pathIdentity; // ivar: _pathIdentity
@property (readonly, nonatomic) unsigned char _pathIndex; // ivar: _pathIndex
@property (nonatomic) float _pathMajorRadius; // ivar: _pathMajorRadius
@property (nonatomic) CGPoint locationInWindow; // ivar: locationInWindow
@property (nonatomic) NSInteger phase; // ivar: phase
@property (nonatomic) NSUInteger tapCount; // ivar: tapCount
@property (nonatomic) CGFloat timestamp; // ivar: timestamp
@property (retain, nonatomic) UIWindow *window; // ivar: window


+(id)syntheticTouchWithPoint:(struct CGPoint )arg0 timestamp:(CGFloat)arg1 window:(id)arg2 ;
-(id)initWithPoint:(struct CGPoint )arg0 timestamp:(CGFloat)arg1 window:(id)arg2 ;
-(struct CGPoint )getLocationInWindow;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct CGPoint )previousLocationInView:(id)arg0 ;


@end


#endif
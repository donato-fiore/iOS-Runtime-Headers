// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDTOUCHINFO_H
#define UIKEYBOARDTOUCHINFO_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "UIKBTree.h"
#import "UIKBTouchState.h"

@interface UIKeyboardTouchInfo : NSObject

@property (nonatomic) NSInteger continuousPathState; // ivar: _continuousPathState
@property (nonatomic) BOOL delayed; // ivar: _delayed
@property (nonatomic) BOOL didPlayKeyFeedback; // ivar: _didPlayKeyFeedback
@property (nonatomic) BOOL dragged; // ivar: _dragged
@property (nonatomic) int fingerID; // ivar: _fingerID
@property (nonatomic) CGPoint initialDragPoint; // ivar: _initialDragPoint
@property (nonatomic) int initialKeyState; // ivar: _initialKeyState
@property (nonatomic) CGPoint initialPoint; // ivar: _initialPoint
@property (retain, nonatomic) UIKBTree *key; // ivar: _key
@property (retain, nonatomic) UIKBTree *keyplane; // ivar: _keyplane
@property (nonatomic) BOOL maySuppressUpAction; // ivar: _maySuppressUpAction
@property (nonatomic) NSUInteger processedTouchCount; // ivar: _processedTouchCount
@property (retain, nonatomic) UIKBTree *slidOffKey; // ivar: _slidOffKey
@property (nonatomic) int stage; // ivar: _stage
@property (readonly, nonatomic) UIKBTouchState *touch;
@property (readonly, nonatomic) NSMutableArray *touchHistory; // ivar: _touchHistory


-(id)init;
-(void)addTouch:(id)arg0 ;


@end


#endif
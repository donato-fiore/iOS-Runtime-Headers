// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIEVENTSESSIONTOUCHEVENTDETAIL_H
#define UIEVENTSESSIONTOUCHEVENTDETAIL_H


#import <Foundation/Foundation.h>


@interface UIEventSessionTouchEventDetail : NSObject

@property (nonatomic) CGFloat dragDistanceSquared; // ivar: _dragDistanceSquared
@property (nonatomic) CGPoint lastLocation; // ivar: _lastLocation
@property (nonatomic) NSInteger tapDragState; // ivar: _tapDragState
@property (nonatomic) NSInteger upDownState; // ivar: _upDownState
@property (nonatomic) NSInteger windowSection; // ivar: _windowSection


-(id)init;


@end


#endif
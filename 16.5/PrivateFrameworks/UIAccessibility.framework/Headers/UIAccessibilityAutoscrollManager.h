// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACCESSIBILITYAUTOSCROLLMANAGER_H
#define UIACCESSIBILITYAUTOSCROLLMANAGER_H

@class UIScrollView;

#import <Foundation/Foundation.h>


@interface UIAccessibilityAutoscrollManager : NSObject

@property (nonatomic) CGFloat autoscrollSpeed; // ivar: _autoscrollSpeed
@property (nonatomic, getter=isAutoscrolling) BOOL autoscrolling; // ivar: _autoscrolling
@property (nonatomic) NSUInteger scrollDirection; // ivar: _scrollDirection
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) id *targetToScroll; // ivar: _targetToScroll


+(id)sharedInstance;
-(BOOL)_autoscroll;
-(BOOL)autoscrollInDirection:(NSUInteger)arg0 ;
-(id)init;
-(void)decrementAutoscrollSpeed;
-(void)incrementAutoscrollSpeed;
-(void)pause;
-(void)scrollToBottom;
-(void)scrollToTop;


@end


#endif
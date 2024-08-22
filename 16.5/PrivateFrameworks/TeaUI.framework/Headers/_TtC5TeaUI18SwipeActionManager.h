// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC5TEAUI18SWIPEACTIONMANAGER_H
#define _TTC5TEAUI18SWIPEACTIONMANAGER_H

@protocol UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC5TeaUI18SwipeActionManager : NSObject <UIGestureRecognizerDelegate>

 {
    ? panGestureRecognizer;
    ? tapGestureRecognizer;
    ? deferGroup;
    ? collectionView;
    ? isSwipeActionEnabled;
    ? dataSource;
    ? delegate;
    ? swipeState;
    ? rubberbandFactor;
    ? maximumSwipeVelocity;
    ? springStiffness;
    ? snapOpenPercentage;
    ? fadeDuration;
    ? fadeOffset;
}




-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)init;
-(void)handlePanGestureWithRecognizer:(id)arg0 ;
-(void)handleTapGestureWithRecognizer:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVMEDIATRANSITIONANIMATOR_H
#define TVMEDIATRANSITIONANIMATOR_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning, TVMediaControllerHosting;

#import <Foundation/Foundation.h>


@interface TVMediaTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

 {
    BOOL _migrates;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<TVMediaControllerHosting> *fromHost; // ivar: _fromHost
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<TVMediaControllerHosting> *toHost; // ivar: _toHost


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)migratesMediaControllerFromHost:(id)arg0 toHost:(id)arg1 ;


@end


#endif
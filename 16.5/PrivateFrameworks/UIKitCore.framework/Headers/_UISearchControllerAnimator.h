// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEARCHCONTROLLERANIMATOR_H
#define _UISEARCHCONTROLLERANIMATOR_H

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>


@interface _UISearchControllerAnimator : NSObject <UIViewControllerAnimatedTransitioning>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)collapesKeyboardWhenNotFocused;
-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)didFocusSearchBarForController:(id)arg0 ;
-(void)didRelayoutSearchBarForController:(id)arg0 ;
-(void)didUnfocusSearchBarForController:(id)arg0 ;
-(void)willFocusOffscreenViewForController:(id)arg0 withHeading:(NSUInteger)arg1 ;


@end


#endif
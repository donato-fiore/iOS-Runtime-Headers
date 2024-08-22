// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISEARCHDISPLAYCONTROLLERCONTAINERVIEW_H
#define UISEARCHDISPLAYCONTROLLERCONTAINERVIEW_H

@class NSLayoutConstraint;


#import "UIView.h"

@interface UISearchDisplayControllerContainerView : UIView {
    BOOL _collapsedTopView;
}


@property (readonly, nonatomic) UIView *behindView; // ivar: _behindView
@property (readonly, nonatomic) UIView *bottomView; // ivar: _bottomView
@property (readonly, nonatomic) UIView *topView; // ivar: _topView
@property (retain, nonatomic) NSLayoutConstraint *topViewAttributeTopConstraint; // ivar: _topViewAttributeTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *topViewHeightConstraint; // ivar: _topViewHeightConstraint


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 topViewHeight:(CGFloat)arg1 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)adjustTopAttributeConstantByDelta:(CGFloat)arg0 ;
-(void)collapseTopView;
-(void)configureInteractionForContainment:(BOOL)arg0 ;
-(void)updateTopAttributeConstant:(CGFloat)arg0 ;
-(void)updateTopViewHeight:(CGFloat)arg0 ;
-(void)updateTopViewHeight:(CGFloat)arg0 animateUpdate:(BOOL)arg1 ;


@end


#endif
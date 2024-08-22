// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIGHOSTVIEW_H
#define _UIGHOSTVIEW_H



#import "UIView.h"
#import "_UIPortalView.h"

@interface _UIGhostView : UIView

@property (readonly, nonatomic) _UIPortalView *portalView; // ivar: _portalView
@property (readonly, nonatomic) UIView *view; // ivar: _view


+(id)ghostViewForView:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithView:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)didMoveToWindow;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif
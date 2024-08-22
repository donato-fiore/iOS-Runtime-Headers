// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKBCOMPATINPUTVIEW_H
#define _UIKBCOMPATINPUTVIEW_H



#import "UIView.h"

@interface _UIKBCompatInputView : UIView

@property (retain, nonatomic) UIView *snapshotView; // ivar: _snapshotView
@property (retain, nonatomic) UIView *touchableView; // ivar: _touchableView


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)_hasAutolayoutHeightConstraint;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(struct CGRect )_compatibleBounds;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_didChangeKeyplaneWithContext:(id)arg0 ;
-(void)addSubview:(id)arg0 ;
-(void)dealloc;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif
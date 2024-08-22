// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBVIEWBACKEDKEYVIEW_H
#define UIKBVIEWBACKEDKEYVIEW_H

@class UIView<UIKBKeyViewContentView>;


#import "UIKBKeyView.h"
#import "UIKBBackdropView.h"
#import "UIView.h"

@interface UIKBViewBackedKeyView : UIKBKeyView

@property (retain, nonatomic) UIKBBackdropView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) UIView<UIKBKeyViewContentView> *contentView; // ivar: _contentView
@property (weak, nonatomic) UIView *touchForwardingView; // ivar: _touchForwardingView


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)renderFlagsForTraits:(id)arg0 ;
-(void)layoutSubviews;
-(void)retestForTouchUpSelectedVariantIndexForKey:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)retestSelectedVariantIndexForKey:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)setDrawFrame:(struct CGRect )arg0 ;
-(void)setRenderConfig:(id)arg0 ;
-(void)updateForKeyplane:(id)arg0 key:(id)arg1 ;


@end


#endif
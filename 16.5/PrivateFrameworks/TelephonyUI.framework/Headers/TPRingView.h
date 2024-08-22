// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPRINGVIEW_H
#define TPRINGVIEW_H

@class UIView, CALayer;



@interface TPRingView : UIView

@property (retain) CALayer *dodgeRingLayer; // ivar: _dodgeRingLayer
@property (retain) CALayer *highlightDodgeLayer; // ivar: _highlightDodgeLayer
@property (retain) CALayer *highlightLuminanceLayer; // ivar: _highlightLuminanceLayer
@property (retain) CALayer *luminanceRingLayer; // ivar: _luminanceRingLayer
@property (retain) CALayer *selectionLayer; // ivar: _selectionLayer


+(CGFloat)ringCornerRadius;
+(CGFloat)ringStroke;
+(id)colorForDodge;
+(id)colorForLuminance;
+(id)createRingImageWithSize:(struct CGSize )arg0 strokeWidth:(CGFloat)arg1 color:(id)arg2 ;
+(id)ringImageForDodge;
+(id)ringImageForLuminance;
+(struct CGSize )ringSize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPREVIEWPROGRESSINDICATOR_H
#define SKUIPREVIEWPROGRESSINDICATOR_H

@class UIControl, UIImageView;


#import "SKUIShapeView.h"

@interface SKUIPreviewProgressIndicator : UIControl {
    SKUIShapeView *_backgroundView;
    UIImageView *_cancelImageView;
    SKUIShapeView *_foregroundView;
}


@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate; // ivar: _isIndeterminate
@property (nonatomic) float progress; // ivar: _progress


-(id)_newShapeViewWithBounds:(struct CGRect )arg0 lineWidth:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_beginIndeterminateAnimation;
-(void)beginIndeterminateAnimation;
-(void)endIndeterminateAnimation;
-(void)reloadWithPlayerStatus:(id)arg0 animated:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif
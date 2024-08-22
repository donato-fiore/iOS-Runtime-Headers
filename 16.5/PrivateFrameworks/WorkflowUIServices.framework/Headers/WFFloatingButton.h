// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFLOATINGBUTTON_H
#define WFFLOATINGBUTTON_H

@class UIButton, WFGradient;


#import "WFFloatingLayer.h"

@interface WFFloatingButton : UIButton

@property (copy, nonatomic) WFGradient *gradient;
@property (readonly, nonatomic) WFFloatingLayer *layer;


-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 frame:(struct CGRect )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)applyConfiguration:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFLOATINGVIEW_H
#define WFFLOATINGVIEW_H

@class UIView, WFGradient;


#import "WFFloatingLayer.h"

@interface WFFloatingView : UIView

@property (copy, nonatomic) WFGradient *gradient;
@property (readonly, nonatomic) WFFloatingLayer *layer;
@property (nonatomic, getter=isPressed) BOOL pressed;


-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 frame:(struct CGRect )arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyConfiguration:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif
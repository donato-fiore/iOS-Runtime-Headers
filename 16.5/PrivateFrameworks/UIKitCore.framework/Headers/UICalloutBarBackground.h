// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICALLOUTBARBACKGROUND_H
#define UICALLOUTBARBACKGROUND_H



#import "UIView.h"
#import "UIVisualEffectView.h"
#import "UIImageView.h"
#import "_UICalloutBarVisualStyle.h"

@interface UICalloutBarBackground : UIView {
    UIVisualEffectView *_blurView;
    UIImageView *_selectionTintView;
}


@property (nonatomic) CGRect highlightRect; // ivar: _highlightRect
@property (retain, nonatomic) _UICalloutBarVisualStyle *visualStyle; // ivar: m_visualStyle


-(BOOL)prefersCustomSelection;
-(CGFloat)cornerRadius;
-(id)blurViewBackgroundEffects;
-(id)containerBackgroundColor;
-(id)initWithVisualStyle:(id)arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 forFrame:(struct CGRect )arg1 ;


@end


#endif
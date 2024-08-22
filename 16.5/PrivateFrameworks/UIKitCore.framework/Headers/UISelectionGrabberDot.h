// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISELECTIONGRABBERDOT_H
#define UISELECTIONGRABBERDOT_H



#import "UIImageView.h"
#import "UISelectionGrabber.h"

@interface UISelectionGrabberDot : UIImageView

@property (weak, nonatomic) UISelectionGrabber *grabber; // ivar: m_grabber


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_rasterizedDotImageForScale:(CGFloat)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 container:(id)arg1 ;
-(int)textEffectsVisibilityLevel;
-(int)textEffectsVisibilityLevelInKeyboardWindow;
-(struct CGRect )_extendedHitTestingRectWithEvent:(id)arg0 includingCalloutBarAdjustments:(BOOL)arg1 ;
-(void)redrawRasterizedImageForScale:(CGFloat)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif
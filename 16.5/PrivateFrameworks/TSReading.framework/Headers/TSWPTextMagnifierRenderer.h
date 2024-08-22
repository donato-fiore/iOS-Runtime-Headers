// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPTEXTMAGNIFIERRENDERER_H
#define TSWPTEXTMAGNIFIERRENDERER_H

@class UIView, CALayer;
@protocol TSWPTextMagnifierRendererDelegate;



@interface TSWPTextMagnifierRenderer : UIView {
    CALayer *_underlayLayer;
    CALayer *_canvasLayer;
    CALayer *_overlayLayer;
}


@property (nonatomic) int autoscrollDirections; // ivar: _autoscrollDirections
@property (nonatomic) NSObject<TSWPTextMagnifierRendererDelegate> *delegate; // ivar: _delegate


-(id)actionForLayer:(id)arg0 forKey:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)p_createChildLayer;
-(void)canvasNeedsDisplay;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)layoutSubviews;
-(void)setNeedsDisplay;
-(void)tearDown;


@end


#endif
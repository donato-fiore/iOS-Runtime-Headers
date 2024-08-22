// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATUSBARBUTTONACTIONITEMVIEW_H
#define UISTATUSBARBUTTONACTIONITEMVIEW_H

@class CALayer;


#import "UIStatusBarItemView.h"
#import "UIButton.h"

@interface UIStatusBarButtonActionItemView : UIStatusBarItemView {
    UIButton *_button;
    UIButton *_externalButton;
}


@property (readonly, nonatomic) BOOL extendsHitTestingFrame;
@property (retain, nonatomic) CALayer *ringLayer; // ivar: _ringLayer
@property (nonatomic) BOOL selected; // ivar: _selected


-(BOOL)allowsUserInteraction;
-(BOOL)canBecomeFocused;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)showsTouchWhenHighlighted;
-(BOOL)usesAdvancedActions;
-(CGFloat)updateContentsAndWidth;
-(NSInteger)buttonType;
-(id)_createButton;
-(id)highlightImage;
-(struct CGRect )_contentsImageFrame;
-(void)_doubleTapButton:(id)arg0 ;
-(void)_pressAndHoldButton:(id)arg0 ;
-(void)_pressButton:(id)arg0 ;
-(void)_triggerButtonWithAction:(NSInteger)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setLayerHighlightImage:(id)arg0 ;


@end


#endif
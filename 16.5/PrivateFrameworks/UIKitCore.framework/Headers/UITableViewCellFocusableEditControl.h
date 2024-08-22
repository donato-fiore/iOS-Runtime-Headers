// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABLEVIEWCELLFOCUSABLEEDITCONTROL_H
#define UITABLEVIEWCELLFOCUSABLEEDITCONTROL_H



#import "UITableViewCellEditControl.h"
#import "_UIFloatingContentView.h"

@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl {
    _UIFloatingContentView *_focusedFloatingContentView;
}




-(BOOL)_shouldHandlePressEvent:(id)arg0 ;
-(BOOL)wantsImageShadow;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(id)_currentImage;
-(void)_ensureFocusedFloatingContentView;
-(void)_updateFloatingViewForCurrentTraits;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif
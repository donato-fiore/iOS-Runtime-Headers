// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDATEPICKERCONTAINERVIEW_H
#define _UIDATEPICKERCONTAINERVIEW_H



#import "UIView.h"
#import "_UIPassthroughScrollInteraction.h"
#import "_UIDatePickerOverlayPresentation.h"

@interface _UIDatePickerContainerView : UIView

@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) BOOL lastHitTestWasPassedThrough; // ivar: _lastHitTestWasPassedThrough
@property (retain, nonatomic) _UIPassthroughScrollInteraction *passthroughInteraction; // ivar: _passthroughInteraction
@property (retain, nonatomic) _UIDatePickerOverlayPresentation *presentation; // ivar: _presentation


-(BOOL)isTransparentFocusItem;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToWindow;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif
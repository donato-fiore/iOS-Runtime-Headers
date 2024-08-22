// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRESSANDHOLDPOPOVERCONTROLLER_H
#define UIPRESSANDHOLDPOPOVERCONTROLLER_H

@class TUIPressAndHoldView, NSString;
@protocol TUIPressAndHoldViewDelegate;


#import "UIKeyboardPopoverController.h"

@interface UIPressAndHoldPopoverController : UIKeyboardPopoverController <TUIPressAndHoldViewDelegate>

 {
    TUIPressAndHoldView *_pressAndHoldView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPresentPressAndHoldPopoverForEvent:(id)arg0 ;
+(BOOL)canPresentPressAndHoldPopoverForKeyString:(id)arg0 ;
-(BOOL)handleHardwareKeyboardEvent:(id)arg0 ;
-(BOOL)handleKeyInputForAccentSelector:(id)arg0 ;
-(BOOL)handleKeyInputForPressAndHoldSelector:(id)arg0 ;
-(BOOL)handleSelectionEvent:(id)arg0 ;
-(BOOL)hasAccentVariantInForwardDirection:(BOOL)arg0 ;
-(BOOL)isSamePressAndHoldPopoverForKeyString:(id)arg0 ;
-(id)initWithKeyString:(id)arg0 ;
-(void)insertSelectedAccentVariant:(id)arg0 shouldDismissPopover:(BOOL)arg1 ;
-(void)pressAndHoldViewDidAcceptAccentVariant:(id)arg0 atIndexPath:(id)arg1 ;
-(void)showAccentVariantInForwardDirection:(BOOL)arg0 ;


@end


#endif
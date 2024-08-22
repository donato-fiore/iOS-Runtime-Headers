// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIWEBFORMACCESSORY_H
#define UIWEBFORMACCESSORY_H

@protocol UIWebFormAccessoryDelegate;


#import "UIInputView.h"
#import "UIToolbar.h"
#import "UIBarButtonItem.h"
#import "UIBarButtonItemGroup.h"
#import "UISegmentedControl.h"

@interface UIWebFormAccessory : UIInputView {
    UIToolbar *_leftToolbar;
    UIToolbar *_rightToolbar;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_flexibleSpaceItem;
    UIBarButtonItem *_previousItem;
    UIBarButtonItem *_nextItem;
    UIBarButtonItem *_nextPreviousSpacer;
    UIBarButtonItem *_autofillSpacer;
    UIBarButtonItemGroup *_buttonGroupAutoFill;
    UIBarButtonItemGroup *_buttonGroupNavigation;
    BOOL _usesUCB;
}


@property (retain, nonatomic) UIBarButtonItem *_autofill; // ivar: _autofill
@property (retain, nonatomic) UIBarButtonItem *_clearButton; // ivar: _clearButton
@property (retain, nonatomic) UISegmentedControl *_tab; // ivar: _tab
@property (weak, nonatomic) NSObject<UIWebFormAccessoryDelegate> *delegate; // ivar: delegate
@property (nonatomic, getter=isNextEnabled) BOOL nextEnabled;
@property (nonatomic, getter=isPreviousEnabled) BOOL previousEnabled;


+(id)toolbarWithItems:(id)arg0 ;
-(id)_autoFillButton;
-(id)initWithInputAssistantItem:(id)arg0 ;
-(void)_applyTreatmentToAutoFillLabel;
-(void)_nextTapped:(id)arg0 ;
-(void)_orientationDidChange:(id)arg0 ;
-(void)_previousTapped:(id)arg0 ;
-(void)_refreshAutofillPresentation;
-(void)_setRenderConfig:(id)arg0 ;
-(void)_updateFrame;
-(void)autoFill:(id)arg0 ;
-(void)clear:(id)arg0 ;
-(void)dealloc;
-(void)done:(id)arg0 ;
-(void)hideAutoFillButton;
-(void)initForUCB:(id)arg0 ;
-(void)layoutSubviews;
-(void)setClearVisible:(BOOL)arg0 ;
-(void)setNextPreviousItemsVisible:(BOOL)arg0 ;
-(void)showAutoFillButton;
-(void)showAutoFillButtonWithTitle:(id)arg0 ;


@end


#endif
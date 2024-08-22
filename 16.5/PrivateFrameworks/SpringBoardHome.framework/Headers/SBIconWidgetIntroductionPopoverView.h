// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONWIDGETINTRODUCTIONPOPOVERVIEW_H
#define SBICONWIDGETINTRODUCTIONPOPOVERVIEW_H

@class UIButton, UILabel, UIView;
@protocol SBIconWidgetIntroductionDelegate;


#import "SBHPopoverView.h"

@interface SBIconWidgetIntroductionPopoverView : SBHPopoverView

@property (weak, nonatomic) NSObject<SBIconWidgetIntroductionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *editButton; // ivar: _editButton
@property (retain, nonatomic) UIButton *okButton; // ivar: _okButton
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (retain, nonatomic) UIView *verticalDividerLine; // ivar: _verticalDividerLine


+(struct CGSize )contentSize:(BOOL)arg0 ;
-(id)initWithDelegate:(id)arg0 vertical:(BOOL)arg1 ;
-(void)_editButtonTapped:(id)arg0 ;
-(void)_okButtonTapped:(id)arg0 ;
-(void)_setUpViews:(BOOL)arg0 ;
-(void)_updateForUserInterfaceStyle;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHFOCUSMODEPOPOVERVIEW_H
#define SBHFOCUSMODEPOPOVERVIEW_H

@class UILabel, UIButton, NSString, UIImageView;
@protocol SBIconListLayoutObserver, SBHFocusModePopoverViewDelegate;


#import "SBHPopoverView.h"
#import "SBIconListView.h"

@interface SBHFocusModePopoverView : SBHPopoverView <SBIconListLayoutObserver>



@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SBHFocusModePopoverViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIButton *editPageButton; // ivar: _editPageButton
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) SBIconListView *iconListView; // ivar: _iconListView
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithDelegate:(id)arg0 iconListView:(id)arg1 ;
-(void)_closeButtonTapped:(id)arg0 ;
-(void)_editPageButtonTapped:(id)arg0 ;
-(void)_updateForUserInterfaceStyle;
-(void)iconListView:(id)arg0 didAddIconView:(id)arg1 ;


@end


#endif
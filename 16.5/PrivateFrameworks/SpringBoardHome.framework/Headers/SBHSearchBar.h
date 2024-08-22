// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHSEARCHBAR_H
#define SBHSEARCHBAR_H

@class SBFTouchPassThroughView, SBFFeatherBlurView, UIButton, NSString;
@protocol UITextFieldDelegate, SBHSearchBarDelegate, SBIconListLayoutProvider;


#import "SBHSearchVisualConfiguration.h"
#import "SBHSearchTextField.h"

@interface SBHSearchBar : SBFTouchPassThroughView <UITextFieldDelegate>

 {
    UIEdgeInsets _textFieldHorizontalLayoutInsets;
    CGFloat _textFieldCancelButtonSpacing;
}


@property (readonly, copy, nonatomic) SBHSearchVisualConfiguration *activeSearchConfiguration; // ivar: _activeSearchConfiguration
@property (nonatomic) BOOL alignsTextFieldOnPixelBoundaries; // ivar: _alignsTextFieldOnPixelBoundaries
@property (readonly, nonatomic) SBFFeatherBlurView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGFloat backgroundViewBottomInsetToTextField; // ivar: _backgroundViewBottomInsetToTextField
@property (readonly, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHSearchBarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) SBHSearchVisualConfiguration *inactiveSearchConfiguration; // ivar: _inactiveSearchConfiguration
@property (weak, nonatomic) NSObject<SBIconListLayoutProvider> *listLayoutProvider; // ivar: _listLayoutProvider
@property (nonatomic, getter=isPortraitOrientation) BOOL portraitOrientation; // ivar: _portraitOrientation
@property (retain, nonatomic) SBHSearchTextField *searchTextField; // ivar: _searchTextField
@property (nonatomic) BOOL showsCancelButton; // ivar: _showsCancelButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *text;


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldEndEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)_performHeightCalculationForVisualConfiguration:(id)arg0 ;
-(id)_currentVisualConfiguration;
-(id)focusGroupIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 forVisualConfiguration:(id)arg1 ;
-(void)_accessibilityBoldStatusDidChange:(id)arg0 ;
-(void)_cancelButtonTapped:(id)arg0 ;
-(void)_invalidateIntrinsicContentSizeAndNotify;
-(void)_searchBarTextFieldDidChangeText:(id)arg0 ;
-(void)_updateCancelButtonFont;
-(void)layoutSubviews;
-(void)setFocusGroupIdentifier:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif
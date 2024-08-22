// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFINDNAVIGATORVIEW_H
#define _UIFINDNAVIGATORVIEW_H

@protocol _UIFindNavigatorViewDelegate;


#import "UIInputView.h"
#import "_UIFindNavigatorViewLayout.h"
#import "UIButton.h"
#import "_UIFindNavigatorSearchTextField.h"
#import "UILabel.h"

@interface _UIFindNavigatorView : UIInputView {
    ? _separatorViews;
    ? _searchMenu;
    _UIFindNavigatorViewLayout *_layout;
}


@property (nonatomic) NSInteger assistantBarStyle; // ivar: _assistantBarStyle
@property (readonly, nonatomic) UIButton *doneButton; // ivar: _doneButton
@property (weak, nonatomic) NSObject<_UIFindNavigatorViewDelegate> *findNavigatorDelegate; // ivar: _findNavigatorDelegate
@property (nonatomic) BOOL intrinsicHeightDerivedFromAssistantBar; // ivar: _intrinsicHeightDerivedFromAssistantBar
@property (nonatomic) BOOL matchCase; // ivar: _matchCase
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, nonatomic) UIButton *nextResultButton; // ivar: _nextResultButton
@property (readonly, nonatomic) UIButton *previousResultButton; // ivar: _previousResultButton
@property (readonly, nonatomic) UIButton *replaceButton; // ivar: _replaceButton
@property (nonatomic) BOOL replaceButtonEnabled; // ivar: _replaceButtonEnabled
@property (readonly, nonatomic) _UIFindNavigatorSearchTextField *replaceTextField; // ivar: _replaceTextField
@property (readonly, nonatomic) UILabel *resultCountLabel; // ivar: _resultCountLabel
@property (readonly, nonatomic) _UIFindNavigatorSearchTextField *searchTextField; // ivar: _searchTextField
@property (readonly, nonatomic) UIButton *settingsButton; // ivar: _settingsButton
@property (nonatomic) BOOL usesOpaqueBackground; // ivar: _usesOpaqueBackground
@property (nonatomic) NSUInteger visibleSeparatorEdges; // ivar: _visibleSeparatorEdges
@property (nonatomic) BOOL wholeWords; // ivar: _wholeWords


-(BOOL)_canResignIfContainsFirstResponder;
-(BOOL)_replacementEnabled;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)_createNavigatorLayoutForTraitCollection:(id)arg0 ;
-(id)_linearFocusMovementSequences;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)suggestedFindMenuItems;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleSearchMenuItem:(id)arg0 ;
-(void)_invalidateSearchSession;
-(void)_navigatorHostingTypeChanged;
-(void)_preferredBackgroundColorChanged;
-(void)_preferredContentSizeDidChange;
-(void)_setNavigatorLayout:(id)arg0 ;
-(void)find:(id)arg0 ;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif
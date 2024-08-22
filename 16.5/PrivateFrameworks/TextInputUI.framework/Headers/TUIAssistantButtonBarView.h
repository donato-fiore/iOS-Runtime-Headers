// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIASSISTANTBUTTONBARVIEW_H
#define TUIASSISTANTBUTTONBARVIEW_H

@class UIView, NSArray, NSString, NSMutableOrderedSet, _UIButtonBarButtonVisualProvider;
@protocol TUIButtonBarViewProvider, _UIButtonBarAppearanceDelegate, TUIAssistantButtonBarViewDelegate;


#import "TUIAssistantButtonSizeProvider.h"

@interface TUIAssistantButtonBarView : UIView <TUIButtonBarViewProvider>



@property (weak, nonatomic) NSObject<_UIButtonBarAppearanceDelegate> *appearanceDelegate; // ivar: _appearanceDelegate
@property (nonatomic) CGFloat barButtonWidth;
@property (nonatomic) NSInteger buttonAlignment; // ivar: _buttonAlignment
@property (retain, nonatomic) UIView *buttonContainer; // ivar: _buttonContainer
@property (retain, nonatomic) NSArray *buttonGroups; // ivar: _buttonGroups
@property (nonatomic) BOOL constrainedHorizontally; // ivar: _constrainedHorizontally
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TUIAssistantButtonBarViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat effectiveInterItemSpacing; // ivar: _effectiveInterItemSpacing
@property (retain, nonatomic) NSMutableOrderedSet *groupViews; // ivar: _groupViews
@property (readonly, nonatomic) BOOL hasVisibleItem;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalMargins; // ivar: _horizontalMargins
@property (nonatomic) CGFloat minimumInterItemSpace; // ivar: _minimumInterItemSpace
@property (retain, nonatomic) NSArray *separatorGroups; // ivar: _separatorGroups
@property (retain, nonatomic) TUIAssistantButtonSizeProvider *sizeProvider; // ivar: _sizeProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // ivar: _visualProvider


-(BOOL)_containsFlexibleGroupViews;
-(BOOL)isKeyboardGroup:(id)arg0 ;
-(BOOL)validateButtonGroup:(id)arg0 ;
-(BOOL)validateButtonGroups;
-(CGFloat)_interItemSpacingThatFits:(struct CGSize )arg0 forGroupSize:(struct CGSize )arg1 ;
-(id)_allVisibleBarItemViews;
-(id)_groupViewForBarButtonItemGroup:(id)arg0 ;
-(id)_itemViewForSender:(id)arg0 ;
-(id)_uncollapsedGroupViews;
-(id)_visibleGroupViews;
-(id)_visibleGroups;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_totalGroupSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )collapsedSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )preferredSizeForButtonBarItem:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_insetsForHorizontalMargin;
-(void)_checkBarButtonItemState:(id)arg0 ;
-(void)_collapseGroupsIfNecessaryForWidth:(CGFloat)arg0 ;
-(void)_didTapButtonBarButton:(id)arg0 withEvent:(id)arg1 ;
-(void)_uncollapseAllGroupsForNewSizeIfNecessary:(struct CGSize )arg0 ;
-(void)_updateBarButtonItemHiddenState;
-(void)configureButtonBarItemView:(id)arg0 forItem:(id)arg1 group:(id)arg2 ;
-(void)layoutSubviews;
-(void)preferredSizeDidChangeForButtonBarItem:(id)arg0 ;
-(void)preferredSizeDidChangeForGroup:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)uncollapseAllGroups;


@end


#endif
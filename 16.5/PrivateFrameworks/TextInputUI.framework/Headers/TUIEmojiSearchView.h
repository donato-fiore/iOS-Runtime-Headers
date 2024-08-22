// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIEMOJISEARCHVIEW_H
#define TUIEMOJISEARCHVIEW_H

@class UIView, NSArray, NSLayoutConstraint, UILayoutGuide, UICollectionView;


#import "TUIEmojiSearchTextField.h"

@interface TUIEmojiSearchView : UIView {
    UIView *_searchTextFieldPortal;
    UIView *_bottomHalfContainerView;
    UIView *_predictionViewWrapperView;
    UIView *_resultsCollectionContainerView;
    NSArray *_sideBySideViewConstraints;
    NSArray *_textFieldOnTopConstraints;
    NSArray *_resultsCollectionWrapperConstraints;
    NSArray *_predictionWrapperConstraints;
    NSLayoutConstraint *_searchFieldToTop;
    NSLayoutConstraint *_searchFieldLeading;
    NSLayoutConstraint *_topToBottomPadding;
    UILayoutGuide *_predictionViewGuide;
    NSLayoutConstraint *_predictionWrapperLeading;
    NSLayoutConstraint *_predictionWrapperTop;
    NSLayoutConstraint *_predictionWrapperBottom;
    BOOL _useHorizontalLayout;
    CGFloat _previousInsets;
}


@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (retain, nonatomic) UIView *predictionView; // ivar: _predictionView
@property (nonatomic) BOOL predictionViewVisible; // ivar: _predictionViewVisible
@property (retain, nonatomic) UICollectionView *resultsCollectionView; // ivar: _resultsCollectionView
@property (nonatomic) BOOL resultsViewVisible; // ivar: _resultsViewVisible
@property (readonly, nonatomic) TUIEmojiSearchTextField *searchTextField; // ivar: _searchTextField


-(id)_constraintsFromView:(id)arg0 toContainerView:(id)arg1 insets:(struct UIEdgeInsets )arg2 identifier:(id)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )_handBiasedEdgeInsets;
-(void)_createPredictionViewConstraints;
-(void)_createResultsViewConstraints;
-(void)_didChangeHandBiasNotification:(id)arg0 ;
-(void)createConstraintsIfNeeded;
-(void)dealloc;
-(void)layoutSubviews;
-(void)transitionToCompactLayout:(BOOL)arg0 ;
-(void)updateInsetsIfNeeded:(struct UIEdgeInsets )arg0 ;


@end


#endif
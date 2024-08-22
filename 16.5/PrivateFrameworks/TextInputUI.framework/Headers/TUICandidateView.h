// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUICANDIDATEVIEW_H
#define TUICANDIDATEVIEW_H

@class UIView, TIKeyboardCandidateResultSet, NSString, NSIndexPath, TIKeyboardCandidate;
@protocol TUICandidateGridDelegate, TUICandidateViewDelegate, TUICandidateViewState;


#import "TUICandidateArrowButton.h"
#import "TUICandidateBackdropView.h"
#import "TUICandidateGrid.h"
#import "TUICandidateInlineTextView.h"
#import "TUICandidateMask.h"
#import "TUICandidateSortControl.h"

@interface TUICandidateView : UIView <TUICandidateGridDelegate>



@property (retain, nonatomic) TUICandidateArrowButton *arrowButton; // ivar: _arrowButton
@property (retain, nonatomic) TUICandidateBackdropView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet; // ivar: _candidateResultSet
@property (nonatomic) BOOL changingLayout; // ivar: _changingLayout
@property (retain, nonatomic) UIView *clipsToBoundsView; // ivar: _clipsToBoundsView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TUICandidateViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TUICandidateGrid *disambiguationGrid; // ivar: _disambiguationGrid
@property (retain, nonatomic) NSIndexPath *disambiguationSelectedIndexPath;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *inlineText; // ivar: _inlineText
@property (retain, nonatomic) TUICandidateInlineTextView *inlineTextView; // ivar: _inlineTextView
@property (retain, nonatomic) NSIndexPath *lastSelectedIndexPath; // ivar: _lastSelectedIndexPath
@property (retain, nonatomic) TUICandidateMask *maskView; // ivar: _maskView
@property (retain, nonatomic) TUICandidateGrid *primaryGrid; // ivar: _primaryGrid
@property (readonly, nonatomic) TIKeyboardCandidate *selectedCandidate;
@property (readonly, nonatomic) TIKeyboardCandidate *selectedDisambiguationCandidate;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (nonatomic) BOOL shouldShowArrowButton; // ivar: _shouldShowArrowButton
@property (nonatomic) BOOL showingSortControl; // ivar: _showingSortControl
@property (retain, nonatomic) TUICandidateSortControl *sortControl; // ivar: _sortControl
@property (retain, nonatomic) NSObject<TUICandidateViewState> *state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)_preventsAppearanceProxyCustomization;
-(BOOL)handleNumberKey:(NSUInteger)arg0 ;
-(BOOL)hasCandidateInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;
-(BOOL)hasCandidateInForwardDirection:(BOOL)arg0 granularity:(int)arg1 inGridType:(NSInteger)arg2 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)reloadPrimaryGridDataIfNeeded;
-(BOOL)shouldAutomaticallyHideAndShowSortControl;
-(BOOL)showingArrowButton;
-(BOOL)toggleSortControl:(BOOL)arg0 animated:(BOOL)arg1 ;
-(CGFloat)disambiguationHeight;
-(NSInteger)effectiveCandidateArrowButonPosition;
-(NSInteger)rowForCandidate:(id)arg0 ;
-(NSInteger)selectedSortControlIndex;
-(NSInteger)viewOffsetForCandidate:(id)arg0 ;
-(id)candidateGroupsForCurrentState;
-(id)filteredCandidates;
-(id)gridOfType:(NSInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)indexPathForCandidate:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)visibleCandidates;
-(struct CGRect )boundsForClipsToBoundsViewWithState:(id)arg0 ;
-(void)candidateGrid:(id)arg0 didAcceptCandidate:(id)arg1 atIndexPath:(id)arg2 ;
-(void)candidateGrid:(id)arg0 didChangeContentSize:(struct CGSize )arg1 ;
-(void)candidateGrid:(id)arg0 didMoveHighlightFrame:(struct CGRect )arg1 ;
-(void)candidateGridNeedsToExpand:(id)arg0 ;
-(void)candidateGridSelectionDidChange:(id)arg0 ;
-(void)changeLayoutInsideAnimationBlock;
-(void)commonInit;
-(void)didTapArrowButton:(id)arg0 ;
-(void)didTapInlineText:(id)arg0 ;
-(void)finalizeLayoutChange;
-(void)handleSortControlValueChanged;
-(void)layoutSubviews;
-(void)prepareForLayoutChange:(BOOL)arg0 ;
-(void)reloadDisambiguationGridDataIfNeeded;
-(void)reloadGridsIfNeeded;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)showCandidateInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;
-(void)showCandidateInForwardDirection:(BOOL)arg0 granularity:(int)arg1 inGridType:(NSInteger)arg2 ;
-(void)updateArrowButtonVisibility;
-(void)updateCornerRadius;
-(void)updateDisambiguationSelectionIndex;
-(void)updatePrimaryGridRowTypeWithOptions:(NSUInteger)arg0 animated:(BOOL)arg1 animator:(id)arg2 completion:(id)arg3 ;
-(void)updateSortControlTitlesIfNeeded;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIPREDICTIONVIEW_H
#define TUIPREDICTIONVIEW_H

@class UIView, TIAutocorrectionList, NSLocale, NSString, NSArray, UIColor, UIKBRenderConfig, UILongPressGestureRecognizer;
@protocol UIGestureRecognizerDelegate, TUIPredictionViewDelegate;


#import "TUIPredictionViewStackView.h"

@interface TUIPredictionView : UIView <UIGestureRecognizerDelegate>



@property (retain, nonatomic) TIAutocorrectionList *autocorrectionList; // ivar: _autocorrectionList
@property (retain, nonatomic) UIView *backdropView; // ivar: _backdropView
@property (retain, nonatomic) TUIPredictionViewStackView *cellStackView; // ivar: _cellStackView
@property (retain, nonatomic) NSLocale *currentLocale; // ivar: _currentLocale
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<TUIPredictionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disablesHighlight; // ivar: _disablesHighlight
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (nonatomic) BOOL drawsBackdropView; // ivar: _drawsBackdropView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (nonatomic) CGFloat highlightCornerRadius; // ivar: _highlightCornerRadius
@property (nonatomic) CGFloat highlightMargin; // ivar: _highlightMargin
@property (nonatomic) NSUInteger maximumEmojiCells; // ivar: _maximumEmojiCells
@property (nonatomic) NSUInteger minimumNumberOfCells; // ivar: _minimumNumberOfCells
@property (retain, nonatomic) UIKBRenderConfig *renderConfig; // ivar: _renderConfig
@property (nonatomic) NSInteger selectedIndex; // ivar: _selectedIndex
@property (retain, nonatomic) UIColor *separatorColor; // ivar: _separatorColor
@property (nonatomic) CGFloat separatorMargin; // ivar: _separatorMargin
@property (nonatomic) BOOL shouldAnimateCells; // ivar: _shouldAnimateCells
@property (readonly) Class superclass;
@property (retain, nonatomic) UILongPressGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (nonatomic) BOOL useContinuousCornerInHighlight; // ivar: _useContinuousCornerInHighlight


-(BOOL)_ensureVisibleCellCount:(NSUInteger)arg0 forCellStackView:(id)arg1 ;
-(BOOL)_shouldPadWithEmptyCellsForAutocorrectionList:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(CGFloat)maximumBackgroundWidth;
-(NSInteger)_numberOfEmojisToDisplayForAutocorrectionList:(id)arg0 withCandidatesShown:(id)arg1 ;
-(NSInteger)layoutDirection;
-(NSUInteger)_predictionCellIndexAtLocation:(struct CGPoint )arg0 ;
-(id)_candidatesToDisplayForAutocorrectionList:(id)arg0 ;
-(id)allVisibleCells;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)labelFontForCandidate:(id)arg0 ;
-(id)test_cellForCandidate:(id)arg0 ;
-(id)visibleCells;
-(struct CGSize )intrinsicContentSize;
-(void)_didRecognizeTapGesture:(id)arg0 ;
-(void)_reloadCellsAnimated:(BOOL)arg0 ;
-(void)_updateHighlightedCellForTouch:(id)arg0 ;
-(void)_updateVisibleCellAppearance;
-(void)cancelTapGestureRecognizer;
-(void)configurePredictionCell:(id)arg0 forCandidate:(id)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;


@end


#endif
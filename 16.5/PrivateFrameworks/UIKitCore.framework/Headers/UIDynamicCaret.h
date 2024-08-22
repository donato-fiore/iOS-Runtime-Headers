// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDYNAMICCARET_H
#define UIDYNAMICCARET_H

@class TIKeyboardCandidateResultSet, NSString;
@protocol UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate, UIKeyboardCandidateListDelegate;


#import "UIImageView.h"
#import "_UIDynamicCaretAlternatives.h"
#import "_UIDynamicCaretHelpLabel.h"
#import "_UIDynamicCaretInput.h"
#import "_UIDynamicCaretNoContentView.h"

@interface UIDynamicCaret : UIImageView <UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate>

 {
    id<UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    NSInteger _selectedIndex;
    BOOL _justDeleted;
}


@property (retain, nonatomic) _UIDynamicCaretAlternatives *alternativesView; // ivar: _alternativesView
@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet; // ivar: _candidateSet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIDynamicCaretHelpLabel *helpLabel; // ivar: _helpLabel
@property (retain, nonatomic) _UIDynamicCaretInput *inputView; // ivar: _inputView
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) _UIDynamicCaretNoContentView *noContentView; // ivar: _noContentView
@property (readonly) Class superclass;


-(BOOL)hasCandidates;
-(BOOL)isDeleteCandidate:(id)arg0 ;
-(BOOL)isExtendedList;
-(BOOL)isFloatingList;
-(BOOL)showCandidate:(id)arg0 ;
-(NSUInteger)currentIndex;
-(NSUInteger)selectedSortIndex;
-(id)backgroundImage;
-(id)currentCandidate;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)keyboardBehaviors;
-(id)statisticsIdentifier;
-(void)alternativeTappedAtIndex:(NSInteger)arg0 ;
-(void)candidateAcceptedAtIndex:(NSUInteger)arg0 ;
-(void)didMoveToSuperview;
-(void)displayAlternatives:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)setCandidates:(id)arg0 inlineText:(id)arg1 inlineRect:(struct CGRect )arg2 maxX:(CGFloat)arg3 layout:(BOOL)arg4 ;
-(void)setDocumentHasContent:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setUIKeyboardCandidateListDelegate:(id)arg0 ;
-(void)showCandidateAtIndex:(NSUInteger)arg0 ;
-(void)showCandidateInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif
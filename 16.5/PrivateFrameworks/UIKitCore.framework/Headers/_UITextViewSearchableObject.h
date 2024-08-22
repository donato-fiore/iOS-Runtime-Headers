// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTVIEWSEARCHABLEOBJECT_H
#define _UITEXTVIEWSEARCHABLEOBJECT_H

@class NSMutableSet, NSString;
@protocol UITextSearching, NSObject><NSCopying;

#import <Foundation/Foundation.h>

#import "UITextSearchingDimmingView.h"
#import "UITextHighlightView.h"
#import "UIImageView.h"
#import "UITextRange.h"
#import "UITextView.h"

@interface _UITextViewSearchableObject : NSObject <UITextSearching>

 {
    NSMutableSet *_decoratedTextRanges;
    NSMutableSet *_decorationAttributes;
    UITextSearchingDimmingView *_dimmingView;
    UITextHighlightView *_highlightView;
    BOOL _dimmingViewVisible;
    BOOL _highlightViewVisible;
    UIImageView *_highlightContentsImageView;
    UITextRange *_highlightedTextRange;
    UITextRange *_visuallyHighlightedTextRange;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) UITextRange *selectedTextRange;
@property (readonly) NSObject<NSObject><NSCopying> *selectedTextSearchDocument;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsTextReplacement;
@property (readonly, weak, nonatomic) UITextView *textView; // ivar: _textView


-(BOOL)_usesTransientHighlightBehavior;
-(BOOL)shouldReplaceFoundTextInRange:(id)arg0 inDocument:(id)arg1 withText:(id)arg2 ;
-(NSInteger)compareFoundRange:(id)arg0 toRange:(id)arg1 inDocument:(id)arg2 ;
-(id)_activeFindSession;
-(id)_rangeProvider;
-(id)_textLineRectsForRange:(id)arg0 ;
-(id)initWithTextView:(id)arg0 ;
-(id)targetedPreviewForHighlightRange:(id)arg0 ;
-(struct ? )_wordTerminationCharacteristicsForRange:(struct _NSRange )arg0 ;
-(void)_ensureSubviewOrder;
-(void)_performTextSearchWithQueryString:(id)arg0 usingOptions:(id)arg1 resultHandler:(id)arg2 ;
-(void)_setDimmingViewVisible:(BOOL)arg0 ;
-(void)_setHighlightViewVisible:(BOOL)arg0 ;
-(void)_updateHighlightLabelForMatchedRange:(id)arg0 ;
-(void)clearAllDecoratedFoundText;
-(void)clearHighlightView;
-(void)decorateFoundTextRange:(id)arg0 inDocument:(id)arg1 usingStyle:(NSInteger)arg2 ;
-(void)didBeginFindSession;
-(void)didEndFindSession;
-(void)layoutManagedSubviews;
-(void)performTextSearchWithQueryString:(id)arg0 usingOptions:(id)arg1 resultAggregator:(id)arg2 ;
-(void)replaceAllOccurrencesOfQueryString:(id)arg0 usingOptions:(id)arg1 withText:(id)arg2 ;
-(void)replaceFoundTextInRange:(id)arg0 inDocument:(id)arg1 withText:(id)arg2 ;
-(void)scrollRangeToVisible:(id)arg0 inDocument:(id)arg1 ;
-(void)useSelectionForFind;
-(void)willHighlightFoundTextRange:(id)arg0 inDocument:(id)arg1 ;


@end


#endif
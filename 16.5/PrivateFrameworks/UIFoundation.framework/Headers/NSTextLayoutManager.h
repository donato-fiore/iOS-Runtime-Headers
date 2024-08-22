// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSTEXTLAYOUTMANAGER_H
#define NSTEXTLAYOUTMANAGER_H

@class NSArray, NSString, NSOperationQueue;
@protocol NSTextViewportElementProvider, NSSecureCoding, NSTextSelectionDataSource, NSTextLayoutManagerDelegatePrivate, NSTextLocation, NSTextLayoutManagerDelegate;

#import <Foundation/Foundation.h>

#import "NSTextContentManager.h"
#import "NSTextViewportLayoutController.h"
#import "NSLayoutManager.h"
#import "NSTextSelectionNavigation.h"
#import "_NSTextAttributeStorage.h"
#import "NSTextParagraph.h"
#import "NSTextLineFragment.h"
#import "NSTextRange.h"
#import "NSTextContainer.h"

@interface NSTextLayoutManager : NSObject <NSTextViewportElementProvider, NSSecureCoding, NSTextSelectionDataSource>

 {
    NSTextContentManager *_textContentManager;
    NSArray *_textContainers;
    NSTextViewportLayoutController *_viewportLayoutController;
    NSInteger _applicationFrameworkContext;
    id<NSTextLayoutManagerDelegatePrivate> *_delegate;
    NSLayoutManager *_companion;
    NSTextSelectionNavigation *_textSelectionNavigation;
    _NSTextAttributeStorage *_temporaryAttributesTable;
    BOOL _usesFontLeading;
    BOOL _limitsLayoutForSuspiciousContents;
    BOOL _usesHyphenation;
    BOOL _allowsFontSubstitutionAffectingVerticalMetrics;
    NSInteger _maximumNumberOfCachedTextLayoutFragments;
    NSArray *_textSelections;
    NSTextParagraph *_textParagraphForEmptyDocument;
    *? _activeEnumerationCache;
    BOOL _isProcessingRenderingAttributesMethod;
    BOOL _delegateWithTextSelectionNotification;
    ? _lastTextContainerEntry;
    *? _textContainerEntries;
    *? _textContainerEntriesAccessHint;
    NSUInteger _textContainerEntriesSize;
    NSUInteger _textContainerEntriesCount;
    id<NSTextLocation> *_softInvalidationLocation;
}


@property (readonly) NSTextLineFragment *_extraTextLineFragment;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<NSTextLayoutManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSTextRange *documentRange;
@property (readonly) NSUInteger hash;
@property (copy) id *isSelectionOverridableColor; // ivar: _isSelectionOverridableColor
@property (readonly) BOOL lastContainerFilled;
@property (retain) NSOperationQueue *layoutQueue; // ivar: _layoutQueue
@property BOOL limitsLayoutForSuspiciousContents;
@property (readonly) NSInteger maximumNumberOfLinesForLastContainer;
@property (copy) id *renderingAttributesValidator; // ivar: _renderingAttributesValidator
@property (readonly) Class superclass;
@property (retain) NSTextContainer *templateTextContainer; // ivar: _templateTextContainer
@property (retain) NSTextContainer *textContainer;
@property (readonly, weak) NSTextContentManager *textContentManager;
@property (retain) NSTextSelectionNavigation *textSelectionNavigation;
@property (retain) NSArray *textSelections;
@property (readonly) NSTextViewportLayoutController *textViewportLayoutController;
@property (readonly) CGRect usageBoundsForTextContainer;
@property BOOL usesFontLeading;
@property BOOL usesHyphenation;


+(BOOL)_throwsOnAssertionError;
+(BOOL)_validatesInternalCaches;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)shouldBeUsedForNSTextView;
+(BOOL)supportsSecureCoding;
+(Class)companionLayoutManagerClass;
+(Class)viewportLayoutControllerClass;
+(NSInteger)maximumNumberOfCachedTextLayoutFragments;
+(NSInteger)maximumNumberOfSeedElements;
+(id)linkRenderingAttributes;
+(id)linkRenderingAttributesForLabels;
+(id)validRenderingAttributes;
+(void)_setThrowsOnAssertionError:(BOOL)arg0 ;
+(void)_setValidatesInternalCaches:(BOOL)arg0 ;
-(BOOL)_hasLayoutForLocation:(id)arg0 ;
-(BOOL)_shouldDrawTextCorrectionMarkerWithType:(NSInteger)arg0 inRange:(id)arg1 ;
-(BOOL)_validateTextContainerEntries;
-(BOOL)allowsFontSubstitutionAffectingVerticalMetrics;
-(BOOL)flushTextLayoutFragmentsFromLocation:(id)arg0 direction:(BOOL)arg1 ;
-(BOOL)isCountableDataSource;
-(BOOL)usesContiguousLayout;
-(BOOL)usesContiguousLayoutForEnumeration;
-(BOOL)usesDefaultHyphenation;
-(CGFloat)_estimatedVerticalSizeForTextRange:(id)arg0 adjustedTextRange:(*id)arg1 ;
-(NSInteger)_fallbackWritingDirection;
-(NSInteger)_numberOfLinesToCurrentlyEnumeratedTextLayoutFragment;
-(NSInteger)applicationFrameworkContext;
-(NSInteger)baseWritingDirectionAtLocation:(id)arg0 ;
-(NSInteger)maximumNumberOfCachedTextLayoutFragments;
-(NSInteger)offsetFromLocation:(id)arg0 toLocation:(id)arg1 ;
-(NSInteger)textLayoutOrientationAtLocation:(id)arg0 ;
-(NSUInteger)placementOfPoint:(struct CGPoint )arg0 inContainerAtLocation:(id)arg1 ;
-(id)_copyTextLineFragmentRangeForPoint:(struct CGPoint )arg0 inContainerAtLocation:(id)arg1 pointPlacement:(*NSUInteger)arg2 ;
-(id)_currentTextLayoutFragmentEnumerated;
-(id)_estimatedTextLocationForVerticalOffset:(CGFloat)arg0 originLocation:(id)arg1 originOffset:(CGFloat)arg2 ;
-(id)_estimatedTextLocationForVerticalOffset:(CGFloat)arg0 originLocation:(id)arg1 originOffset:(CGFloat)arg2 deltaFromOffset:(*CGFloat)arg3 ;
-(id)_fillSoftInvalidationToLocation:(id)arg0 verticalOffset:(CGFloat)arg1 ;
-(id)_selectionAndMarkedTextAttributesForLocation:(id)arg0 inTextRange:(id)arg1 effectiveTextRange:(*id)arg2 ;
-(id)_textLayoutFragmentAtLocation:(id)arg0 ;
-(id)_textLineFragmentAtLocation:(id)arg0 textLayoutFragment:(*id)arg1 rangeDelta:(*NSInteger)arg2 ;
-(id)_textParagraphForEmptyDocument;
-(id)_textRangeForDoubleClickAtLocation:(id)arg0 ;
-(id)_textViewRespondingToSelector:(SEL)arg0 ;
-(id)_viewProviderForTextAttachment:(id)arg0 parentView:(id)arg1 location:(id)arg2 textContainer:(id)arg3 ;
-(id)adjustedTextSelectionsForEditingContextFromTextSelections:(id)arg0 ;
-(id)baseLocation;
-(id)companionLayoutManager;
-(id)enumerateTextLayoutFragmentsFromLocation:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(id)enumerateTextLayoutFragmentsInTextRange:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)lineFragmentRangeForPoint:(struct CGPoint )arg0 inContainerAtLocation:(id)arg1 ;
-(id)locationFromLocation:(id)arg0 withOffset:(NSInteger)arg1 ;
-(id)rangeForTextContainerAtIndex:(NSInteger)arg0 ;
-(id)renderingAttributesForLink:(id)arg0 atLocation:(id)arg1 ;
-(id)renderingColorForDocumentColor:(id)arg0 atLocation:(id)arg1 ;
-(id)temporaryAttributesTable;
-(id)textContainerForLocation:(id)arg0 ;
-(id)textLayoutFragmentForLocation:(id)arg0 ;
-(id)textLayoutFragmentForPosition:(struct CGPoint )arg0 ;
-(id)textLayoutFragmentForPosition:(struct CGPoint )arg0 inTextContainerAtIndex:(NSInteger)arg1 ;
-(id)textLayoutFragmentForPosition:(struct CGPoint )arg0 inTextContainerAtIndex:(NSInteger)arg1 avoidsAdditionalLayout:(BOOL)arg2 ;
-(id)textRangeForSelectionGranularity:(NSInteger)arg0 enclosingLocation:(id)arg1 ;
-(id)viewProviderForTextAttachment:(id)arg0 location:(id)arg1 ;
-(id)viewportLayoutController;
-(struct CGRect )usageBoundsForLastTextContainer;
-(struct CGRect )usageBoundsInTextContainerAtIndex:(NSInteger)arg0 ;
-(void)_addTextContainer:(id)arg0 ;
-(void)_addTextContainerFromTemplate:(id)arg0 ;
-(void)_commonInit;
-(void)_configureCoreTypesetter:(id)arg0 forTextParagraph:(id)arg1 textContainer:(id)arg2 ;
-(void)_fillLayoutToLocation:(id)arg0 enumerationCache:(struct ? *)arg1 ;
-(void)_fixSelectionAfterChangeInCharacterRange:(struct _NSRange )arg0 changeInLength:(NSInteger)arg1 ;
-(void)_invalidateTextParagraphForEmptyDocument;
-(void)_prepareAttributedString:(id)arg0 forTextLayoutFragment:(id)arg1 ;
-(void)_removeTextContainer;
-(void)_removeTextContainersToCondition:(id)arg0 ;
-(void)addRenderingAttribute:(id)arg0 value:(id)arg1 forTextRange:(id)arg2 ;
-(void)addTemporaryAttribute:(id)arg0 value:(id)arg1 forTextRange:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)ensureLayoutForBounds:(struct CGRect )arg0 ;
-(void)ensureLayoutForRange:(id)arg0 ;
-(void)enumerateCaretOffsetsInLineFragmentAtLocation:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateContainerBoundariesFromLocation:(id)arg0 reverse:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)enumerateRenderingAttributesFromLocation:(id)arg0 reverse:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)enumerateSubstringsFromLocation:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateTemporaryAttributesFromLocation:(id)arg0 reverse:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)enumerateTextSegmentsInRange:(id)arg0 type:(NSInteger)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)enumerateViewportElementsFromLocation:(id)arg0 options:(NSInteger)arg1 usingBlock:(id)arg2 ;
-(void)finalizeAndPushLastTextContainer;
-(void)invalidateLayoutForRange:(id)arg0 ;
-(void)invalidateRenderingAttributesForTextRange:(id)arg0 ;
-(void)invalidateTemporaryAttributesForTextRange:(id)arg0 ;
-(void)processLayoutInvalidationForTextRange:(id)arg0 synchronizing:(BOOL)arg1 ;
-(void)removeRenderingAttribute:(id)arg0 forTextRange:(id)arg1 ;
-(void)removeTemporaryAttribute:(id)arg0 forTextRange:(id)arg1 ;
-(void)replaceCharactersInRange:(id)arg0 withAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(id)arg0 withElements:(id)arg1 ;
-(void)replaceContentsInRange:(id)arg0 withAttributedString:(id)arg1 ;
-(void)replaceContentsInRange:(id)arg0 withTextElements:(id)arg1 ;
-(void)replaceTextContentManager:(id)arg0 ;
-(void)setAllowsFontSubstitutionAffectingVerticalMetrics:(BOOL)arg0 ;
-(void)setApplicationFrameworkContext:(NSInteger)arg0 ;
-(void)setMaximumNumberOfCachedTextLayoutFragments:(NSInteger)arg0 ;
-(void)setRenderingAttributes:(id)arg0 forTextRange:(id)arg1 ;
-(void)setTemporaryAttributes:(id)arg0 forTextRange:(id)arg1 ;
-(void)setUsesDefaultHyphenation:(BOOL)arg0 ;
-(void)setViewProvider:(id)arg0 forTextAttachment:(id)arg1 location:(id)arg2 ;
-(void)synchronize;
-(void)textContainerChangedGeometry:(id)arg0 ;
-(void)updateLayoutWithTextLayoutFragment:(id)arg0 ;
-(void)updateLayoutWithTextLayoutFragment:(id)arg0 addition:(BOOL)arg1 ;


@end


#endif
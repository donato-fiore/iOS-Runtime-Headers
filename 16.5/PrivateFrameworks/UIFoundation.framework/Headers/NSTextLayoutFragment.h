// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSTEXTLAYOUTFRAGMENT_H
#define NSTEXTLAYOUTFRAGMENT_H

@class NSString, NSOperationQueue, NSArray;
@protocol NSCoreTypesetterDelegateInternal, __NSTextRunStorageDataSource, NSSecureCoding, NSTextLocation;

#import <Foundation/Foundation.h>

#import "NSTextLayoutManager.h"
#import "NSTextElement.h"
#import "NSTextRange.h"
#import "_NSTextAttributeStorage.h"
#import "NSLayoutManager.h"
#import "NSTextStorage.h"
#import "_NSTextAttachmentLayoutContext.h"
#import "NSTextParagraph.h"

@interface NSTextLayoutFragment : NSObject <NSCoreTypesetterDelegateInternal, __NSTextRunStorageDataSource, NSSecureCoding>

 {
    NSTextLayoutManager *_textLayoutManager;
    NSTextElement *_textElement;
    NSTextRange *_rangeInElement;
    NSTextRange *_contentRange;
    _NSTextAttributeStorage *_renderingAttributesTable;
    CGRect _layoutFragmentFrame;
    CGPoint _layoutPoint;
    BOOL _isTextParagraph;
    _NSRange _characterRange;
    NSUInteger _sourceVerticalDelta;
    NSUInteger _sourceRangeDelta;
    CGRect _sourceBoundingRect;
    CGRect _destinationBoundingRect;
    NSUInteger _animationType;
    NSLayoutManager *_destinationLayoutManager;
    NSTextStorage *_destinationTextStorage;
    CGFloat _destinationVerticalDelta;
    _NSRange _destinationGlyphRange;
    NSLayoutManager *_layoutManager;
}


@property (getter=_isRenderingAttributesValidated) BOOL _renderingAttributesValidated; // ivar: _renderingAttributesValidated
@property (readonly) NSObject<NSTextLocation> *baseLocation;
@property (readonly) CGFloat bottomMargin;
@property (readonly, getter=isCountableDataSource) BOOL countableDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGRect destinationBoundingRect;
@property _NSRange destinationGlyphRange;
@property NSLayoutManager *destinationLayoutManager;
@property (retain) NSTextStorage *destinationTextStorage;
@property CGFloat destinationVerticalDelta;
@property BOOL hasPartialLayout; // ivar: _hasPartialLayout
@property (readonly) NSUInteger hash;
@property CGRect layoutFragmentFrame;
@property (retain) NSOperationQueue *layoutQueue; // ivar: _layoutQueue
@property (readonly) CGFloat leadingPadding;
@property (readonly) NSTextRange *rangeInElement;
@property (readonly) CGRect renderingSurfaceBounds;
@property BOOL rendersTextCorrectionMarkers; // ivar: _rendersTextCorrectionMarkers
@property NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain) _NSTextAttachmentLayoutContext *textAttachmentLayoutContext; // ivar: _textAttachmentLayoutContext
@property (readonly, copy) NSArray *textAttachmentViewProviders;
@property (readonly, weak) NSTextElement *textElement;
@property (readonly, weak) NSTextLayoutManager *textLayoutManager;
@property (copy) NSArray *textLineFragments; // ivar: _textLineFragments
@property (readonly) NSTextParagraph *textParagraph;
@property (readonly) CGFloat topMargin;
@property (readonly) CGFloat trailingPadding;


+(BOOL)supportsSecureCoding;
+(id)_validCoreTextRenderingAttributes;
+(id)layoutFragmentQueue;
-(BOOL)coreTypesetter:(id)arg0 isSimpleRectangularTextContainerForStartingCharacterAtIndex:(NSInteger)arg1 ;
-(BOOL)supportsSubelements;
-(CGFloat)verticalOffsetOfTextLocation:(id)arg0 withAffinity:(NSInteger)arg1 ;
-(NSInteger)_baseWritingDirection;
-(NSInteger)offsetFromLocation:(id)arg0 toLocation:(id)arg1 ;
-(NSUInteger)animationType;
-(id)_coreTextAttributes;
-(id)_layoutInfoForTextAttachmentAtLocation:(id)arg0 ;
-(id)_resolvedRenderingAttributesForCharacterIndex:(NSInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)_textAttributesAffectingLayout;
-(id)_textContainerAtStringIndex:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayoutManager:(id)arg0 characterRange:(struct _NSRange )arg1 animationType:(NSUInteger)arg2 boundingRect:(struct CGRect )arg3 ;
-(id)initWithTextElement:(id)arg0 range:(id)arg1 ;
-(id)layoutManager;
-(id)locationFromLocation:(id)arg0 withOffset:(NSInteger)arg1 ;
-(id)representedRange;
-(id)representedRangeAtPoint:(struct CGPoint )arg0 ;
-(id)textAttachmentViewProviderForLocation:(id)arg0 ;
-(struct CGPoint )layoutPoint;
-(struct CGRect )coreTypesetter:(id)arg0 lineFragmentRectForProposedRect:(struct CGRect )arg1 atIndex:(NSInteger)arg2 writingDirection:(NSInteger)arg3 remainingRect:(struct CGRect *)arg4 ;
-(struct CGRect )frameForTextAttachmentAtLocation:(id)arg0 ;
-(struct CGRect )sourceBoundingRect;
-(struct CGSize )layoutSize;
-(struct _NSRange )characterRange;
-(void)_layout;
-(void)_setup;
-(void)_setupResolvedTextAttachmentFrames;
-(void)addRenderingAttribute:(id)arg0 value:(id)arg1 forTextRange:(id)arg2 ;
-(void)dealloc;
-(void)drawAtPoint:(struct CGPoint )arg0 contentType:(NSUInteger)arg1 ;
-(void)drawAtPoint:(struct CGPoint )arg0 context:(struct CGContext *)arg1 ;
-(void)drawAtPoint:(struct CGPoint )arg0 inContext:(struct CGContext *)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateRenderingAttributesFromLocation:(id)arg0 reverse:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)enumerateViewportElementsFromLocation:(id)arg0 options:(NSInteger)arg1 usingBlock:(id)arg2 ;
-(void)estimateSize;
-(void)invalidateLayout;
-(void)invalidateRenderingAttributesForTextRange:(id)arg0 ;
-(void)layout;
-(void)layoutManagerDidSetTemporaryAttributes:(id)arg0 forTextRange:(id)arg1 ;
-(void)removeRenderingAttribute:(id)arg0 forTextRange:(id)arg1 ;
-(void)setLayoutPoint:(struct CGPoint )arg0 ;
-(void)setRenderingAttribute:(id)arg0 value:(id)arg1 forTextRange:(id)arg2 ;
-(void)setRenderingAttributes:(id)arg0 forTextRange:(id)arg1 ;
-(void)setTextAttachmentProvider:(id)arg0 forLocation:(id)arg1 ;


@end


#endif
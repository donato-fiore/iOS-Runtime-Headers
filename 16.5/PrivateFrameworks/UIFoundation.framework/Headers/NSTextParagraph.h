// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSTEXTPARAGRAPH_H
#define NSTEXTPARAGRAPH_H

@class NSAttributedString, NSMutableArray, NSDictionary;


#import "NSTextElement.h"
#import "NSTextRange.h"

@interface NSTextParagraph : NSTextElement {
    NSAttributedString *_attributedString;
    _NSRange _range;
    NSTextRange *_paragraphContentRange;
    NSTextRange *_paragraphSeparatorRange;
    NSInteger _resolvedBaseDirection;
    NSInteger _fallbackBaseDirection;
    NSMutableArray *_textLayoutFragments;
    unsigned char _containsTextAttachments;
}


@property (readonly) NSAttributedString *attributedString;
@property (copy) NSDictionary *attributes; // ivar: _attributes
@property BOOL isBeginningOfParagraph; // ivar: _isBeginningOfParagraph
@property BOOL isEndOfParagraph; // ivar: _isEndOfParagraph
@property (readonly) NSTextRange *paragraphContentRange;
@property (readonly) NSTextRange *paragraphSeparatorRange;


+(id)textParagraphsForAttributedString:(id)arg0 range:(struct _NSRange )arg1 ;
-(BOOL)_containsTextAttachments;
-(NSInteger)_resolvedBaseWritingDirectionWithFallbackDirection:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAttributedString:(id)arg0 ;
-(id)initWithAttributedString:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)initWithString:(id)arg0 attributes:(id)arg1 ;
-(id)initWithTextAttachment:(id)arg0 attributes:(id)arg1 ;
-(id)initWithTextContentManager:(id)arg0 ;
-(id)locationForCharacterIndex:(NSInteger)arg0 actualRange:(struct _NSRange *)arg1 ;
-(id)paragraphRange;
-(struct CGSize )estimatedIntrinsicContentSizeForTextLayoutManager:(id)arg0 ;
-(struct _NSRange )rangeForLocation:(id)arg0 allowsTrailingEdge:(BOOL)arg1 ;
-(void)_setContainsTextAttachments:(BOOL)arg0 ;
-(void)dealloc;
-(void)enumerateSubstringsFromLocation:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)synchronizeDocumentRange;


@end


#endif
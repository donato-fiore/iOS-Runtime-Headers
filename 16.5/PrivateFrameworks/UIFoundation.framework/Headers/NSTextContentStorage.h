// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSTEXTCONTENTSTORAGE_H
#define NSTEXTCONTENTSTORAGE_H

@class NSAttributedString, NSString;
@protocol NSTextStorageObserving, NSTextContentStorageDelegate;


#import "NSTextContentManager.h"
#import "NSTextStorage.h"
#import "NSCountableTextRange.h"
#import "NSRunStorage.h"
#import "NSStorage.h"

@interface NSTextContentStorage : NSTextContentManager <NSTextStorageObserving>

 {
    NSAttributedString *_attributedString;
    NSTextStorage *_textStorage;
    NSCountableTextRange *_documentRange;
    NSRunStorage *_indexTable;
    NSStorage *_elements;
    _NSRange _cachedRange;
    _NSRange _modifiedRange;
    NSInteger _modifiedDocumentLengthDelta;
    _NSRange _editedRange;
    NSInteger _editedDelta;
    NSUInteger _editedMask;
    BOOL _notifyingToFixSelection;
    *? _activeEnumerationCache;
}


@property (copy) NSAttributedString *attributedString;
@property BOOL copiesContentsInTextParagraphs; // ivar: _copiesContentsInTextParagraphs
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<NSTextContentStorageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSCountableTextRange *documentRange;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSTextStorage *textStorage;


+(BOOL)_usesTextListElements;
+(BOOL)supportsSecureCoding;
-(BOOL)_supportsTextAttributesInRange:(struct _NSRange )arg0 ;
-(BOOL)containsExtraLineFragment;
-(BOOL)isCountableDataSource;
-(NSInteger)offsetFromLocation:(id)arg0 toLocation:(id)arg1 ;
-(id)adjustedRangeFromRange:(id)arg0 forEditingTextSelection:(BOOL)arg1 ;
-(id)attributedStringForTextElement:(id)arg0 ;
-(id)attributedStringForTextElements:(id)arg0 ;
-(id)enumerateTextElementsFromLocation:(id)arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)locationFromLocation:(id)arg0 offset:(NSInteger)arg1 ;
-(id)locationFromLocation:(id)arg0 withOffset:(NSInteger)arg1 ;
-(id)textElementForAttributedString:(id)arg0 ;
-(id)textElementsForAttributedString:(id)arg0 ;
-(void)_commonInitialization;
-(void)beginEditingTransaction;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endEditingTransaction;
-(void)performEditingTransactionForTextStorage:(id)arg0 usingBlock:(id)arg1 ;
-(void)performEditingTransactionForTextStorage:(id)arg0 withBlock:(id)arg1 ;
-(void)processEditingForTextStorage:(id)arg0 edited:(NSUInteger)arg1 range:(struct _NSRange )arg2 changeInLength:(NSInteger)arg3 invalidatedRange:(struct _NSRange )arg4 ;
-(void)replaceContentsInRange:(id)arg0 withTextElements:(id)arg1 ;
-(void)synchronizeTextLayoutManagers:(id)arg0 ;
-(void)synchronizeToBackingStore:(id)arg0 ;
-(void)updateRangesForTextElement:(id)arg0 locationDelta:(NSInteger)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSCACHEDATTRIBUTEDSTRING_H
#define _NSCACHEDATTRIBUTEDSTRING_H

@class NSMutableAttributedString;


#import "NSAttributeDictionary.h"

@interface _NSCachedAttributedString : NSMutableAttributedString {
    id *_contents;
    NSAttributeDictionary *_baseAttributes;
    NSInteger _length;
    NSUInteger _hashValue;
    *? _runs;
    NSInteger _numRuns;
    NSInteger _allocedRunsSize;
    NSInteger _numHits;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(void)initialize;
-(BOOL)_baselineMode;
-(BOOL)_isDeallocating;
-(BOOL)_isStringDrawingTextStorage;
-(BOOL)_tryRetain;
-(BOOL)hasColorGlyphsInRange:(struct _NSRange )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)length;
-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)attributesAtIndex:(NSUInteger)arg0 longestEffectiveRange:(struct _NSRange *)arg1 inRange:(struct _NSRange )arg2 ;
-(id)copyCachedInstance;
-(id)init;
-(id)initWithAttributedString:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 attributes:(id)arg1 ;
-(id)string;
-(void)cache;
-(void)dealloc;
-(void)finalize;
-(void)release;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif
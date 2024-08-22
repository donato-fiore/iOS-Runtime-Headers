// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPFILTEREDSTRING_H
#define TSWPFILTEREDSTRING_H

@class NSString;


#import "TSWPDeletionRangeMap.h"
#import "TSWPRangeArray.h"

@interface TSWPFilteredString : NSString

@property (readonly, nonatomic) NSUInteger length; // ivar: _length
@property (retain, nonatomic) TSWPDeletionRangeMap *rangeMap; // ivar: _rangeMap
@property (readonly, retain, nonatomic) TSWPRangeArray *sourceRanges; // ivar: _sourceRanges
@property (retain, nonatomic) NSString *sourceString; // ivar: _sourceString


-(NSUInteger)charIndexMappedFromStorage:(NSUInteger)arg0 ;
-(NSUInteger)charIndexMappedToStorage:(NSUInteger)arg0 ;
-(id)initWithString:(id)arg0 subrange:(struct _NSRange )arg1 removeRanges:(id)arg2 ;
-(struct _NSRange )charRangeMappedFromStorage:(struct _NSRange )arg0 ;
-(struct _NSRange )charRangeMappedToStorage:(struct _NSRange )arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif
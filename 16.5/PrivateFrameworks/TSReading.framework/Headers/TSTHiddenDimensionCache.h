// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTHIDDENDIMENSIONCACHE_H
#define TSTHIDDENDIMENSIONCACHE_H

@class NSMutableIndexSet, NSIndexSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSTHiddenDimensionCache : NSObject <NSCopying>

 {
    NSUInteger mCount;
    NSMutableIndexSet *mCachedUserVisible;
    NSMutableIndexSet *mInvalidRanges;
    NSUInteger mMarkIndex;
}


@property (readonly, nonatomic) NSIndexSet *visibleIndices; // ivar: mCachedVisible


-(BOOL)anyHiddenIndicesInRange:(struct _NSRange )arg0 ;
-(BOOL)anyUserHiddenIndicesInRange:(struct _NSRange )arg0 ;
-(BOOL)isIndexHidden:(NSUInteger)arg0 ;
-(BOOL)isIndexUserHidden:(NSUInteger)arg0 ;
-(NSUInteger)findNextVisibleIndex:(NSUInteger)arg0 ;
-(NSUInteger)findNthNextVisibleIndex:(NSUInteger)arg0 fromIndex:(NSUInteger)arg1 ;
-(NSUInteger)findNthPreviousVisibleIndex:(NSUInteger)arg0 fromIndex:(NSUInteger)arg1 ;
-(NSUInteger)findPreviousVisibleIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberHiddenIndicesInRange:(struct _NSRange )arg0 ;
-(NSUInteger)numberUserHiddenIndicesInRange:(struct _NSRange )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithUserHiddenInformation:(BOOL)arg0 ;
-(unsigned short)numberOfVisibleIndicesToMarkIndexFrom:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)deleteRange:(struct _NSRange )arg0 ;
-(void)insertRange:(struct _NSRange )arg0 ;
-(void)invalidate:(struct _NSRange )arg0 ;
-(void)moveRangeFrom:(struct _NSRange )arg0 toIndex:(NSUInteger)arg1 ;
-(void)setAllInvalidValuesUsingBlock:(id)arg0 ;
-(void)setAllValuesToZero;
-(void)setCount:(NSUInteger)arg0 ;
-(void)setMarkIndex:(NSUInteger)arg0 ;


@end


#endif
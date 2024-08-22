// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKSHUFFLEMAPPING_H
#define TSKSHUFFLEMAPPING_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSKShuffleMapping : NSObject <NSCopying>

 {
    BOOL mIsVertical;
    BOOL mIsMoveOperation;
    unsigned short mFirstMovedIndex;
    unsigned short mDestinationIndexForMove;
    unsigned short mNumberOfIndicesMoved;
}


@property (readonly, nonatomic) unsigned short endIndex; // ivar: mEndIndex
@property (readonly, nonatomic) *unsigned short mapping; // ivar: mMapping
@property (readonly, nonatomic) unsigned short mappingSize;
@property (readonly, nonatomic) unsigned short startIndex; // ivar: mStartIndex


-(BOOL)isMove;
-(BOOL)isVertical;
-(id)copyInverse;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForMovedIndicesStartingAtIndex:(unsigned short)arg0 destinationIndex:(unsigned short)arg1 numberOfIndices:(unsigned short)arg2 vertical:(BOOL)arg3 ;
-(id)initWithStartIndex:(unsigned short)arg0 endIndex:(unsigned short)arg1 ;
-(id)initWithStartIndex:(unsigned short)arg0 endIndex:(unsigned short)arg1 mapping:(*unsigned short)arg2 ;
-(unsigned short)mapIndex:(unsigned short)arg0 ;
-(unsigned short)reverseMapIndex:(unsigned short)arg0 ;
-(void)dealloc;
-(void)enumerateMappingRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)insert:(unsigned short)arg0 indicesAtIndex:(unsigned short)arg1 insertingBefore:(BOOL)arg2 ;
-(void)remove:(unsigned short)arg0 indicesAtIndex:(unsigned short)arg1 ;
-(void)swapIndex:(unsigned short)arg0 withIndex:(unsigned short)arg1 ;


@end


#endif
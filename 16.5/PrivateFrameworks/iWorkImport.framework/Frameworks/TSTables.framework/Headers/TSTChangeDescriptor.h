// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCHANGEDESCRIPTOR_H
#define TSTCHANGEDESCRIPTOR_H

@class NSSet, NSHashTable, TSKShuffleMapping;

#import <Foundation/Foundation.h>

#import "TSTCellRegion.h"

@interface TSTChangeDescriptor : NSObject

@property (nonatomic) NSUInteger afterCountValue; // ivar: _afterCountValue
@property (retain, nonatomic) NSSet *annotations; // ivar: _annotations
@property (nonatomic) NSUInteger beforeCountValue; // ivar: _beforeCountValue
@property (nonatomic) TSUCellCoord cellID; // ivar: _cellID
@property (readonly, nonatomic) TSUCellRect cellRange;
@property (retain, nonatomic) TSTCellRegion *cellRegion; // ivar: _cellRegion
@property (nonatomic) int changeDescriptor; // ivar: _changeDescriptor
@property (readonly, nonatomic) BOOL hasBeforeAfterCounts;
@property (nonatomic) BOOL processedByLayoutEngine; // ivar: _processedByLayoutEngine
@property (retain, nonatomic) NSHashTable *referenceIdentifiers; // ivar: _referenceIdentifiers
@property (retain, nonatomic) TSKShuffleMapping *shuffleMapping; // ivar: _shuffleMapping
@property (readonly, nonatomic) TSUCellRect strokeRange;
@property (retain, nonatomic) TSTCellRegion *strokeRegion; // ivar: _strokeRegion


+(id)changeDescriptorWithAnnotationsRemovedForMerge:(id)arg0 ;
+(id)changeDescriptorWithType:(int)arg0 ;
+(id)changeDescriptorWithType:(int)arg0 cellID:(struct TSUCellCoord )arg1 cellRange:(struct TSUCellRect )arg2 ;
+(id)changeDescriptorWithType:(int)arg0 cellID:(struct TSUCellCoord )arg1 cellRange:(struct TSUCellRect )arg2 strokeRange:(struct TSUCellRect )arg3 ;
+(id)changeDescriptorWithType:(int)arg0 cellID:(struct TSUCellCoord )arg1 cellRegion:(id)arg2 strokeRegion:(id)arg3 ;
+(id)changeDescriptorWithType:(int)arg0 cellID:(struct TSUCellCoord )arg1 strokeRange:(struct TSUCellRect )arg2 ;
+(id)changeDescriptorWithType:(int)arg0 cellRange:(struct TSUCellRect )arg1 ;
+(id)changeDescriptorWithType:(int)arg0 cellRange:(struct TSUCellRect )arg1 strokeRange:(struct TSUCellRect )arg2 ;
+(id)changeDescriptorWithType:(int)arg0 cellRegion:(id)arg1 ;
+(id)changeDescriptorWithType:(int)arg0 cellRegion:(id)arg1 beforeCount:(NSUInteger)arg2 afterCount:(NSUInteger)arg3 ;
+(id)changeDescriptorWithType:(int)arg0 cellRegion:(id)arg1 strokeRegion:(id)arg2 ;
+(id)changeDescriptorWithType:(int)arg0 cellRegion:(id)arg1 strokeRegion:(id)arg2 beforeCount:(NSUInteger)arg3 afterCount:(NSUInteger)arg4 ;
+(id)changeDescriptorWithType:(int)arg0 referenceIdentifiers:(id)arg1 ;
+(id)changeDescriptorWithType:(int)arg0 shuffleMapping:(id)arg1 ;
+(id)changeDescriptorWithType:(int)arg0 strokeRange:(struct TSUCellRect )arg1 ;
+(id)changeDescriptorWithType:(int)arg0 strokeRegion:(id)arg1 ;
+(void)enumerateChangeRecords:(id)arg0 withType:(int)arg1 block:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithChangeDescriptorType:(int)arg0 cellRegion:(id)arg1 cellID:(struct TSUCellCoord )arg2 strokeRegion:(id)arg3 referenceIdentifiers:(id)arg4 shuffleMapping:(id)arg5 ;
-(id)initWithChangeDescriptorType:(int)arg0 cellRegion:(id)arg1 cellID:(struct TSUCellCoord )arg2 strokeRegion:(id)arg3 referenceIdentifiers:(id)arg4 shuffleMapping:(id)arg5 annotations:(id)arg6 ;
-(void)markAsProcessed;


@end


#endif
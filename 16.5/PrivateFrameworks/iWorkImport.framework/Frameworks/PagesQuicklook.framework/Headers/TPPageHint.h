// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPPAGEHINT_H
#define TPPAGEHINT_H

@class NSArray, TSUNoCopyDictionary, NSDictionary, NSString, NSSet;
@protocol TSWPOffscreenColumn, TSWPTopicNumberHints, TSDHint;

#import <Foundation/Foundation.h>


@interface TPPageHint : NSObject <TSWPOffscreenColumn>

 {
    NSArray *_hints;
    TSUNoCopyDictionary *_flowHints;
    NSObject<TSWPTopicNumberHints> *_topicNumberHints;
    NSDictionary *_flowTopicNumberHints;
    BOOL _isCopyForCaching;
}


@property (retain, nonatomic) TSUNoCopyDictionary *anchoredDrawablePositions; // ivar: _anchoredDrawablePositions
@property (readonly, nonatomic) _NSRange anchoredRange;
@property (retain, nonatomic) NSArray *childHints; // ivar: _childHints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<TSDHint> *firstChildHint;
@property (nonatomic) _NSRange footnoteAutoNumberRange; // ivar: _footnoteAutoNumberRange
@property (nonatomic) _NSRange footnoteLayoutRange; // ivar: _footnoteLayoutRange
@property (nonatomic) BOOL hasForcedFootnotes; // ivar: _hasForcedFootnotes
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TSDHint> *lastChildHint;
@property (readonly, nonatomic) BOOL lastLineIsEmptyAndHasListLabel;
@property (readonly, nonatomic) NSUInteger lineCount;
@property (readonly, nonatomic) NSUInteger nextWidowPullsDownFromCharIndex;
@property (nonatomic) NSUInteger pageColumn; // ivar: _pageColumn
@property (nonatomic) NSInteger pageKind; // ivar: _pageKind
@property (nonatomic) NSUInteger pageRow; // ivar: _pageRow
@property (readonly, nonatomic) _NSRange range;
@property (retain, nonatomic) NSSet *startingPartitionedAttachments; // ivar: _startingPartitionedAttachments
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL terminatedByBreak;
@property (readonly, nonatomic) NSObject<TSWPTopicNumberHints> *topicNumberHints;


-(BOOL)p_unarchiveHint:(id)arg0 fromArchive:(*void)arg1 ;
-(BOOL)syncsFlowRanges:(id)arg0 withEndOfPageHint:(id)arg1 ;
-(BOOL)syncsWithEndOfPageHint:(id)arg0 bodyStorage:(id)arg1 flowRanges:(id)arg2 ;
-(id)copyForArchiving;
-(id)copyForCaching;
-(id)firstColumn;
-(id)firstHint;
-(id)flowHints;
-(id)flowTopicNumberHints;
-(id)hints;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)lastColumn;
-(id)lastHint;
-(struct _NSRange )rangeAndChildHints:(*id)arg0 ;
-(void)offsetStartCharIndexBy:(NSInteger)arg0 charIndex:(NSUInteger)arg1 ;
-(void)p_archiveHint:(id)arg0 intoArchive:(*void)arg1 ;
-(void)p_archiveTopicNumberHints:(id)arg0 intoArchive:(*void)arg1 archiver:(id)arg2 ;
-(void)p_unarchiveTopicNumberHints:(id)arg0 fromArchive:(*void)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 context:(id)arg2 ;
-(void)setFlowHints:(id)arg0 flowTopicNumberHints:(id)arg1 ;
-(void)setHints:(id)arg0 topicNumberHints:(id)arg1 ;
-(void)trimToCharIndex:(NSUInteger)arg0 inTarget:(id)arg1 removeFootnoteReferenceCount:(NSUInteger)arg2 removeAutoNumberFootnoteCount:(NSUInteger)arg3 ;
-(void)updateRangeForIndexPath:(id)arg0 withStorage:(id)arg1 ;


@end


#endif
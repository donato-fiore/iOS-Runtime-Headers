// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPLAYOUTMANAGER_H
#define TSWPLAYOUTMANAGER_H

@class NSString;
@protocol TSWPStorageObserver, TSKChangeSourceObserver, TSWPStyleProviding, TSWPLayoutOwner;

#import <Foundation/Foundation.h>

#import "TSWPCTTypesetterCache.h"
#import "TSWPDirtyRangeArray.h"
#import "TSWPStorage.h"
#import "_TtC6TSText16TSWPTopicNumbers.h"

@interface TSWPLayoutManager : NSObject <TSWPStorageObserver, TSKChangeSourceObserver, TSWPStyleProviding>

 {
    BOOL _isObservingStorage;
    BOOL _useLigatures;
    BOOL _shouldClearTypesetterCache;
    TSWPCTTypesetterCache *_typesetterCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSWPDirtyRangeArray *dirtyRanges; // ivar: _dirtyRanges
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLayingOut; // ivar: _isLayingOut
@property (readonly, nonatomic) BOOL layoutFinished; // ivar: _layoutFinished
@property (readonly, weak, nonatomic) NSObject<TSWPLayoutOwner> *owner; // ivar: _owner
@property (readonly, nonatomic) TSWPStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (readonly, nonatomic) _TtC6TSText16TSWPTopicNumbers *topicNumbers; // ivar: _topicNumbers
@property (readonly, nonatomic) TSWPCTTypesetterCache *typesetterCache;


+(void)fixColumnBoundsForTarget:(id)arg0 storage:(id)arg1 charIndex:(NSUInteger)arg2 firstColumnIndex:(NSUInteger)arg3 precedingHeight:(CGFloat)arg4 height:(CGFloat)arg5 alreadyHasMargins:(BOOL)arg6 styleProvider:(id)arg7 ;
+(void)setTransformForColumn:(id)arg0 andInvalidateWPRect:(struct CGRect )arg1 inTarget:(id)arg2 ;
+(void)setTransformForColumn:(id)arg0 inTarget:(id)arg1 metrics:(id)arg2 ;
-(*void)layOutIntoTarget:(id)arg0 withLayoutState:(*void)arg1 outSync:(*BOOL)arg2 ;
-(*void)layoutStateForLayoutAfterHint:(id)arg0 firstTarget:(id)arg1 childHint:(id)arg2 ;
-(*void)layoutStateForLayoutWithHint:(id)arg0 firstTarget:(id)arg1 ;
-(BOOL)needsLayoutInColumn:(id)arg0 ;
-(BOOL)wantsToProvideStylesForTextLayout:(id)arg0 ;
-(NSUInteger)p_layoutConfigFlagsForTarget:(id)arg0 ;
-(id)initWithStorage:(id)arg0 owner:(id)arg1 ;
-(id)layoutMetricsCache;
-(id)styleProvider;
-(id)styleProviderForTextLayout:(id)arg0 ;
-(void)clearOwner;
-(void)clearTypesetterCache;
-(void)dealloc;
-(void)deflateTarget:(id)arg0 intoHints:(id)arg1 childHints:(id)arg2 anchoredDrawablePositions:(*id)arg3 startingPartitionedAttachments:(*id)arg4 topicNumberHints:(*id)arg5 layoutState:(*void)arg6 ;
-(void)destroyLayoutState:(*void)arg0 ;
-(void)inflateTarget:(id)arg0 fromHints:(id)arg1 childHint:(id)arg2 anchoredDrawablePositions:(id)arg3 footnoteLayoutRange:(struct _NSRange )arg4 ;
-(void)removeDirtyRange:(struct _NSRange )arg0 ;
-(void)resetDirtyRange;
-(void)storage:(id)arg0 didChangeRange:(struct _NSRange )arg1 delta:(NSInteger)arg2 broadcastKind:(NSUInteger)arg3 ;
-(void)willRemoveAttachmentLayout:(id)arg0 ;


@end


#endif
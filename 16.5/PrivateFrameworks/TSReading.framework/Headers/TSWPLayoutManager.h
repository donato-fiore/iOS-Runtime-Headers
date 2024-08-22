// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPLAYOUTMANAGER_H
#define TSWPLAYOUTMANAGER_H

@protocol TSWPStorageObserver, TSWPLayoutOwner;

#import <Foundation/Foundation.h>

#import "TSWPCTTypesetterCache.h"
#import "TSWPStorage.h"

@interface TSWPLayoutManager : NSObject <TSWPStorageObserver>

 {
    BOOL _isObservingStorage;
    BOOL _useLigatures;
    NSInteger _delta;
    TSWPCTTypesetterCache *_typesetterCache;
    TSWPTopicNumberHints _cachedTopicNumbers;
}


@property (readonly, nonatomic) _NSRange dirtyRange; // ivar: _dirtyRange
@property (readonly, nonatomic) NSObject<TSWPLayoutOwner> *owner; // ivar: _owner
@property (readonly, retain, nonatomic) TSWPStorage *storage; // ivar: _storage
@property (readonly, retain, nonatomic) TSWPCTTypesetterCache *typesetterCache;


+(void)fixColumnBoundsForTarget:(id)arg0 storage:(id)arg1 charIndex:(NSUInteger)arg2 firstColumnIndex:(NSUInteger)arg3 precedingHeight:(CGFloat)arg4 height:(CGFloat)arg5 alreadyHasMargins:(BOOL)arg6 styleProvider:(id)arg7 vertical:(BOOL)arg8 ;
-(*void)layoutIntoTarget:(id)arg0 withLayoutState:(*void)arg1 outSync:(*BOOL)arg2 ;
-(*void)layoutStateForLayoutTarget:(id)arg0 afterHint:(struct ? *)arg1 childHint:(id)arg2 topicNumbers:(*void)arg3 textIsVertical:(BOOL)arg4 ;
-(BOOL)needsLayoutInColumn:(id)arg0 ;
-(CGFloat)layoutIntoTarget:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(id)initWithStorage:(id)arg0 owner:(id)arg1 ;
-(id)styleProvider;
-(int)p_layoutConfigFlagsForTarget:(id)arg0 ;
-(void)clearOwner;
-(void)clearTypesetterCache;
-(void)dealloc;
-(void)deflateTarget:(id)arg0 intoHints:(*void)arg1 childHints:(id)arg2 anchoredAttachmentPositions:(*id)arg3 topicNumbers:(*void)arg4 layoutState:(*void)arg5 ;
-(void)destroyLayoutState:(*void)arg0 ;
-(void)inflateTarget:(id)arg0 fromHints:(*void)arg1 childHint:(id)arg2 anchoredAttachmentPositions:(id)arg3 topicNumbers:(*void)arg4 ;
-(void)resetTopicNumbers;
-(void)storage:(id)arg0 didChangeRange:(struct _NSRange )arg1 delta:(NSInteger)arg2 broadcastKind:(int)arg3 ;
-(void)willRemoveAttachmentLayout:(id)arg0 ;


@end


#endif
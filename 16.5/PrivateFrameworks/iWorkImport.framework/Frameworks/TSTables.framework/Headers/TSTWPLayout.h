// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTWPLAYOUT_H
#define TSTWPLAYOUT_H

@class TSWPLayout, TSWPPadding, TSWPParagraphStyle;


#import "TSTCellStyle.h"

@interface TSTWPLayout : TSWPLayout

@property (nonatomic) BOOL cacheIsValid; // ivar: _cacheIsValid
@property (nonatomic) NSUInteger cachedAutoSizeFlags; // ivar: _cachedAutoSizeFlags
@property (nonatomic) CGRect cachedAutosizedFrame; // ivar: _cachedAutosizedFrame
@property (nonatomic) TSUCellCoord cachedCellID; // ivar: _cachedCellID
@property (retain, nonatomic) TSTCellStyle *cachedCellStyle; // ivar: _cachedCellStyle
@property (nonatomic) BOOL cachedCellWraps; // ivar: _cachedCellWraps
@property (nonatomic) CGRect cachedMaskRect; // ivar: _cachedMaskRect
@property (nonatomic) TSUCellRect cachedMaskSpillRange; // ivar: _cachedMaskSpillRange
@property (nonatomic) TSUCellRect cachedMergeRange; // ivar: _cachedMergeRange
@property (retain, nonatomic) TSWPPadding *cachedPadding; // ivar: _cachedPadding
@property (nonatomic) NSInteger cachedParagraphAlignment; // ivar: _cachedParagraphAlignment
@property (retain, nonatomic) TSWPParagraphStyle *cachedTextStyle; // ivar: _cachedTextStyle
@property (nonatomic) int cachedVerticalAlignment; // ivar: _cachedVerticalAlignment


-(BOOL)invalidateForPageCountChange;
-(BOOL)isDynamicallyChangingAvailableSpaceForContainedChild;
-(Class)repClassOverride;
-(id)initWithStorage:(id)arg0 cellID:(struct TSUCellCoord )arg1 frame:(struct CGRect )arg2 ;
-(void)invalidate;
-(void)invalidatePosition;
-(void)invalidateSize;
-(void)validate;


@end


#endif
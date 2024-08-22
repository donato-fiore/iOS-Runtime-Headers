// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTSTROKESIDECARLOOKUPMAP_H
#define TSTSTROKESIDECARLOOKUPMAP_H

@class NSIndexSet;

#import <Foundation/Foundation.h>

#import "TSTStrokeLayer.h"
#import "TSTCellRegion.h"
#import "TSTStrokeSidecar.h"

@interface TSTStrokeSidecarLookupMap : NSObject

@property (retain, nonatomic) TSTStrokeLayer *bottomStrokeLayer; // ivar: _bottomStrokeLayer
@property (retain, nonatomic) NSIndexSet *columnIndexesInRow; // ivar: _columnIndexesInRow
@property (retain, nonatomic) TSTCellRegion *region; // ivar: _region
@property (retain, nonatomic) TSTStrokeSidecar *strokeSidecar; // ivar: _strokeSidecar
@property (retain, nonatomic) TSTStrokeLayer *topStrokeLayer; // ivar: _topStrokeLayer


-(BOOL)anyCellBordersInThisRow;
-(BOOL)cellBorderAtColumn:(unsigned short)arg0 ;
-(id)initWithStrokeSidecar:(id)arg0 region:(id)arg1 ;
-(void)setIteratorToRow:(unsigned int)arg0 ;


@end


#endif
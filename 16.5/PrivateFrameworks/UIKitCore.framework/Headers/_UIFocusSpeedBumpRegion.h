// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSSPEEDBUMPREGION_H
#define _UIFOCUSSPEEDBUMPREGION_H

@class UIFocusRegion;



@interface _UIFocusSpeedBumpRegion : UIFocusRegion

@property (nonatomic) NSUInteger speedBumpEdges; // ivar: _speedBumpEdges


-(BOOL)_canBeOccludedByRegionsAbove;
-(BOOL)_canOccludeRegionsBelow;
-(BOOL)_shouldCropRegionToSearchArea;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_boundariesBlockingFocusMovementRequest:(id)arg0 ;
-(id)_focusRegionWithAdjustedFrame:(struct CGRect )arg0 coordinateSpace:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 coordinateSpace:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 coordinateSpace:(id)arg1 speedBumpEdges:(NSUInteger)arg2 ;


@end


#endif
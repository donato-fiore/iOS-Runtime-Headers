// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPIPPOSITIONHYPERREGIONLIBRARY_H
#define SBPIPPOSITIONHYPERREGIONLIBRARY_H

@class _UIHyperregionUnion, NSString;
@protocol SBPIPPositionHyperregionProviding;

#import <Foundation/Foundation.h>


@interface SBPIPPositionHyperregionLibrary : NSObject <SBPIPPositionHyperregionProviding>

 {
    BOOL _isPad;
    SBPIPPositionGeometryContext _lastGeometryContext;
    _UIHyperregionUnion *_lastCornersRegion;
    _UIHyperregionUnion *_lastStashedLeftRegion;
    _UIHyperregionUnion *_lastStashedRightRegion;
    _UIHyperregionUnion *_lastOffscreenCorners;
    _UIHyperregionUnion *_lastContainerInsetRegion;
    _UIHyperregionUnion *_lastAllUnified;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_allUnifiedRegionWithGeometry:(struct SBPIPPositionGeometryContext )arg0 ;
-(id)_containerInsetRegionWithGeometry:(struct SBPIPPositionGeometryContext )arg0 ;
-(id)_cornersRegionWithGeometry:(struct SBPIPPositionGeometryContext )arg0 ;
-(id)_lastKnownRegionForType:(NSInteger)arg0 ;
-(id)_offscreenCornersRegionWithGeometry:(struct SBPIPPositionGeometryContext )arg0 ;
-(id)_stashedLeftRegionWithGeometry:(struct SBPIPPositionGeometryContext )arg0 ;
-(id)_stashedRightRegionWithGeometry:(struct SBPIPPositionGeometryContext )arg0 ;
-(id)init;
-(id)regionWithType:(NSInteger)arg0 geometry:(struct SBPIPPositionGeometryContext )arg1 ;
-(struct CGRect )_insetRectForEdgeInsets:(struct UIEdgeInsets )arg0 pipSize:(struct CGSize )arg1 containerBounds:(struct CGRect )arg2 ;
-(struct CGRect )_validatedInsetRectWithinContainerBoundsWithGeometry:(struct SBPIPPositionGeometryContext )arg0 ;
-(struct CGRect )_validatedMinimumPaddingAndEdgeInsetInsetRect:(struct SBPIPPositionGeometryContext )arg0 ;
-(struct CGRect )_validatedStashedToStashedMaximumumRectWithGeometry:(struct SBPIPPositionGeometryContext )arg0 ;
-(void)_resetLastKnownRegions;


@end


#endif
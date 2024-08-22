// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDFREEHANDDRAWINGREP_H
#define TSDFREEHANDDRAWINGREP_H

@class NSCache, NSString;
@protocol TSDPlayableRep;


#import "TSDGroupRep.h"

@interface TSDFreehandDrawingRep : TSDGroupRep <TSDPlayableRep>

 {
    NSCache *_cachedClusteredShapeRepsForAnimationExport;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly) Class superclass;


-(BOOL)isAccessibilityElement;
-(BOOL)p_shouldDrawShapeRep:(id)arg0 withOtherShapeRep:(id)arg1 ;
-(BOOL)tsaxAllowedToEditChildren;
-(CGFloat)opacity;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)p_childrenToExcludeFromFlattenedDrawing;
-(id)p_freehandDrawingInfo;
-(id)p_freehandDrawingLayout;
-(id)p_shapeChildrenForDrawingRecursively;
-(id)textureForDescription:(id)arg0 ;
-(id)tsaxChildren;
-(struct CGRect )clipRect;
-(void)p_drawChildShapeReps:(id)arg0 togetherInContext:(struct CGContext *)arg1 ;
-(void)recursivelyDrawChildrenInContext:(struct CGContext *)arg0 keepingChildrenPassingTest:(id)arg1 ;
-(void)willBeRemoved;


@end


#endif
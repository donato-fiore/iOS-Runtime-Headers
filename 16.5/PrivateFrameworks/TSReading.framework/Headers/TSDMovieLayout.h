// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDMOVIELAYOUT_H
#define TSDMOVIELAYOUT_H



#import "TSDMediaLayout.h"
#import "TSDInfoGeometry.h"

@interface TSDMovieLayout : TSDMediaLayout {
    TSDInfoGeometry *mDynamicInfoGeometry;
}




-(BOOL)supportsRotation;
-(id)computeLayoutGeometry;
-(id)i_computeWrapPath;
-(id)initWithInfo:(id)arg0 ;
-(id)layoutGeometryFromInfo;
-(id)movieInfo;
-(struct CGRect )computeAlignmentFrameInRoot:(BOOL)arg0 ;
-(struct CGRect )fullReflectionBoundsForRect:(struct CGRect )arg0 ;
-(struct CGRect )fullReflectionFrame;
-(void)beginDynamicOperation;
-(void)dealloc;
-(void)endDynamicOperation;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)processChangedProperty:(int)arg0 ;
-(void)takeRotationFromTracker:(id)arg0 ;


@end


#endif
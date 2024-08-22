// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDAUDIOLAYOUT_H
#define TSDAUDIOLAYOUT_H



#import "TSDMediaLayout.h"
#import "TSDMovieInfo.h"

@interface TSDAudioLayout : TSDMediaLayout

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;


+(struct CGSize )scaledAudioSize;
-(BOOL)allowsConnections;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)shouldDisplayGuides;
-(BOOL)supportsFlipping;
-(BOOL)supportsRotation;
-(id)initWithInfo:(id)arg0 ;
-(id)layoutGeometryFromInfo;
-(id)visibleGeometries;
-(int)wrapType;
-(struct CGRect )alignmentFrame;
-(struct CGRect )computeAlignmentFrameInRoot:(BOOL)arg0 ;
-(struct CGRect )frameForCullingWithBaseFrame:(struct CGRect )arg0 additionalTransform:(struct CGAffineTransform )arg1 ;


@end


#endif
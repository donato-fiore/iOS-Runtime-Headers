// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTLAYOUTDYNAMICRESIZEINFOUNIFY_H
#define TSTLAYOUTDYNAMICRESIZEINFOUNIFY_H



#import "TSTLayoutDynamicResizeInfo.h"

@interface TSTLayoutDynamicResizeInfoUnify : TSTLayoutDynamicResizeInfo

@property (readonly, nonatomic) CGFloat targetHeight; // ivar: mTargetHeight
@property (readonly, nonatomic) CGFloat targetWidth; // ivar: mTargetWidth


-(BOOL)applyFixedHeight:(CGFloat)arg0 ;
-(BOOL)applyFixedWidth:(CGFloat)arg0 ;
-(BOOL)p_applyUnifyFixedSize:(CGFloat)arg0 region:(id)arg1 direction:(NSInteger)arg2 count:(unsigned int)arg3 currentArray:(*void)arg4 minimumArray:(*void)arg5 ;
-(CGFloat)applyResizeHeightFactor:(CGFloat)arg0 ;
-(CGFloat)applyResizeWidthFactor:(CGFloat)arg0 ;
-(CGFloat)p_applyUnifyResizeFactor:(CGFloat)arg0 region:(id)arg1 direction:(NSInteger)arg2 totalOfCaptured:(CGFloat)arg3 count:(unsigned int)arg4 capturedArray:(*void)arg5 currentArray:(*void)arg6 minimumArray:(*void)arg7 ;
-(void)captureNewMinimumRowHeights:(id)arg0 ;


@end


#endif
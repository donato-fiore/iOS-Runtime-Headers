// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCONNECTIONLINEORTHOGONALLAYOUT_H
#define TSDCONNECTIONLINEORTHOGONALLAYOUT_H



#import "TSDConnectionLineAbstractLayout.h"

@interface TSDConnectionLineOrthogonalLayout : TSDConnectionLineAbstractLayout



-(BOOL)canEndpointsCoincide;
-(id)createConnectedPathFrom:(id)arg0 to:(id)arg1 withControlPoints:(struct CGPoint )arg2 ;
-(struct CGPoint )axisSnapPoint:(struct CGPoint )arg0 toXs:(struct vector<double, std::allocator<double>> )arg1 toYs:(struct vector<double, std::allocator<double>> )arg2 withThreshold:(CGFloat)arg3 ;
-(struct CGPoint )controlPointForPointA:(struct CGPoint )arg0 pointB:(struct CGPoint )arg1 andOriginalA:(struct CGPoint )arg2 originalB:(struct CGPoint )arg3 ;
-(struct CGRect )orthoRectOfLayout:(id)arg0 outset:(CGFloat)arg1 ;


@end


#endif
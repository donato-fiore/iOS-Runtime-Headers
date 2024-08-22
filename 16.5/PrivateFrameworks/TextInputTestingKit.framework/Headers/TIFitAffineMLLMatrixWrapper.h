// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIFITAFFINEMLLMATRIXWRAPPER_H
#define TIFITAFFINEMLLMATRIXWRAPPER_H


#import <Foundation/Foundation.h>


@interface TIFitAffineMLLMatrixWrapper : NSObject {
    *void _pMatrix;
    *void _pScaleMatrix;
    *void _pRotationMatrix;
    *void _pSkewMatrix;
    *void _pTransMatrix;
}




-(id)init;
-(struct CGPoint )transformedPoint:(struct CGPoint )arg0 ;
-(void)calcMatrix;
-(void)dealloc;
-(void)setMatrix:(*void)arg0 ;
-(void)setRotation:(CGFloat)arg0 ;
-(void)setSkewRotation:(CGFloat)arg0 ;
-(void)setXScale:(CGFloat)arg0 yScale:(CGFloat)arg1 ;
-(void)setXTrans:(CGFloat)arg0 yTrans:(CGFloat)arg1 ;


@end


#endif
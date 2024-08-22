// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCMPSINSTANCENORMDATALOADERPROPS_H
#define TCMPSINSTANCENORMDATALOADERPROPS_H

@class MPSVector, MPSCNNNormalizationGammaAndBetaState;
@protocol MTLBuffer;

#import <Foundation/Foundation.h>


@interface TCMPSInstanceNormDataLoaderProps : NSObject

@property (retain, nonatomic) NSObject<MTLBuffer> *betaBuffer; // ivar: _betaBuffer
@property (retain, nonatomic) NSObject<MTLBuffer> *betaMomentumBuffer; // ivar: _betaMomentumBuffer
@property (retain, nonatomic) MPSVector *betaMomentumVector; // ivar: _betaMomentumVector
@property (retain, nonatomic) MPSVector *betaVector; // ivar: _betaVector
@property (retain, nonatomic) NSObject<MTLBuffer> *betaVelocityBuffer; // ivar: _betaVelocityBuffer
@property (retain, nonatomic) MPSVector *betaVelocityVector; // ivar: _betaVelocityVector
@property (retain, nonatomic) NSObject<MTLBuffer> *gammaBuffer; // ivar: _gammaBuffer
@property (retain, nonatomic) NSObject<MTLBuffer> *gammaMomentumBuffer; // ivar: _gammaMomentumBuffer
@property (retain, nonatomic) MPSVector *gammaMomentumVector; // ivar: _gammaMomentumVector
@property (retain, nonatomic) MPSVector *gammaVector; // ivar: _gammaVector
@property (retain, nonatomic) NSObject<MTLBuffer> *gammaVelocityBuffer; // ivar: _gammaVelocityBuffer
@property (retain, nonatomic) MPSVector *gammaVelocityVector; // ivar: _gammaVelocityVector
@property (retain, nonatomic) NSObject<MTLBuffer> *movingMeanBuffer; // ivar: _movingMeanBuffer
@property (retain, nonatomic) NSObject<MTLBuffer> *movingVarianceBuffer; // ivar: _movingVarianceBuffer
@property (retain, nonatomic) MPSCNNNormalizationGammaAndBetaState *state; // ivar: _state




@end


#endif
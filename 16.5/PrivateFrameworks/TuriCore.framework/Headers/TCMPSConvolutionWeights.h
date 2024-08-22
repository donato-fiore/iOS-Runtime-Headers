// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCMPSCONVOLUTIONWEIGHTS_H
#define TCMPSCONVOLUTIONWEIGHTS_H

@class MPSCNNConvolutionDescriptor, MPSVector, NSString, MPSCNNConvolutionWeightsAndBiasesState;
@protocol MPSCNNConvolutionDataSource, MTLBuffer, MTLCommandQueue, TCMPSConvolutionWeightsOptimizing;

#import <Foundation/Foundation.h>


@interface TCMPSConvolutionWeights : NSObject <MPSCNNConvolutionDataSource>

 {
    NSUInteger _outputFeatureChannels;
    NSUInteger _inputFeatureChannels;
    NSUInteger _kernelHeight;
    NSUInteger _kernelWidth;
    MPSCNNConvolutionDescriptor *_convDesc;
    basic_string<char, std::char_traits<char>, std::allocator<char>> _kernelParamsBinaryName;
    NSUInteger sizeBias;
    NSUInteger sizeWeights;
    unsigned int _seed;
    OptimizerOptions _optimizerOptions;
    id<MTLBuffer> *weightMomentumBuffer;
    id<MTLBuffer> *biasMomentumBuffer;
    id<MTLBuffer> *weightVelocityBuffer;
    id<MTLBuffer> *biasVelocityBuffer;
    id<MTLBuffer> *weightBuffer;
    id<MTLBuffer> *biasBuffer;
    id<MTLCommandQueue> *cq;
}


@property (readonly, nonatomic) MPSVector *biasMomentumVector; // ivar: _biasMomentumVector
@property (readonly, nonatomic) MPSVector *biasVelocityVector; // ivar: _biasVelocityVector
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TCMPSConvolutionWeightsOptimizing> *optimizer; // ivar: _optimizer
@property (readonly, nonatomic) MPSCNNConvolutionWeightsAndBiasesState *state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL updateWeights; // ivar: _updateWeights
@property (readonly, nonatomic) MPSVector *weightMomentumVector; // ivar: _weightMomentumVector
@property (readonly, nonatomic) MPSVector *weightVelocityVector; // ivar: _weightVelocityVector


-(*float)biasTerms;
-(*void)weights;
-(BOOL)load;
-(NSUInteger)biasSize;
-(NSUInteger)weightSize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)descriptor;
-(id)initWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputFeatureChannels:(NSUInteger)arg2 outputFeatureChannels:(NSUInteger)arg3 neuronType:(int)arg4 neuronA:(float)arg5 neuronB:(float)arg6 stride:(NSUInteger)arg7 kernelParamsBinaryName:(char *)arg8 device:(id)arg9 cmd_queue:(id)arg10 init_weight_ptr:(*float)arg11 init_bias_ptr:(*float)arg12 optimizerOptions:(struct OptimizerOptions )arg13 ;
-(id)initWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputFeatureChannels:(NSUInteger)arg2 outputFeatureChannels:(NSUInteger)arg3 neuronType:(int)arg4 strideX:(NSUInteger)arg5 strideY:(NSUInteger)arg6 neuronA:(float)arg7 neuronB:(float)arg8 kernelParamsBinaryName:(char *)arg9 device:(id)arg10 cmd_queue:(id)arg11 init_weight_ptr:(*float)arg12 init_bias_ptr:(*float)arg13 optimizerOptions:(struct OptimizerOptions )arg14 ;
-(id)initWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputFeatureChannels:(NSUInteger)arg2 outputFeatureChannels:(NSUInteger)arg3 neuronType:(int)arg4 strideX:(NSUInteger)arg5 strideY:(NSUInteger)arg6 neuronA:(float)arg7 neuronB:(float)arg8 kernelParamsBinaryName:(char *)arg9 device:(id)arg10 cmd_queue:(id)arg11 updateWeights:(BOOL)arg12 init_weight_ptr:(*float)arg13 init_bias_ptr:(*float)arg14 optimizerOptions:(struct OptimizerOptions )arg15 ;
-(id)label;
-(id)updateWithCommandBuffer:(id)arg0 gradientState:(id)arg1 ;
-(id)updateWithCommandBuffer:(id)arg0 gradientState:(id)arg1 sourceState:(id)arg2 ;
-(id)weightShape;
-(unsigned int)dataType;
-(void)checkpoint;
-(void)checkpointWithCommandQueue:(id)arg0 ;
-(void)loadBias:(*float)arg0 ;
-(void)loadWeight:(*float)arg0 ;
-(void)purge;
-(void)setLearningRate:(float)arg0 ;
-(void)set_cq:(id)arg0 ;


@end


#endif
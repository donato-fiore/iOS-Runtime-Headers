// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCMPSSTYLETRANSFERDECODINGNODE_H
#define TCMPSSTYLETRANSFERDECODINGNODE_H

@class MPSCNNConvolutionNode, MPSCNNInstanceNormalizationNode, MPSNNImageNode, MPSCNNNeuronReLUNode, MPSCNNUpsamplingNearestNode;

#import <Foundation/Foundation.h>


@interface TCMPSStyleTransferDecodingNode : NSObject

@property (retain, nonatomic) MPSCNNConvolutionNode *conv; // ivar: _conv
@property (retain, nonatomic) MPSCNNInstanceNormalizationNode *instNorm; // ivar: _instNorm
@property (retain, nonatomic) MPSNNImageNode *output; // ivar: _output
@property (retain, nonatomic) MPSCNNNeuronReLUNode *relu; // ivar: _relu
@property (retain, nonatomic) MPSCNNUpsamplingNearestNode *upsample; // ivar: _upsample


-(id)backwardPass:(id)arg0 ;
-(id)exportWeights:(id)arg0 ;
-(id)initWithParameters:(id)arg0 inputNode:(id)arg1 device:(id)arg2 cmdQueue:(id)arg3 descriptor:(id)arg4 initWeights:(id)arg5 ;
-(void)setLearningRate:(float)arg0 ;
-(void)setStyleIndex:(NSUInteger)arg0 ;


@end


#endif
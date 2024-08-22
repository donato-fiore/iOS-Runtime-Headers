// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCMPSSTYLETRANSFER_H
#define TCMPSSTYLETRANSFER_H

@class MPSNNImageNode, MPSNNGraph;
@protocol MTLCommandQueue, MTLDevice;

#import <Foundation/Foundation.h>

#import "TCMPSStyleTransferPreProcessing.h"
#import "TCMPSVgg16Network.h"
#import "TCMPSStyleTransferTransformerNetwork.h"

@interface TCMPSStyleTransfer : NSObject

@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (retain, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (retain, nonatomic) MPSNNImageNode *contenMeanNode; // ivar: _contenMeanNode
@property (nonatomic) float contentLossMultiplier; // ivar: _contentLossMultiplier
@property (retain, nonatomic) MPSNNImageNode *contentNode; // ivar: _contentNode
@property (retain, nonatomic) TCMPSStyleTransferPreProcessing *contentPreProcess; // ivar: _contentPreProcess
@property (retain, nonatomic) TCMPSStyleTransferPreProcessing *contentPreProcessLoss; // ivar: _contentPreProcessLoss
@property (retain, nonatomic) MPSNNImageNode *contentScaleNode; // ivar: _contentScaleNode
@property (retain, nonatomic) TCMPSVgg16Network *contentVgg; // ivar: _contentVgg
@property (retain, nonatomic) TCMPSVgg16Network *contentVggLoss; // ivar: _contentVggLoss
@property (retain, nonatomic) NSObject<MTLDevice> *dev; // ivar: _dev
@property (nonatomic) NSUInteger imgHeight; // ivar: _imgHeight
@property (nonatomic) NSUInteger imgWidth; // ivar: _imgWidth
@property (retain, nonatomic) MPSNNGraph *inferenceGraph; // ivar: _inferenceGraph
@property (retain, nonatomic) TCMPSStyleTransferTransformerNetwork *model; // ivar: _model
@property (nonatomic) float styleLossMultiplier; // ivar: _styleLossMultiplier
@property (retain, nonatomic) MPSNNImageNode *styleMeanNode; // ivar: _styleMeanNode
@property (retain, nonatomic) MPSNNImageNode *styleNode; // ivar: _styleNode
@property (retain, nonatomic) TCMPSStyleTransferPreProcessing *stylePreProcessLoss; // ivar: _stylePreProcessLoss
@property (retain, nonatomic) MPSNNImageNode *styleScaleNode; // ivar: _styleScaleNode
@property (retain, nonatomic) TCMPSVgg16Network *styleVggLoss; // ivar: _styleVggLoss
@property (nonatomic) float totalLossMultiplier; // ivar: _totalLossMultiplier
@property (retain, nonatomic) MPSNNGraph *trainingGraph; // ivar: _trainingGraph
@property (nonatomic) BOOL updateAllParams; // ivar: _updateAllParams


+(id)defineTransformerDescriptor:(NSUInteger)arg0 tuneAllWeights:(BOOL)arg1 ;
+(id)defineVGG16Descriptor:(NSUInteger)arg0 ;
+(id)topLeftCropImage:(id)arg0 inputHeight:(NSUInteger)arg1 inputWidth:(NSUInteger)arg2 outputHeight:(NSUInteger)arg3 outputWidth:(NSUInteger)arg4 numChannels:(NSUInteger)arg5 ;
+(void)populateMean:(id)arg0 ;
+(void)populateMeanCWH:(id)arg0 height:(NSUInteger)arg1 width:(NSUInteger)arg2 ;
+(void)populateMultiplication:(id)arg0 ;
+(void)populateVarianceCWH:(id)arg0 height:(NSUInteger)arg1 width:(NSUInteger)arg2 ;
-(id)exportWeights;
-(id)initWithDev:(id)arg0 commandQueue:(id)arg1 weights:(id)arg2 numStyles:(NSUInteger)arg3 ;
-(id)predict:(id)arg0 ;
-(id)train:(id)arg0 ;
-(void)checkpoint;
-(void)setLearningRate:(float)arg0 ;


@end


#endif
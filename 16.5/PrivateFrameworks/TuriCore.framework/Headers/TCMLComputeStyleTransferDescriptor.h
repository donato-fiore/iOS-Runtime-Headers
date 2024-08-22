// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCMLCOMPUTESTYLETRANSFERDESCRIPTOR_H
#define TCMLCOMPUTESTYLETRANSFERDESCRIPTOR_H

@class NSArray, MLCTensor, NSDictionary;

#import <Foundation/Foundation.h>


@interface TCMLComputeStyleTransferDescriptor : NSObject

@property (retain, nonatomic) NSArray *contentStrength; // ivar: _contentStrength
@property (retain, nonatomic) MLCTensor *contentTensor; // ivar: _contentTensor
@property (retain, nonatomic) NSDictionary *descriptors; // ivar: _descriptors
@property (retain, nonatomic) MLCTensor *inferenceContentTensor; // ivar: _inferenceContentTensor
@property (retain, nonatomic) MLCTensor *inferencePixelScaleTensor; // ivar: _inferencePixelScaleTensor
@property (retain, nonatomic) MLCTensor *meanTensor; // ivar: _meanTensor
@property (retain, nonatomic) MLCTensor *pixelScaleTensor; // ivar: _pixelScaleTensor
@property (retain, nonatomic) MLCTensor *styleLossWeightTensor; // ivar: _styleLossWeightTensor
@property (retain, nonatomic) NSArray *styleStrength; // ivar: _styleStrength
@property (retain, nonatomic) MLCTensor *styleTensor; // ivar: _styleTensor
@property (retain, nonatomic) MLCTensor *varianceTensor; // ivar: _varianceTensor
@property (retain, nonatomic) NSDictionary *weights; // ivar: _weights


+(id)defineVGG16Block1Descriptor:(id)arg0 inputChannels:(NSUInteger)arg1 outputChannels:(NSUInteger)arg2 ;
+(id)defineVGG16Block2Descriptor:(id)arg0 inputChannels:(NSUInteger)arg1 outputChannels:(NSUInteger)arg2 ;
+(id)defineVGG16Descriptor:(id)arg0 ;
+(id)styleNetDescriptor:(id)arg0 algorithmType:(int)arg1 ;
+(void)convolutionLayerDescriptor:(id)arg0 normPrefix:(id)arg1 descriptorDictionary:(*id)arg2 kernelSize:(NSUInteger)arg3 strideSize:(NSUInteger)arg4 inputChannels:(NSUInteger)arg5 outputChannels:(NSUInteger)arg6 upsampleType:(int)arg7 ;
+(void)residualDescriptor:(id)arg0 normPrefix:(id)arg1 inputChannels:(NSUInteger)arg2 outputChannels:(NSUInteger)arg3 descriptorDictionary:(*id)arg4 ;
-(BOOL)isComplete;
-(id)initTrain:(BOOL)arg0 algorithmType:(int)arg1 ;


@end


#endif
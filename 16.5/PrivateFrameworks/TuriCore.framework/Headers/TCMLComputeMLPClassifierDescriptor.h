// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCMLCOMPUTEMLPCLASSIFIERDESCRIPTOR_H
#define TCMLCOMPUTEMLPCLASSIFIERDESCRIPTOR_H

@class MLCTensor, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface TCMLComputeMLPClassifierDescriptor : NSObject

@property (retain, nonatomic) MLCTensor *fcFinalTensor; // ivar: _fcFinalTensor
@property (retain, nonatomic) MLCTensor *inputTensor; // ivar: _inputTensor
@property (retain, nonatomic) NSArray *layerSizes; // ivar: _layerSizes
@property (nonatomic) NSUInteger outputChannels; // ivar: _outputChannels
@property (retain, nonatomic) NSDictionary *tensors; // ivar: _tensors


-(BOOL)isComplete;
-(id)addFullyConnectedLayerWithIndex:(NSUInteger)arg0 outputChannels:(NSUInteger)arg1 source:(id)arg2 graph:(id)arg3 ;
-(id)fullyConnectedLayerForIndex:(NSUInteger)arg0 outputChannels:(NSUInteger)arg1 ;


@end


#endif
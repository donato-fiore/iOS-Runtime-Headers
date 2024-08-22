// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCMPSDECODINGDESCRIPTOR_H
#define TCMPSDECODINGDESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "TCMPSConvolutionDescriptor.h"
#import "TCMPSInstanceNormalizationDescriptor.h"
#import "TCMPSUpsamplingDescriptor.h"

@interface TCMPSDecodingDescriptor : NSObject

@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv; // ivar: _conv
@property (retain, nonatomic) TCMPSInstanceNormalizationDescriptor *inst; // ivar: _inst
@property (retain, nonatomic) TCMPSUpsamplingDescriptor *upsample; // ivar: _upsample


-(id)init;


@end


#endif
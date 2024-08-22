// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCMPSENCODINGDESCRIPTOR_H
#define TCMPSENCODINGDESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "TCMPSConvolutionDescriptor.h"
#import "TCMPSInstanceNormalizationDescriptor.h"

@interface TCMPSEncodingDescriptor : NSObject

@property (retain, nonatomic) TCMPSConvolutionDescriptor *conv; // ivar: _conv
@property (retain, nonatomic) TCMPSInstanceNormalizationDescriptor *inst; // ivar: _inst


-(id)init;


@end


#endif
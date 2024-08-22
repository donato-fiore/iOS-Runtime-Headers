// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCMPSCONVOLUTIONPADDING_H
#define TCMPSCONVOLUTIONPADDING_H

@class NSString;
@protocol MPSNNPadding;

#import <Foundation/Foundation.h>


@interface TCMPSConvolutionPadding : NSObject <MPSNNPadding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger paddingHeight; // ivar: _paddingHeight
@property (nonatomic) NSUInteger paddingWidth; // ivar: _paddingWidth
@property (nonatomic) NSUInteger strideHeight; // ivar: _strideHeight
@property (nonatomic) NSUInteger strideWidth; // ivar: _strideWidth
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(NSUInteger)paddingMethod;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 forKernel:(id)arg2 suggestedDescriptor:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParams:(NSUInteger)arg0 paddingHeight:(NSUInteger)arg1 strideWidth:(NSUInteger)arg2 strideHeight:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRRECOGNIZERASYNCFEATUREBATCHPROVIDERV1_H
#define CRRECOGNIZERASYNCFEATUREBATCHPROVIDERV1_H

@class NSString;
@protocol CRRecognizerFeatureProviding, CRTextRecognizerModelInputProvider;

#import <Foundation/Foundation.h>

#import "CRNeuralRecognizerConfiguration.h"

@interface CRRecognizerAsyncFeatureBatchProviderV1 : NSObject <CRRecognizerFeatureProviding>



@property (retain) CRNeuralRecognizerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<CRTextRecognizerModelInputProvider> *inputProvider; // ivar: _inputProvider
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 inputProvider:(id)arg1 error:(*id)arg2 ;
-(void)enumerateInputsForImage:(id)arg0 textFeatures:(id)arg1 usingBlock:(id)arg2 ;


@end


#endif
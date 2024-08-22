// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRFUTHARK_H
#define CRFUTHARK_H


#import <Foundation/Foundation.h>


@interface CRFuthark : NSObject



+(id)detectAndRecognizeTextInImage:(id)arg0 options:(id)arg1 ;
+(id)detectAndRecognizeTextInImage:(id)arg0 options:(id)arg1 withProgressHandler:(id)arg2 ;
+(id)detectAndRecognizeTextInImage:(id)arg0 withMaxNumScales:(NSUInteger)arg1 options:(id)arg2 withProgressHandler:(id)arg3 ;
+(id)detectTextInImage:(id)arg0 options:(id)arg1 ;
+(id)detectTextInImage:(id)arg0 withMaxNumScales:(NSUInteger)arg1 options:(id)arg2 ;
+(id)detectTextInImage:(id)arg0 withMaxNumScales:(NSUInteger)arg1 withThresholdingAlgorithm:(NSInteger)arg2 options:(id)arg3 ;
+(id)runFutharkOnImage:(id)arg0 recognizeFeatures:(BOOL)arg1 options:(id)arg2 ;
+(id)runFutharkOnImage:(id)arg0 recognizeFeatures:(BOOL)arg1 withMaxNumScales:(NSUInteger)arg2 withThresholdingAlgorithm:(NSInteger)arg3 options:(id)arg4 withProgressHandler:(id)arg5 ;


@end


#endif
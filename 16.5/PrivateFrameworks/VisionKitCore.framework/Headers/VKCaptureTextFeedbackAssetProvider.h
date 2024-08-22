// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCAPTURETEXTFEEDBACKASSETPROVIDER_H
#define VKCAPTURETEXTFEEDBACKASSETPROVIDER_H

@class NSString;
@protocol VKFeedbackAssetsProvider;

#import <Foundation/Foundation.h>

#import "VKCaptureTextDetectionResult.h"
#import "VKCaptureTextAnalysisRequest.h"

@interface VKCaptureTextFeedbackAssetProvider : NSObject <VKFeedbackAssetsProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) VKCaptureTextDetectionResult *detectionResult; // ivar: _detectionResult
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VKCaptureTextAnalysisRequest *request; // ivar: _request
@property (readonly) Class superclass;


-(BOOL)saveAssetsToFeedbackAttachmentsFolder:(id)arg0 error:(*id)arg1 ;
-(id)initWithRequest:(id)arg0 detectionResult:(id)arg1 ;


@end


#endif
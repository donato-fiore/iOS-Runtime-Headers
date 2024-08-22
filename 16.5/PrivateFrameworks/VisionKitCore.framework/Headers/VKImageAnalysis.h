// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKIMAGEANALYSIS_H
#define VKIMAGEANALYSIS_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VKFeedbackProvider.h"
#import "VKCImageAnalysisResult.h"

@interface VKImageAnalysis : NSObject <NSSecureCoding>

 {
    VKFeedbackProvider *_feedbackProvider;
}


@property (readonly, nonatomic) int analysisRequestID;
@property (nonatomic) VKFeedbackProvider *feedbackProvider;
@property (readonly, nonatomic) NSArray *filteredNormalizedRectangleQuads;
@property (retain, nonatomic) VKCImageAnalysisResult *imageAnalysisResult; // ivar: _imageAnalysisResult
@property (readonly, nonatomic) NSArray *rectangleObservations;
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, nonatomic) NSString *transcript;


+(BOOL)supportsSecureCoding;
-(BOOL)_hasVisualSearchElements;
-(BOOL)hasResultsForAnalysisTypes:(NSUInteger)arg0 ;
-(BOOL)writeSecureCodedArchiveToURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)countOfDataDetectorsWithTypes:(NSUInteger)arg0 ;
-(id)_attributedStringForRange:(struct _NSRange )arg0 ;
-(id)allLines;
-(id)analysisByReplacingTypes:(NSUInteger)arg0 fromAnalysis:(id)arg1 ;
-(id)barcodeActions;
-(id)initWithAnalysisResult:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mrcMenu;
-(id)presentingViewControllerForMrcAction;
-(id)textDataDetectors;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPresentingViewControllerForMrcAction:(id)arg0 ;
-(void)translateFrom:(id)arg0 to:(id)arg1 withCompletion:(id)arg2 ;
-(void)translateTo:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKCIMAGEANALYZERREQUEST_H
#define VKCIMAGEANALYZERREQUEST_H

@class NSURL, NSArray, CIImage, NSString, UIImage, CLLocation, NSDate;
@protocol NSCopying, VKFeedbackAssetsProvider;

#import <Foundation/Foundation.h>

#import "VKCImageAnalysis.h"

@interface VKCImageAnalyzerRequest : NSObject <NSCopying, VKFeedbackAssetsProvider>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) BOOL _wantsRectangleDetection; // ivar: __wantsRectangleDetection
@property (nonatomic) NSUInteger analysisTypes; // ivar: _analysisTypes
@property (retain, nonatomic) NSArray *barcodeSymbologies; // ivar: _barcodeSymbologies
@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (nonatomic) *CGImage cgImageRef; // ivar: _cgImageRef
@property (nonatomic) unsigned int cgimageOrientation; // ivar: _cgimageOrientation
@property (retain, nonatomic) CIImage *ciImage; // ivar: _ciImage
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *defaultBarcodeSymbologies; // ivar: _defaultBarcodeSymbologies
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) NSInteger imageOrientation; // ivar: _imageOrientation
@property (readonly, nonatomic) CGSize imageSize;
@property (nonatomic) NSUInteger imageSource; // ivar: _imageSource
@property (copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (retain, nonatomic) VKCImageAnalysis *inProcessAnalysis; // ivar: _inProcessAnalysis
@property (nonatomic) BOOL isMultiPartAnalysis; // ivar: _isMultiPartAnalysis
@property (copy, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (retain, nonatomic) NSArray *locales; // ivar: _locales
@property (copy, nonatomic) CLLocation *location; // ivar: _location
@property (nonatomic) int madRequestID; // ivar: _madRequestID
@property (copy, nonatomic) NSURL *pageURL; // ivar: _pageURL
@property (nonatomic) CGSize photosImageSize; // ivar: _photosImageSize
@property (nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (retain, nonatomic) NSDate *processDate; // ivar: _processDate
@property (nonatomic) NSUInteger processedAnalysisTypes; // ivar: _processedAnalysisTypes
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic) NSUInteger queryID; // ivar: _queryID
@property (nonatomic) int requestID; // ivar: _requestID
@property (nonatomic) NSUInteger requestType; // ivar: _requestType
@property (readonly, nonatomic) NSUInteger requestedAnalysisTypes;
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


+(NSUInteger)newQueryIDForParsec;
-(BOOL)isPhotosAssetRequest;
-(BOOL)saveAssetsToFeedbackAttachmentsFolder:(id)arg0 error:(*id)arg1 ;
-(id)blockingCreatePNGAssetDataWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createVNRequestHandler;
-(id)init;
-(id)initWithCGImage:(struct CGImage *)arg0 orientation:(NSInteger)arg1 requestType:(NSUInteger)arg2 ;
-(id)initWithCIImage:(id)arg0 orientation:(NSInteger)arg1 requestType:(NSUInteger)arg2 ;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 orientation:(NSInteger)arg1 requestType:(NSUInteger)arg2 ;
-(id)initWithImage:(id)arg0 orientation:(NSInteger)arg1 requestType:(NSUInteger)arg2 ;
-(id)initWithImage:(id)arg0 requestType:(NSUInteger)arg1 ;
-(id)initWithImageURL:(id)arg0 requestType:(NSUInteger)arg1 ;
-(id)initWithLocalIdentifier:(id)arg0 photoLibraryURL:(id)arg1 cgImage:(struct CGImage *)arg2 orientation:(NSInteger)arg3 requestType:(NSUInteger)arg4 ;
-(id)initWithLocalIdentifier:(id)arg0 photoLibraryURL:(id)arg1 imageSize:(struct CGSize )arg2 requestType:(NSUInteger)arg3 ;
-(id)initWithLocalIdentifier:(id)arg0 photoLibraryURL:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 orientation:(NSInteger)arg3 requestType:(NSUInteger)arg4 ;
-(id)initWithView:(id)arg0 requestType:(NSUInteger)arg1 ;
-(id)madRequests;
-(id)processedBarcodeSymbologies;
-(id)shortLoggingDescription;
-(id)viImageType;
-(struct CGImage *)blockingGenerateCGImage;
-(struct CGSize )imageSizeFromCGImageSource:(struct CGImageSource *)arg0 ;
-(struct __CVBuffer *)tempPixelBufferRef;
-(void)dealloc;


@end


#endif
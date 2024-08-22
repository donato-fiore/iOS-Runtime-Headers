// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKDATASCANNERVIEWCONTROLLERCONFIGURATION_H
#define VKDATASCANNERVIEWCONTROLLERCONFIGURATION_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VKDataScannerViewControllerConfiguration : NSObject <NSCopying>



@property (nonatomic, getter=isGuidanceEnabled) BOOL guidanceEnabled; // ivar: _guidanceEnabled
@property (nonatomic) BOOL highFrameRateItemTracking; // ivar: _highFrameRateItemTracking
@property (nonatomic, getter=isHighlightingEnabled) BOOL highlightingEnabled; // ivar: _highlightingEnabled
@property (nonatomic, getter=isPinchToZoomEnabled) BOOL pinchToZoomEnabled; // ivar: _pinchToZoomEnabled
@property (nonatomic) NSUInteger qualityLevel; // ivar: _qualityLevel
@property (copy, nonatomic) NSArray *recognitionLanguages; // ivar: _recognitionLanguages
@property (nonatomic) BOOL recognizesMultipleItems; // ivar: _recognizesMultipleItems
@property (nonatomic) NSUInteger scannerType; // ivar: _scannerType
@property (copy, nonatomic) NSArray *symbologies; // ivar: _symbologies
@property (nonatomic) NSString *textContentType; // ivar: _textContentType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTextScannerViewControllerConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif
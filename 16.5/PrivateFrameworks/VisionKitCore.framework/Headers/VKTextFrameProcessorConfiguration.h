// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKTEXTFRAMEPROCESSORCONFIGURATION_H
#define VKTEXTFRAMEPROCESSORCONFIGURATION_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VKTextFrameProcessorConfiguration : NSObject <NSCopying>



@property (nonatomic) CGPoint comparisonPoint; // ivar: _comparisonPoint
@property (copy, nonatomic) NSArray *customWords; // ivar: _customWords
@property (nonatomic) NSUInteger documentBlockType; // ivar: _documentBlockType
@property (nonatomic) BOOL isForSingleItem; // ivar: _isForSingleItem
@property (copy, nonatomic) NSArray *recognitionLanguages; // ivar: _recognitionLanguages
@property (readonly, nonatomic) BOOL shouldPerformTextDetectionGating;
@property (nonatomic) NSString *textContentType; // ivar: _textContentType
@property (nonatomic) BOOL usesAlternateLineGrouping; // ivar: _usesAlternateLineGrouping
@property (nonatomic) BOOL usesLanguageDetection; // ivar: _usesLanguageDetection


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTextFrameProcessorConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif
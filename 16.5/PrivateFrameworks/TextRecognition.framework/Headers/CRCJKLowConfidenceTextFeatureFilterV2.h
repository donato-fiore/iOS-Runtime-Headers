// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRCJKLOWCONFIDENCETEXTFEATUREFILTERV2_H
#define CRCJKLOWCONFIDENCETEXTFEATUREFILTERV2_H

@protocol CRSingleTextFeatureFiltering;

#import <Foundation/Foundation.h>


@interface CRCJKLowConfidenceTextFeatureFilterV2 : NSObject <CRSingleTextFeatureFiltering>



@property (readonly) CGFloat lowConfidenceThreshold1CharLines; // ivar: _lowConfidenceThreshold1CharLines
@property (readonly) CGFloat lowConfidenceThreshold2PlusCharLines; // ivar: _lowConfidenceThreshold2PlusCharLines
@property (readonly) CGFloat lowConfidenceThresholdIsolated1CharLines; // ivar: _lowConfidenceThresholdIsolated1CharLines


-(BOOL)shouldFilterFeature:(id)arg0 ;
-(BOOL)shouldFilterFeatureBasedOnGeometry:(id)arg0 ;
-(id)initWithLowConfidenceThresholdFor1CharLines:(CGFloat)arg0 for2PlusCharLines:(CGFloat)arg1 forIsolated1CharLines:(CGFloat)arg2 ;


@end


#endif
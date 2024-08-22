// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCMPSRANDOMCROPAUGMENTER_H
#define TCMPSRANDOMCROPAUGMENTER_H

@class NSString;
@protocol TCMPSImageAugmenting;

#import <Foundation/Foundation.h>


@interface TCMPSRandomCropAugmenter : NSObject <TCMPSImageAugmenting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxAreaFraction; // ivar: _maxAreaFraction
@property (nonatomic) CGFloat maxAspectRatio; // ivar: _maxAspectRatio
@property (nonatomic) NSUInteger maxAttempts; // ivar: _maxAttempts
@property (nonatomic) CGFloat minAreaFraction; // ivar: _minAreaFraction
@property (nonatomic) CGFloat minAspectRatio; // ivar: _minAspectRatio
@property (nonatomic) CGFloat minEjectCoverage; // ivar: _minEjectCoverage
@property (nonatomic) CGFloat minObjectCovered; // ivar: _minObjectCovered
@property (nonatomic) CGFloat skipProbability; // ivar: _skipProbability
@property (readonly) Class superclass;


-(id)applyCrop:(struct CGRect )arg0 toAnnotations:(id)arg1 ;
-(id)imageAugmentedFromImage:(id)arg0 generator:(id)arg1 ;
-(id)init;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCMPSCOLORCONTROLAUGMENTER_H
#define TCMPSCOLORCONTROLAUGMENTER_H

@class NSString;
@protocol TCMPSImageAugmenting;

#import <Foundation/Foundation.h>


@interface TCMPSColorControlAugmenter : NSObject <TCMPSImageAugmenting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxBrightnessDelta; // ivar: _maxBrightnessDelta
@property (nonatomic) CGFloat maxContrastProportion; // ivar: _maxContrastProportion
@property (nonatomic) CGFloat maxSaturationProportion; // ivar: _maxSaturationProportion
@property (readonly) Class superclass;


-(id)imageAugmentedFromImage:(id)arg0 generator:(id)arg1 ;
-(id)init;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKFRAMEINFO_H
#define VKFRAMEINFO_H


#import <Foundation/Foundation.h>


@interface VKFrameInfo : NSObject

@property (nonatomic) CGSize dimensions; // ivar: _dimensions
@property (nonatomic) CGFloat luminosity; // ivar: _luminosity
@property (nonatomic) CGRect regionOfInterest; // ivar: _regionOfInterest
@property (nonatomic) NSUInteger sceneStability; // ivar: _sceneStability
@property (nonatomic) CGAffineTransform visionToCroppedImageTransform; // ivar: _visionToCroppedImageTransform
@property (nonatomic) CGAffineTransform visionToLayerTransform; // ivar: _visionToLayerTransform




@end


#endif
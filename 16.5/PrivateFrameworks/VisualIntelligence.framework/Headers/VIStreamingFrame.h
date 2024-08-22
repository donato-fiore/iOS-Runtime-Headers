// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VISTREAMINGFRAME_H
#define VISTREAMINGFRAME_H

@protocol VIImageContent;

#import <Foundation/Foundation.h>


@interface VIStreamingFrame : NSObject

@property (readonly, nonatomic) NSObject<VIImageContent> *imageContent; // ivar: _imageContent
@property (readonly, nonatomic) CGRect normalizedRegionOfInterest; // ivar: _normalizedRegionOfInterest
@property (readonly, nonatomic) CGFloat stabilityScore; // ivar: _stabilityScore
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithTimeStamp:(CGFloat)arg0 imageContent:(id)arg1 normalizedRegionOfInterest:(struct CGRect )arg2 stabilityScore:(CGFloat)arg3 ;


@end


#endif
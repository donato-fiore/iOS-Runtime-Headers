// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGCAPTUREDPOSE_H
#define VGCAPTUREDPOSE_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VGCaptureData.h"

@interface VGCapturedPose : NSObject <NSSecureCoding>



@property (retain, nonatomic) VGCaptureData *captureData; // ivar: _captureData
@property (nonatomic) BOOL frontPose; // ivar: _frontPose
@property (nonatomic) float selectedAngle; // ivar: _selectedAngle
@property (retain, nonatomic) NSDictionary *trackingData; // ivar: _trackingData
@property (readonly, nonatomic) BOOL valid;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
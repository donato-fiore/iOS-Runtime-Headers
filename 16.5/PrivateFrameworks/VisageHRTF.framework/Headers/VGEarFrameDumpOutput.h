// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGEARFRAMEDUMPOUTPUT_H
#define VGEARFRAMEDUMPOUTPUT_H

@class NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VGEarFrameDumpOutput : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *leftEarEnrolledPoses; // ivar: _leftEarEnrolledPoses
@property (retain, nonatomic) NSDictionary *leftEarEnrolledYawToBoundingBox; // ivar: _leftEarEnrolledYawToBoundingBox
@property (retain, nonatomic) NSArray *rightEarEnrolledPoses; // ivar: _rightEarEnrolledPoses
@property (retain, nonatomic) NSDictionary *rightEarEnrolledYawToBoundingBox; // ivar: _rightEarEnrolledYawToBoundingBox


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
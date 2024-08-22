// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGFACEENROLLMENTOPTIONS_H
#define VGFACEENROLLMENTOPTIONS_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VGFaceCaptureOptions.h"

@interface VGFaceEnrollmentOptions : NSObject <NSSecureCoding>



@property (nonatomic) BOOL applyBaconLighting; // ivar: _applyBaconLighting
@property (nonatomic) float bottomMarginHeadRatio;
@property (retain, nonatomic) NSString *cameraImageColorSpaceName;
@property (readonly, nonatomic) VGFaceCaptureOptions *captureOptions; // ivar: _captureOptions
@property (nonatomic) BOOL deterministicMode; // ivar: _deterministicMode
@property (nonatomic) BOOL ensureAlmostNeutralExpressionOnAllPoses;
@property (nonatomic) BOOL ensureEyesForwardOnFrontPose;
@property (nonatomic) BOOL ensureEyesOpenOnAllPoses;
@property (nonatomic) BOOL ensureEyesOpenOnFrontPose;
@property (nonatomic) float eyesForwardPitchSensitivity;
@property (nonatomic) float eyesForwardYawSensitivity;
@property (nonatomic) float eyesOpenSensitivity;
@property (nonatomic) BOOL generateBaconPanel; // ivar: _generateBaconPanel
@property (nonatomic) BOOL generatePIFu; // ivar: _generatePIFu
@property (nonatomic) NSUInteger identityFittingOp; // ivar: _identityFittingOp
@property (nonatomic) float leftMarginHeadRatio;
@property (nonatomic) float neutralExpressionLowerBound;
@property (nonatomic) float neutralExpressionUpperBound;
@property (nonatomic) float pitchLimit;
@property (nonatomic) float pitchSensitivity;
@property (retain, nonatomic) NSArray *requiredExpressions;
@property (nonatomic) NSUInteger requiredPitchPoses;
@property (nonatomic) NSUInteger requiredYawPoses;
@property (nonatomic) float rightMarginHeadRatio;
@property (retain, nonatomic) NSString *saveDirectory; // ivar: _saveDirectory
@property (nonatomic) float topMarginHeadRatio;
@property (nonatomic) BOOL useFaceTrackingDictionary;
@property (nonatomic) float yawLimit;
@property (nonatomic) float yawSensitivity;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_setDefaultsWithSuiteName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
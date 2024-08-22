// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFTRAITSARBITRATIONDEVICEORIENTATIONINPUTS_H
#define SBFTRAITSARBITRATIONDEVICEORIENTATIONINPUTS_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBFTraitsArbitrationDeviceOrientationInputs : NSObject <NSCopying, BSDescriptionProviding>



@property (readonly, nonatomic) NSInteger currentDeviceOrientation; // ivar: _currentDeviceOrientation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger nonFlatDeviceOrientation; // ivar: _nonFlatDeviceOrientation
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDeviceOrientationInputs:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCurrentDeviceOrientation:(NSInteger)arg0 nonFlatDeviceOrientation:(NSInteger)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif
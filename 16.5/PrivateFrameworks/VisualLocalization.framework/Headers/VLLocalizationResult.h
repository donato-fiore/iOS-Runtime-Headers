// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VLLOCALIZATIONRESULT_H
#define VLLOCALIZATIONRESULT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VLLocalizationDebugInfo.h"

@interface VLLocalizationResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, nonatomic) ? covariance; // ivar: _covariance
@property (readonly, nonatomic) VLLocalizationDebugInfo *debugInfo; // ivar: _debugInfo
@property (readonly, nonatomic) CGFloat inputTimestamp; // ivar: _timestamp
@property (readonly, nonatomic) ? location; // ivar: _location
@property (readonly, nonatomic) NSUInteger timestamp;
@property (readonly, nonatomic) ? transform; // ivar: _transform


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 pose:(struct ? *)arg1 debugInfo:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
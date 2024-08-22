// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUNEARBYDEVICEHANDLECAPABILITIES_H
#define TUNEARBYDEVICEHANDLECAPABILITIES_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface TUNearbyDeviceHandleCapabilities : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic, getter=isAVLessCapable) BOOL avLessCapable;
@property (readonly, copy, nonatomic) NSString *sourceVersion; // ivar: _sourceVersion


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceVersion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
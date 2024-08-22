// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTDEVICESTATUS_H
#define KTDEVICESTATUS_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "KTIDMSDevice.h"
#import "KTLoggableData.h"

@interface KTDeviceStatus : NSObject <NSSecureCoding>



@property (retain) KTIDMSDevice *idms; // ivar: _idms
@property (retain) KTLoggableData *loggableData; // ivar: _loggableData
@property (retain) NSError *loggableDataError; // ivar: _loggableDataError


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
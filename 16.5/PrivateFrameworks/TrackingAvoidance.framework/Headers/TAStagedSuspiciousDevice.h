// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TASTAGEDSUSPICIOUSDEVICE_H
#define TASTAGEDSUSPICIOUSDEVICE_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TASuspiciousDevice.h"

@interface TAStagedSuspiciousDevice : NSObject <NSSecureCoding>



@property (readonly, nonatomic) TASuspiciousDevice *detection; // ivar: _detection
@property (copy, nonatomic) NSDate *keepInStagingUntil; // ivar: _keepInStagingUntil


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)descriptionDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDetection:(id)arg0 keepInStagingUntil:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPSERVICEUPDATERMATCHEDEARULE_H
#define UARPSERVICEUPDATERMATCHEDEARULE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UARPServiceUpdaterMatchedEARule : NSObject <NSSecureCoding>



@property (readonly) NSString *accessorySerialNumber; // ivar: _accessorySerialNumber
@property (readonly) NSString *eaIdentifier; // ivar: _eaIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEAIdentifier:(id)arg0 accessorySerialNumber:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
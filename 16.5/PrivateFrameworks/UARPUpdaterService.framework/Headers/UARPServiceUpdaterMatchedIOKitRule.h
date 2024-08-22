// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPSERVICEUPDATERMATCHEDIOKITRULE_H
#define UARPSERVICEUPDATERMATCHEDIOKITRULE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UARPServiceUpdaterMatchedIOKitRule : NSObject <NSSecureCoding>



@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSUInteger registryEntryID; // ivar: _registryEntryID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 registryEntryID:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
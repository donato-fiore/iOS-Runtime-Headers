// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WPCHARACTERISTIC_H
#define WPCHARACTERISTIC_H

@class NSData, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WPCharacteristic : NSObject <NSSecureCoding>



@property (retain) NSData *data; // ivar: _data
@property NSUInteger permissions; // ivar: _permissions
@property NSUInteger properties; // ivar: _properties
@property (retain) NSUUID *uuid; // ivar: _uuid
@property NSInteger writeType; // ivar: _writeType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
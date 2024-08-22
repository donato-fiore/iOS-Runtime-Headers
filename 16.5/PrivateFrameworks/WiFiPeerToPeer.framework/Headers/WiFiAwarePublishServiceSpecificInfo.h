// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIAWAREPUBLISHSERVICESPECIFICINFO_H
#define WIFIAWAREPUBLISHSERVICESPECIFICINFO_H

@class NSData, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WiFiAwarePublishServiceSpecificInfo : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSData *blob; // ivar: _blob
@property (copy, nonatomic) NSString *instanceName; // ivar: _instanceName
@property (copy, nonatomic) NSData *txtRecordData; // ivar: _txtRecordData


+(BOOL)supportsSecureCoding;
-(BOOL)blobEquals:(id)arg0 ;
-(BOOL)instanceNameEquals:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)txtRecordEquals:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQCLOUDSTORAGEAPPS_H
#define ICQCLOUDSTORAGEAPPS_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICQCloudStorageApps : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *apps; // ivar: _apps
@property (copy, nonatomic) NSString *genericErrorMessage; // ivar: _genericErrorMessage


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
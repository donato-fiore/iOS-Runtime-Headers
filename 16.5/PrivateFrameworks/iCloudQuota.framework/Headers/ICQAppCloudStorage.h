// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQAPPCLOUDSTORAGE_H
#define ICQAPPCLOUDSTORAGE_H

@class NSString, NSURL, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICQAppCloudStorage : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSURL *liftUIURL; // ivar: _liftUIURL
@property (retain, nonatomic) NSURL *ruiURL; // ivar: _ruiURL
@property (retain, nonatomic) NSNumber *storageUsed; // ivar: _storageUsed


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
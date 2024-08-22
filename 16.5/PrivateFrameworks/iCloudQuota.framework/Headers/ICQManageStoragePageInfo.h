// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQMANAGESTORAGEPAGEINFO_H
#define ICQMANAGESTORAGEPAGEINFO_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICQManageStoragePageInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (retain, nonatomic) NSArray *tips; // ivar: _tips


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
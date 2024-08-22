// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQTIPCRITERIA_H
#define ICQTIPCRITERIA_H

@class NSURL, NSArray, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICQTipCriteria : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSURL *criteriaURL; // ivar: _criteriaURL
@property (retain, nonatomic) NSArray *excludeApps; // ivar: _excludeApps
@property (retain, nonatomic) NSNumber *maximumRange; // ivar: _maximumRange
@property (retain, nonatomic) NSNumber *minimumRange; // ivar: _minimumRange


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
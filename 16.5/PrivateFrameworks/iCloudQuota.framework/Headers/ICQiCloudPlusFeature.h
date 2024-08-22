// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQICLOUDPLUSFEATURE_H
#define ICQICLOUDPLUSFEATURE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICQImageURL.h"

@interface ICQiCloudPlusFeature : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) ICQImageURL *iconURL; // ivar: _iconURL
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *sublabel; // ivar: _sublabel


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
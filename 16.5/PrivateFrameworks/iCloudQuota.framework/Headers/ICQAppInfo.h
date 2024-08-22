// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQAPPINFO_H
#define ICQAPPINFO_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICQActionInfo.h"
#import "ICQImageURL.h"

@interface ICQAppInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) ICQActionInfo *action; // ivar: _action
@property (retain, nonatomic) NSArray *bundleIds; // ivar: _bundleIds
@property (copy, nonatomic) NSString *detailLabel; // ivar: _detailLabel
@property (copy, nonatomic) NSString *detailLabelColor; // ivar: _detailLabelColor
@property (nonatomic) BOOL fetchLocally; // ivar: _fetchLocally
@property (retain, nonatomic) ICQImageURL *iconURL; // ivar: _iconURL
@property (copy, nonatomic) NSString *label; // ivar: _label


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKAPPPROXY_H
#define WLKAPPPROXY_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WLKAppProxy : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) BOOL isAppStoreVendable; // ivar: _isAppStoreVendable
@property (readonly, nonatomic) BOOL isBetaApp; // ivar: _isBetaApp
@property (readonly, nonatomic) BOOL isEntitled; // ivar: _isEntitled
@property (readonly, nonatomic) BOOL isSystemApp; // ivar: _isSystemApp
@property (readonly, nonatomic) BOOL isTVApp;
@property (readonly, copy, nonatomic) NSNumber *itemID; // ivar: _itemID
@property (readonly, copy, nonatomic) NSString *subscriptionInfo; // ivar: _subscriptionInfo
@property (readonly, nonatomic) BOOL supportsTVApp; // ivar: _supportsTVApp
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
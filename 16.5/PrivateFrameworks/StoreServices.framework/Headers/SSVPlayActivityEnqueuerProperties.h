// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVPLAYACTIVITYENQUEUERPROPERTIES_H
#define SSVPLAYACTIVITYENQUEUERPROPERTIES_H

@class NSString, NSNumber, NSTimeZone;
@protocol NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SSVPlayActivityEnqueuerProperties : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isSBEnabled) BOOL SBEnabled; // ivar: _SBEnabled
@property (readonly, copy, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, copy, nonatomic) NSString *deviceGUID; // ivar: _deviceGUID
@property (readonly, copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled; // ivar: _privateListeningEnabled
@property (readonly, nonatomic) NSUInteger storeAccountID; // ivar: _storeAccountID
@property (readonly, copy, nonatomic) NSString *storeFrontID; // ivar: _storeFrontID
@property (readonly, nonatomic) NSInteger systemReleaseType; // ivar: _systemReleaseType
@property (readonly, copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(BOOL)supportsSecureCoding;
-(id)_copyWithClass:(Class)arg0 zone:(struct _NSZone *)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
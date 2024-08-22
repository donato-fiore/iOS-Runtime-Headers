// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIAWAREINTERNETSHARINGCONFIGURATION_H
#define WIFIAWAREINTERNETSHARINGCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface WiFiAwareInternetSharingConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL automatic; // ivar: _automatic
@property (retain, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (retain, nonatomic) NSObject *policy; // ivar: _policy
@property (nonatomic) BOOL provider; // ivar: _provider


+(BOOL)supportsSecureCoding;
+(id)provideInternetToInitiatorsFromInterface:(id)arg0 ;
+(id)requestInterentFromResponder;
-(BOOL)interfaceNameEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterfaceName:(id)arg0 isProvider:(BOOL)arg1 isAutomatic:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
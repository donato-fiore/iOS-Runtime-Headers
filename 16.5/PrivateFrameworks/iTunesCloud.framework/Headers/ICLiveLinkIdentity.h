// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICLIVELINKIDENTITY_H
#define ICLIVELINKIDENTITY_H

@class NSString, NSUUID, NSURL, NSPersonNameComponents;
@protocol _ICMutableLiveLinkIdentityPrivate, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICLiveLinkIdentity : NSObject <_ICMutableLiveLinkIdentityPrivate, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *externalIdentifier; // ivar: _externalIdentifier
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (copy, nonatomic) NSPersonNameComponents *nameComponents; // ivar: _nameComponents
@property (nonatomic) NSInteger serverID; // ivar: _serverID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)identityWithIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithBlock:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDRAGGINGSYSTEMSESSIONINFO_H
#define UIDRAGGINGSYSTEMSESSIONINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIDraggingSystemSessionInfo : NSObject <NSSecureCoding>



@property (nonatomic) ? auditToken; // ivar: _auditToken
@property (copy, nonatomic) NSString *persistentSceneIdentifier; // ivar: _persistentSceneIdentifier
@property (nonatomic) int processIdentifier; // ivar: _processIdentifier
@property (copy, nonatomic) NSString *sceneIdentifier;
@property (nonatomic) unsigned int sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) BOOL supportsSystemDrag; // ivar: _supportsSystemDrag


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
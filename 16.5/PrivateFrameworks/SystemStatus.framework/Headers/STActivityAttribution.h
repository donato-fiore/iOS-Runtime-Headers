// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STACTIVITYATTRIBUTION_H
#define STACTIVITYATTRIBUTION_H

@class NSString;
@protocol BSDebugDescriptionProviding, NSSecureCoding, BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>

#import "STAttributedEntity.h"

@interface STActivityAttribution : NSObject <BSDebugDescriptionProviding, NSSecureCoding, BSDescriptionProviding, NSCopying>



@property (readonly, copy, nonatomic) STAttributedEntity *activeEntity; // ivar: _activeEntity
@property (readonly, copy, nonatomic) STAttributedEntity *attributedEntity; // ivar: _attributedEntity
@property (readonly, nonatomic) ? auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int pid;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)attributionWithAuditToken:(struct ? )arg0 ;
+(id)attributionWithPID:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithAttributedEntity:(id)arg0 ;
-(id)initWithAttributedEntity:(id)arg0 activeEntity:(id)arg1 ;
-(id)initWithAuditToken:(struct ? )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPID:(int)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
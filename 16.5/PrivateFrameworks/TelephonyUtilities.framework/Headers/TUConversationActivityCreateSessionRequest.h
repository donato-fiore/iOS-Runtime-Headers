// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCONVERSATIONACTIVITYCREATESESSIONREQUEST_H
#define TUCONVERSATIONACTIVITYCREATESESSIONREQUEST_H

@class NSUUID, NSString, NSData, CKShare;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUConversationActivityMetadata.h"

@interface TUConversationActivityCreateSessionRequest : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (copy, nonatomic) NSData *applicationContext; // ivar: _applicationContext
@property (retain, nonatomic) TUConversationActivityMetadata *metadata; // ivar: _metadata
@property (copy, nonatomic) CKShare *share; // ivar: _share
@property (nonatomic, getter=isStaticActivity) BOOL staticActivity; // ivar: _staticActivity


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationActivitySessionCreationRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 applicationContext:(id)arg1 activityIdentifier:(id)arg2 uuid:(id)arg3 ;
-(id)initWithMetadata:(id)arg0 applicationContext:(id)arg1 activityIdentifier:(id)arg2 uuid:(id)arg3 staticActivity:(BOOL)arg4 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKAPRESENCEASSERTION_H
#define SKAPRESENCEASSERTION_H

@class SKPresencePayload, NSString;
@protocol OS_os_activity;

#import <Foundation/Foundation.h>


@interface SKAPresenceAssertion : NSObject

@property (readonly, nonatomic) BOOL isPersonal; // ivar: _isPersonal
@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity; // ivar: _osActivity
@property (copy, nonatomic) SKPresencePayload *payload; // ivar: _payload
@property (readonly, copy, nonatomic) NSString *presenceIdentifier; // ivar: _presenceIdentifier


+(id)logger;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPresenceAssertion:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithPresenceIdentifier:(id)arg0 isPersonal:(BOOL)arg1 payload:(id)arg2 ;
-(void)dealloc;


@end


#endif
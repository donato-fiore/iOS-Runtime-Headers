// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSERVERCHANGESTATE_H
#define BRCSERVERCHANGESTATE_H

@class CKServerChangeToken, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BRCServerChangeState : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) CKServerChangeToken *changeToken; // ivar: _changeToken
@property (nonatomic) NSUInteger clientRequestID; // ivar: _clientRequestID
@property (readonly, nonatomic) BOOL hasNeverSyncedDown;
@property (retain) NSDate *lastSyncDownDate; // ivar: _lastSyncDownDate
@property (nonatomic) NSInteger lastSyncDownStatus; // ivar: _lastSyncDownStatus


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithContext:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerSyncState:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forgetChangeTokens;
-(void)forgetClientRequestID;
-(void)updateWithServerChangeToken:(id)arg0 clientRequestID:(NSUInteger)arg1 caughtUp:(BOOL)arg2 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSKEYBAGREQUEST_H
#define SSKEYBAGREQUEST_H

@class NSNumber, NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"

@interface SSKeybagRequest : SSRequest <SSXPCCoding>



@property (readonly) NSNumber *accountID; // ivar: _accountID
@property (copy) id *contentIdentifier; // ivar: _contentIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSInteger keybagOptions; // ivar: _options
@property (readonly) Class superclass;


-(id)accountIdentifier;
-(id)copyXPCEncoding;
-(id)initWithAccountIdentifier:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif
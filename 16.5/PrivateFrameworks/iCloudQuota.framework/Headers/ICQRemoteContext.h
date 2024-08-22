// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQREMOTECONTEXT_H
#define ICQREMOTECONTEXT_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICQLink.h"
#import "ICQOffer.h"

@interface ICQRemoteContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *flowOptionsData; // ivar: _flowOptionsData
@property (readonly, nonatomic) ICQLink *link; // ivar: _link
@property (readonly, nonatomic) ICQOffer *offer; // ivar: _offer
@property (readonly, nonatomic) NSData *preloadedRemoteUIData; // ivar: _preloadedRemoteUIData


+(BOOL)supportsSecureCoding;
+(id)ICQContextFromRemoteAlertContext:(id)arg0 ;
+(id)contextFromDictionary:(id)arg0 ;
-(id)_serializedData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOffer:(id)arg0 link:(id)arg1 flowOptionsData:(id)arg2 preloadedRemoteUIData:(id)arg3 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
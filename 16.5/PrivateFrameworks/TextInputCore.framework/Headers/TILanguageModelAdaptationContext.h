// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TILANGUAGEMODELADAPTATIONCONTEXT_H
#define TILANGUAGEMODELADAPTATIONCONTEXT_H

@class NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TILanguageModelAdaptationContext : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *appContext; // ivar: _appContext
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *identifierForResponseKit;
@property (nonatomic) BOOL isOnline; // ivar: _isOnline
@property (readonly, nonatomic) NSDictionary *recipientContext; // ivar: _recipientContext
@property (readonly, nonatomic) NSString *recipientNameDigest; // ivar: _recipientNameDigest


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithClientIdentifier:(id)arg0 andRecipientContactInfo:(id)arg1 ;
-(id)initWithClientIdentifier:(id)arg0 andRecipientRecord:(id)arg1 ;


@end


#endif
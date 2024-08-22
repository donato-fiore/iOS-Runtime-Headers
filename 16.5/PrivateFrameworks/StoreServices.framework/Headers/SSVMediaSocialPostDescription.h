// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVMEDIASOCIALPOSTDESCRIPTION_H
#define SSVMEDIASOCIALPOSTDESCRIPTION_H

@class NSNumber, NSArray, NSString;
@protocol NSCopying, SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSVMediaSocialPostDescription : NSObject <NSCopying, SSXPCCoding>



@property (copy, nonatomic) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSArray *attachments; // ivar: _attachments
@property (nonatomic, getter=isAttributed) BOOL attributed; // ivar: _attributed
@property (copy, nonatomic) NSString *authorIdentifier; // ivar: _authorIdentifier
@property (copy, nonatomic) NSString *authorType; // ivar: _authorType
@property (copy, nonatomic) NSArray *contentItems; // ivar: _contentItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *externalServiceDestinations; // ivar: _externalServiceDestinations
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *sourceApplicationIdentifier; // ivar: _sourceApplicationIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif
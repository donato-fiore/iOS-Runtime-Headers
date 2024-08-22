// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCONTENTKEYSTOREENTRY_H
#define ICCONTENTKEYSTOREENTRY_H

@class NSNumber, NSString, NSData, NSDate;

#import <Foundation/Foundation.h>


@interface ICContentKeyStoreEntry : NSObject

@property (copy, nonatomic) NSNumber *accountDSID; // ivar: _accountDSID
@property (copy, nonatomic) NSNumber *adamID; // ivar: _adamID
@property (nonatomic) NSUInteger failureCount; // ivar: _failureCount
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSData *keyData; // ivar: _keyData
@property (nonatomic) NSInteger keyServerProtocolType; // ivar: _keyServerProtocolType
@property (copy, nonatomic) NSDate *renewalDate; // ivar: _renewalDate


-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif
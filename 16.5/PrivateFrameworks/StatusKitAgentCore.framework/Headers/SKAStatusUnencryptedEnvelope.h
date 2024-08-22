// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKASTATUSUNENCRYPTEDENVELOPE_H
#define SKASTATUSUNENCRYPTEDENVELOPE_H

@class NSDate, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SKAStatusUnencryptedEnvelope : NSObject

@property (readonly, nonatomic) NSDate *dateCreated;
@property (readonly, nonatomic) NSDate *datePublished;
@property (retain, nonatomic) NSDictionary *envelopeDictionary; // ivar: _envelopeDictionary
@property (readonly, nonatomic) NSString *statusUniqueIdentifier;


-(id)initWithEnvelopeDictionary:(id)arg0 ;


@end


#endif
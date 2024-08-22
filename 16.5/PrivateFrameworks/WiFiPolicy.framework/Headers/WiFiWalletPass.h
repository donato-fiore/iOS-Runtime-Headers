// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIWALLETPASS_H
#define WIFIWALLETPASS_H

@class NSString, NSSet, NSDate;
@protocol WiFiCandidateNetwork, TBScore;

#import <Foundation/Foundation.h>


@interface WiFiWalletPass : NSObject <WiFiCandidateNetwork>



@property (copy, nonatomic) NSString *SSID; // ivar: SSID
@property (readonly, nonatomic) NSSet *accessPoints; // ivar: accessPoints
@property (readonly, nonatomic) NSSet *attributes; // ivar: attributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (nonatomic) BOOL matched; // ivar: matched
@property (copy, nonatomic) NSString *password; // ivar: password
@property (readonly, nonatomic) NSObject<TBScore> *popularityScore; // ivar: popularityScore
@property (readonly, nonatomic) NSObject<TBScore> *qualityScore; // ivar: qualityScore
@property (copy, nonatomic) NSDate *relevantDate; // ivar: _relevantDate
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, nonatomic) NSInteger source;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: type
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSUInteger venueGroup; // ivar: venueGroup
@property (readonly, nonatomic) unsigned int venueType; // ivar: venueType


-(BOOL)containsAccessPointMatchingBSSIDs:(id)arg0 ;


@end


#endif
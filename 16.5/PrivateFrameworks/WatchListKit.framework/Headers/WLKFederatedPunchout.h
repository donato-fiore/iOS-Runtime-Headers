// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKFEDERATEDPUNCHOUT_H
#define WLKFEDERATEDPUNCHOUT_H

@class NSString, NSDate, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WLKFederatedPunchout : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *appAdamID; // ivar: _appAdamID
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (retain, nonatomic) NSString *channelID; // ivar: _channelID
@property (nonatomic, getter=isConsented) BOOL consented; // ivar: _consented
@property (retain, nonatomic) NSString *externalContentID; // ivar: _externalContentID
@property (retain, nonatomic) NSDate *punchoutTime; // ivar: _punchoutTime
@property (nonatomic) NSUInteger resumeTimeSeconds; // ivar: _resumeTimeSeconds
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTVERIFIERRESULT_H
#define KTVERIFIERRESULT_H

@class NSString, NSDictionary, NSError, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "KTAccountPublicID.h"

@interface KTVerifierResult : NSObject <NSSecureCoding>



@property (retain) NSString *application; // ivar: _application
@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property BOOL everOptedIn; // ivar: _everOptedIn
@property (retain) NSError *failure; // ivar: _failure
@property (retain) NSArray *loggableDatas; // ivar: _loggableDatas
@property BOOL optedIn; // ivar: _optedIn
@property (retain) KTAccountPublicID *publicID; // ivar: _publicID
@property BOOL recentlyOptedIn; // ivar: _recentlyOptedIn
@property BOOL staticAccountKeyEnforced; // ivar: _staticAccountKeyEnforced
@property NSUInteger succeed; // ivar: _succeed
@property NSUInteger uiStatus; // ivar: _uiStatus
@property (retain) NSString *uri; // ivar: _uri


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initPendingForUri:(id)arg0 application:(id)arg1 ;
-(id)initUnavailableForUri:(id)arg0 application:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUri:(id)arg0 application:(id)arg1 ;
-(id)initWithUri:(id)arg0 application:(id)arg1 failure:(id)arg2 ;
-(id)initWithUri:(id)arg0 application:(id)arg1 ktResult:(NSUInteger)arg2 ;
-(id)initWithUri:(id)arg0 application:(id)arg1 ktResult:(NSUInteger)arg2 failure:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif
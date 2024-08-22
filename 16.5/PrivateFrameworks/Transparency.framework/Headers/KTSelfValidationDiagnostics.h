// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTSELFVALIDATIONDIAGNOSTICS_H
#define KTSELFVALIDATIONDIAGNOSTICS_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTSelfValidationDiagnostics : NSObject <NSSecureCoding>



@property (retain) NSString *accountKey; // ivar: _accountKey
@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property (retain) NSDictionary *ktSelfVerificationInfoDiagnosticsJson; // ivar: _ktSelfVerificationInfoDiagnosticsJson
@property (retain) NSString *rawAccountKey; // ivar: _rawAccountKey
@property (retain) NSDictionary *uriToDiagnostics; // ivar: _uriToDiagnostics


+(BOOL)supportsSecureCoding;
+(id)jsonClasses;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif